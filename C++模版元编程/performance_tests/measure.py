import os
import time
import sys

compilers = ['VC 7.1', 'gcc 2.95.3', 'gcc 3.3', 'MW 9.2', 'Intel 6.0', 'Intel 8.0']
logfile = 'measure.log'

def log( str ):
    sys.stderr.write( str )

def measure(file, compiler, params, repeats):
    t = time.time()
    for i in range(0,repeats):
        os.utime(file, None)
        os.system(r'python cxx.py %s "" "%s" "%s" >>%s' 
              % (file, params, compiler, logfile)
            )
    
    return (time.time() - t) / repeats


def print_header():
    for c in compilers:
        sys.stdout.write( '\t%s' % c )
        if len(c) < 8: sys.stdout.write( '\t' )


def main(file, max_n, factor=1, measure_diff=0, repeats=1):
    if os.path.exists(logfile):
        os.unlink(logfile)
    
    results = {}
    for c in compilers:
        log( c )
        # load the compiler in memory
        measure(file, c, '-DN=%d' % 0, int(repeats))

        too_long = 0
        for n in range(0, int(max_n), int(factor)):
            log( '\n%d\n' % n )
            if not results.has_key(n):
                results[n] = ''
            
            if not too_long:
                time = measure(file, c, '-DN=%d' % n, int(repeats))
                if int(measure_diff) != 0:
                    time2 = measure(file, c, '-DN=%d -DDIFF' % n, int(repeats))
                    time = time - time2
                
                secs = int( time * 100 ) / 100.0
                results[n] += '\t%.2f\t' % secs
                too_long = secs > 200
            else:
                results[n] += '\t--\t'

            
    print_header()
    for n in range(0, int(max_n), int(factor)):
        sys.stdout.write( '\n%d%s' % ( n, results[n] ) )


apply(main, sys.argv[1:])
