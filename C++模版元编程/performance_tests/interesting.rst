=================
Interesting Costs
=================

.. section-numbering::


Naming
------

The cost of naming N specializations of the same template, where
all specializations are part of the same type name.

.. image:: timing/new/results/naming_cost.pdf
  :scale: 50


comeau/gcc omitted
~~~~~~~~~~~~~~~~~~

.. image:: timing/new/results/naming_cost_no_comeau_gcc.pdf
  :scale: 50



.. .. raw:: latex

   $$t = 2.0x10^ -6 x^3 - .00062 x^2 + .070 x - 1.4$$

   That doesn't quite work.

Fit
~~~
  
Comeau 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = -1.40048
    C(01) = 0.0696783
    C(02) = -0.000624915
    C(03) = 2.04524e-006

    Correlation coefficient is 0.99982


GCC 2.95.3 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = -0.170705
    C(01) = 0.0187164
    C(02) = -0.00021598
    C(03) = 1.0559e-006

    Correlation coefficient is 0.992907


GCC 3.3 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = 0.113421
    C(01) = 0.00109584
    C(02) = 1.6275e-005
    C(03) = 3.17837e-007

    Correlation coefficient is 0.999987

Lookup Cost
-----------

.. image:: timing/new/results/lookup_cost.pdf
  :scale: 50

VC 7.1     
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = -0.00517557
    C(01) = 0.000270229
    C(02) = 4.87037e-006

    Correlation coefficient is 0.986379



Memoizing
---------

The cost of looking up N previously-named template
specializations


.. image:: timing/new/results/memoizing.pdf
  :scale: 50

Intel Omitted
~~~~~~~~~~~~~

.. image:: timing/new/results/memoizing_no_intel.pdf
  :scale: 50

Fit
~~~

Intel 6.0 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = -4
    C(01) = 0.04


Intel 8.0 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = -0.0249665
    C(01) = 0.000748048
    C(02) = 1.16128e-005

    Correlation coefficient is 0.996276
 

VC 7.1 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = 0.0230579
    C(01) = -0.00041724
    C(02) = 8.2989e-006

    Correlation coefficient is 0.990808


Memoizing works
---------------

.. image:: timing/new/results/memoizing_works.pdf
  :scale: 50

GCC 3.3     
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = -3.17952
    C(01) = 0.252474
    C(02) = -0.00510428
    C(03) = 3.63657e-005

    Correlation coefficient is 0.999732


GCC 2.95.3     
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = -1.93795
    C(01) = 0.168377
    C(02) = -0.00368343
    C(03) = 2.73924e-005

    Correlation coefficient is 0.999855


GCC Omitted
~~~~~~~~~~~

Intel 6.0 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = -0.681975
    C(01) = 0.0941453
    C(02) = -0.00239733
    C(03) = 1.87371e-005

    Correlation coefficient is 0.999449



Nested Instantiations
---------------------

Cost of doing N nested instantiations -- this is not about type
structure.


.. image:: timing/new/results/nesting_depth.pdf
  :scale: 50


Intel
~~~~~

.. image:: timing/new/results/nesting_depth_intel.pdf
  :scale: 50

Intel Omitted
~~~~~~~~~~~~~

.. image:: timing/new/results/nesting_depth_no_intel.pdf
  :scale: 50



Nested Instantiations 2 (no inheritance)
----------------------------------------


.. image:: timing/new/results/nesting_depth2.pdf
  :scale: 50


GCC 3.3 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = 0.22174
    C(01) = -0.00473114
    C(02) = 0.000109412

    Correlation coefficient is 0.999909



GCC 3.3 Omitted
~~~~~~~~~~~~~~~~

.. image:: timing/new/results/nesting_depth2_no_gcc.pdf
  :scale: 50


Intel 6.0 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = 0.0859629
    C(01) = -0.000695923
    C(02) = 6.23196e-005

    Correlation coefficient is 0.999705


MWCW 9.2 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = 0.33973
    C(01) = -0.00620949
    C(02) = 4.78911e-005

    Correlation coefficient is 0.998228



Number of Specializations
-------------------------

Template "overload resolution" cost for N non-matching overloads

.. image:: timing/new/results/number_of_specializations.pdf
  :scale: 50


Number of Template Parameters
-----------------------------

The cost of passing a template with N parameters through nested
instantiations.

VC 7.1 has a hard-coded limit of 63 parameters

.. image:: timing/new/results/number_of_template_parameters.pdf
  :scale: 50



One Level Nesting
-----------------

The cost of wrapping a single node around a template
specialization of N nodes.

.. image:: timing/new/results/one_level_nesting.pdf
  :scale: 50


Pass Symbol Tree
----------------

The cost of passing a tree of N unique nodes through nested
instantiations.


.. image:: timing/new/results/pass_symbol_tree.pdf
  :scale: 50

Fit
~~~

GCC 3.3 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = -0.328871
    C(01) = 0.0468199

    Correlation coefficient is 0.997108


Comeau 4.3.3 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = -0.149317
    C(01) = 0.0237483
    C(02) = -3.78763e-005
    C(03) = 1.27643e-007

    Correlation coefficient is 0.99854


GCC 2.95.3 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = -0.0196
    C(01) = 0.0065902

    Correlation coefficient is 0.995186


Passing complex Symbols
-----------------------

The cost of passing a list of N unique nodes through nested
instantiations.

.. image:: timing/new/results/symbol_complexity.pdf
  :scale: 50

Fit
~~~

Comeau 4.3.3 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = 0.0165809
    C(01) = 0.0110813
    C(02) = -2.21412e-005
    C(03) = 5.14173e-007

    Correlation coefficient is 0.99999


GCC 3.3 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = 0.218538
    C(01) = 0.0264592
    C(02) = 3.8075e-005

    Correlation coefficient is 0.993398


GCC 2.95.3 
    y = C(0) + C(1)*x + C(2)*x**2 + ...

    C(00) = -0.310376
    C(01) = 0.00855664

    Correlation coefficient is 0.958932
