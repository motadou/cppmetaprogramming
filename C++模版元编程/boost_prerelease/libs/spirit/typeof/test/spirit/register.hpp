// Copyright (C) 2004 Arkadiy Vertleyb
// Use, modification and distribution is subject to the Boost Software
// License, Version 1.0. (http://www.boost.org/LICENSE_1_0.txt)

#ifndef SPIRIT_REGISTER_HPP_INCLUDED
#define SPIRIT_REGISTER_HPP_INCLUDED

#include <boost/spirit/typeof/type_encoding.hpp>
#include <boost/spirit/typeof/template_encoding.hpp>
#include <boost/spirit/core.hpp>

#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::action, 2);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::binary, 3);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::chseq, 1);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::ref_const_ref_actor, 3);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::ref_value_actor, 2);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::strlit, 1);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::unary, 2);
BOOST_TYPEOF_REGISTER_TYPE(spirit::alnum_parser);
BOOST_TYPEOF_REGISTER_TYPE(spirit::alpha_parser);
BOOST_TYPEOF_REGISTER_TYPE(spirit::alternative_parser_gen);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::alternative, 2);
BOOST_TYPEOF_REGISTER_TYPE(spirit::anychar_parser);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::as_lower_scanner, 1);
BOOST_TYPEOF_REGISTER_TYPE(spirit::assign_action);
BOOST_TYPEOF_REGISTER_TYPE(spirit::blank_parser);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::bounded_gen, 1);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::bounded, 2);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::char_parser, 1);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::chlit, 1);
BOOST_TYPEOF_REGISTER_TYPE(spirit::cntrl_parser);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::contiguous, 1);
BOOST_TYPEOF_REGISTER_TYPE(spirit::difference_parser_gen);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::difference, 2);
BOOST_TYPEOF_REGISTER_TYPE(spirit::digit_parser);
BOOST_TYPEOF_REGISTER_TYPE(spirit::empty_match_parser_gen);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::empty_match_parser, 1);
BOOST_TYPEOF_REGISTER_TYPE(spirit::end_parser);
BOOST_TYPEOF_REGISTER_TYPE(spirit::eol_parser);
BOOST_TYPEOF_REGISTER_TYPE(spirit::epsilon_parser);
BOOST_TYPEOF_REGISTER_TYPE(spirit::exclusive_or_parser_gen);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::exclusive_or, 2);
BOOST_TYPEOF_REGISTER_TYPE(spirit::graph_parser);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::inhibit_case_iteration_policy, 1);
BOOST_TYPEOF_REGISTER_TYPE(spirit::inhibit_case_parser_gen);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::inhibit_case, 1);
BOOST_TYPEOF_REGISTER_TYPE(spirit::intersection_parser_gen);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::intersection, 2);
BOOST_TYPEOF_REGISTER_TYPE(spirit::kleene_star_parser_gen);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::kleene_star, 1);
BOOST_TYPEOF_REGISTER_TYPE(spirit::lexeme_parser_gen);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::lexeme_scanner, 1);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::longest_alternative, 2);
BOOST_TYPEOF_REGISTER_TYPE(spirit::longest_parser_gen);
BOOST_TYPEOF_REGISTER_TYPE(spirit::lower_parser);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::max_bounded_gen, 1);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::max_bounded, 2);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::min_bounded_gen, 1);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::min_bounded, 2);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::negated_char_parser, 1);
BOOST_TYPEOF_REGISTER_TYPE(spirit::negated_empty_match_parser_gen);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::negated_empty_match_parser, 1);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::no_actions_action_policy, 1);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::no_actions_scanner, 1);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::no_skipper_iteration_policy, 1);
BOOST_TYPEOF_REGISTER_TYPE(spirit::nothing_parser);
BOOST_TYPEOF_REGISTER_TYPE(spirit::optional_parser_gen);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::optional, 1);
BOOST_TYPEOF_REGISTER_TYPE(spirit::positive_parser_gen);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::positive, 1);
BOOST_TYPEOF_REGISTER_TYPE(spirit::print_parser);
BOOST_TYPEOF_REGISTER_TYPE(spirit::punct_parser);
BOOST_TYPEOF_REGISTER_TYPE(spirit::push_back_action);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::range, 1);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::real_parser_policies, 1);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::real_parser, 2);
BOOST_TYPEOF_REGISTER_TYPE(spirit::sequence_parser_gen);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::sequence, 2);
BOOST_TYPEOF_REGISTER_TYPE(spirit::sequential_or_parser_gen);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::sequential_or, 2);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::shortest_alternative, 2);
BOOST_TYPEOF_REGISTER_TYPE(spirit::shortest_parser_gen);
BOOST_TYPEOF_REGISTER_TYPE(spirit::sign_parser);
BOOST_TYPEOF_REGISTER_TYPE(spirit::space_parser);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::strict_real_parser_policies, 1);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::strict_ureal_parser_policies, 1);
BOOST_TYPEOF_REGISTER_TYPE(spirit::upper_parser);
BOOST_TYPEOF_REGISTER_TEMPLATE(spirit::ureal_parser_policies, 1);
BOOST_TYPEOF_REGISTER_TYPE(spirit::xdigit_parser);

#endif//SPIRIT_REGISTER_HPP_INCLUDED
