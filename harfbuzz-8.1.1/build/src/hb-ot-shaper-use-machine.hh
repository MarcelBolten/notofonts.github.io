
#line 1 "hb-ot-shaper-use-machine.rl"
/*
 * Copyright © 2015  Mozilla Foundation.
 * Copyright © 2015  Google, Inc.
 *
 *  This is part of HarfBuzz, a text shaping library.
 *
 * Permission is hereby granted, without written agreement and without
 * license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the
 * above copyright notice and the following two paragraphs appear in
 * all copies of this software.
 *
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF THE COPYRIGHT HOLDER HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * THE COPYRIGHT HOLDER SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE COPYRIGHT HOLDER HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Mozilla Author(s): Jonathan Kew
 * Google Author(s): Behdad Esfahbod
 */

#ifndef HB_OT_SHAPER_USE_MACHINE_HH
#define HB_OT_SHAPER_USE_MACHINE_HH

#include "hb.hh"

#include "hb-ot-shaper-syllabic.hh"

/* buffer var allocations */
#define use_category() ot_shaper_var_u8_category()

#define USE(Cat) use_syllable_machine_ex_##Cat

enum use_syllable_type_t {
  use_virama_terminated_cluster,
  use_sakot_terminated_cluster,
  use_standard_cluster,
  use_number_joiner_terminated_cluster,
  use_numeral_cluster,
  use_symbol_cluster,
  use_hieroglyph_cluster,
  use_broken_cluster,
  use_non_cluster,
};


#line 57 "hb-ot-shaper-use-machine.hh"
#define use_syllable_machine_ex_B 1u
#define use_syllable_machine_ex_CGJ 6u
#define use_syllable_machine_ex_CMAbv 31u
#define use_syllable_machine_ex_CMBlw 32u
#define use_syllable_machine_ex_CS 43u
#define use_syllable_machine_ex_FAbv 24u
#define use_syllable_machine_ex_FBlw 25u
#define use_syllable_machine_ex_FMAbv 45u
#define use_syllable_machine_ex_FMBlw 46u
#define use_syllable_machine_ex_FMPst 47u
#define use_syllable_machine_ex_FPst 26u
#define use_syllable_machine_ex_G 49u
#define use_syllable_machine_ex_GB 5u
#define use_syllable_machine_ex_H 12u
#define use_syllable_machine_ex_HN 13u
#define use_syllable_machine_ex_HVM 53u
#define use_syllable_machine_ex_IS 44u
#define use_syllable_machine_ex_J 50u
#define use_syllable_machine_ex_MAbv 27u
#define use_syllable_machine_ex_MBlw 28u
#define use_syllable_machine_ex_MPre 30u
#define use_syllable_machine_ex_MPst 29u
#define use_syllable_machine_ex_N 4u
#define use_syllable_machine_ex_O 0u
#define use_syllable_machine_ex_R 18u
#define use_syllable_machine_ex_SB 51u
#define use_syllable_machine_ex_SE 52u
#define use_syllable_machine_ex_SMAbv 41u
#define use_syllable_machine_ex_SMBlw 42u
#define use_syllable_machine_ex_SUB 11u
#define use_syllable_machine_ex_Sk 48u
#define use_syllable_machine_ex_VAbv 33u
#define use_syllable_machine_ex_VBlw 34u
#define use_syllable_machine_ex_VMAbv 37u
#define use_syllable_machine_ex_VMBlw 38u
#define use_syllable_machine_ex_VMPre 23u
#define use_syllable_machine_ex_VMPst 39u
#define use_syllable_machine_ex_VPre 22u
#define use_syllable_machine_ex_VPst 35u
#define use_syllable_machine_ex_WJ 16u
#define use_syllable_machine_ex_ZWNJ 14u


#line 101 "hb-ot-shaper-use-machine.hh"
static const unsigned char _use_syllable_machine_trans_keys[] = {
	0u, 53u, 11u, 53u, 11u, 53u, 1u, 53u, 14u, 48u, 14u, 47u, 14u, 47u, 14u, 47u, 
	14u, 46u, 14u, 46u, 14u, 14u, 14u, 48u, 14u, 48u, 14u, 48u, 1u, 14u, 14u, 48u, 
	14u, 53u, 14u, 53u, 14u, 53u, 14u, 53u, 12u, 53u, 14u, 53u, 12u, 53u, 12u, 53u, 
	12u, 53u, 11u, 53u, 1u, 14u, 1u, 48u, 14u, 42u, 14u, 42u, 11u, 53u, 1u, 53u, 
	14u, 48u, 14u, 47u, 14u, 47u, 14u, 47u, 14u, 46u, 14u, 46u, 14u, 14u, 14u, 48u, 
	14u, 48u, 14u, 48u, 1u, 14u, 14u, 48u, 14u, 53u, 14u, 53u, 14u, 53u, 14u, 53u, 
	12u, 53u, 14u, 53u, 12u, 53u, 12u, 53u, 12u, 53u, 11u, 53u, 1u, 14u, 1u, 14u, 
	1u, 48u, 13u, 14u, 4u, 14u, 11u, 53u, 11u, 53u, 1u, 53u, 14u, 48u, 14u, 47u, 
	14u, 47u, 14u, 47u, 14u, 46u, 14u, 46u, 14u, 14u, 14u, 48u, 14u, 48u, 14u, 48u, 
	1u, 14u, 14u, 48u, 14u, 53u, 14u, 53u, 14u, 53u, 14u, 53u, 12u, 53u, 14u, 53u, 
	12u, 53u, 12u, 53u, 12u, 53u, 11u, 53u, 1u, 14u, 1u, 14u, 1u, 48u, 11u, 53u, 
	1u, 53u, 14u, 48u, 14u, 47u, 14u, 47u, 14u, 47u, 14u, 46u, 14u, 46u, 14u, 14u, 
	14u, 48u, 14u, 48u, 14u, 48u, 1u, 14u, 14u, 48u, 14u, 53u, 14u, 53u, 14u, 53u, 
	14u, 53u, 12u, 53u, 14u, 53u, 12u, 53u, 12u, 53u, 12u, 53u, 11u, 53u, 1u, 14u, 
	1u, 48u, 4u, 14u, 13u, 14u, 1u, 53u, 14u, 42u, 14u, 42u, 1u, 5u, 14u, 52u, 
	14u, 52u, 14u, 51u, 0
};

static const char _use_syllable_machine_key_spans[] = {
	54, 43, 43, 53, 35, 34, 34, 34, 
	33, 33, 1, 35, 35, 35, 14, 35, 
	40, 40, 40, 40, 42, 40, 42, 42, 
	42, 43, 14, 48, 29, 29, 43, 53, 
	35, 34, 34, 34, 33, 33, 1, 35, 
	35, 35, 14, 35, 40, 40, 40, 40, 
	42, 40, 42, 42, 42, 43, 14, 14, 
	48, 2, 11, 43, 43, 53, 35, 34, 
	34, 34, 33, 33, 1, 35, 35, 35, 
	14, 35, 40, 40, 40, 40, 42, 40, 
	42, 42, 42, 43, 14, 14, 48, 43, 
	53, 35, 34, 34, 34, 33, 33, 1, 
	35, 35, 35, 14, 35, 40, 40, 40, 
	40, 42, 40, 42, 42, 42, 43, 14, 
	48, 11, 2, 53, 29, 29, 5, 39, 
	39, 38
};

static const short _use_syllable_machine_index_offsets[] = {
	0, 55, 99, 143, 197, 233, 268, 303, 
	338, 372, 406, 408, 444, 480, 516, 531, 
	567, 608, 649, 690, 731, 774, 815, 858, 
	901, 944, 988, 1003, 1052, 1082, 1112, 1156, 
	1210, 1246, 1281, 1316, 1351, 1385, 1419, 1421, 
	1457, 1493, 1529, 1544, 1580, 1621, 1662, 1703, 
	1744, 1787, 1828, 1871, 1914, 1957, 2001, 2016, 
	2031, 2080, 2083, 2095, 2139, 2183, 2237, 2273, 
	2308, 2343, 2378, 2412, 2446, 2448, 2484, 2520, 
	2556, 2571, 2607, 2648, 2689, 2730, 2771, 2814, 
	2855, 2898, 2941, 2984, 3028, 3043, 3058, 3107, 
	3151, 3205, 3241, 3276, 3311, 3346, 3380, 3414, 
	3416, 3452, 3488, 3524, 3539, 3575, 3616, 3657, 
	3698, 3739, 3782, 3823, 3866, 3909, 3952, 3996, 
	4011, 4060, 4072, 4075, 4129, 4159, 4189, 4195, 
	4235, 4275
};

static const unsigned char _use_syllable_machine_indicies[] = {
	0, 1, 2, 2, 3, 4, 2, 2, 
	2, 2, 2, 5, 6, 7, 8, 2, 
	2, 2, 9, 2, 2, 2, 10, 11, 
	12, 13, 14, 15, 16, 17, 18, 5, 
	19, 20, 21, 22, 2, 23, 24, 25, 
	2, 26, 27, 28, 29, 30, 31, 32, 
	29, 33, 2, 34, 2, 35, 2, 37, 
	38, 36, 39, 36, 36, 36, 36, 36, 
	36, 36, 40, 41, 42, 43, 44, 45, 
	46, 47, 48, 37, 49, 50, 51, 52, 
	36, 53, 54, 55, 36, 56, 57, 36, 
	58, 59, 60, 61, 58, 36, 36, 36, 
	36, 62, 36, 37, 38, 36, 39, 36, 
	36, 36, 36, 36, 36, 36, 40, 41, 
	42, 43, 44, 45, 46, 47, 48, 37, 
	49, 50, 51, 52, 36, 53, 54, 55, 
	36, 36, 36, 36, 58, 59, 60, 61, 
	58, 36, 36, 36, 36, 62, 36, 37, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 39, 36, 36, 36, 
	36, 36, 36, 36, 36, 41, 42, 43, 
	44, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 53, 54, 55, 36, 36, 
	36, 36, 36, 59, 60, 61, 63, 36, 
	36, 36, 36, 41, 36, 39, 36, 36, 
	36, 36, 36, 36, 36, 36, 41, 42, 
	43, 44, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 53, 54, 55, 36, 
	36, 36, 36, 36, 59, 60, 61, 63, 
	36, 39, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 42, 43, 44, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	59, 60, 61, 36, 39, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 43, 
	44, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 59, 60, 61, 36, 39, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 44, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 59, 60, 
	61, 36, 39, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 59, 60, 36, 39, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 60, 36, 39, 36, 
	39, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 42, 43, 44, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 53, 
	54, 55, 36, 36, 36, 36, 36, 59, 
	60, 61, 63, 36, 39, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 42, 43, 
	44, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 54, 55, 36, 36, 
	36, 36, 36, 59, 60, 61, 63, 36, 
	39, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 42, 43, 44, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 55, 36, 36, 36, 36, 36, 59, 
	60, 61, 63, 36, 64, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 39, 36, 39, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 42, 43, 44, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 59, 60, 61, 63, 36, 39, 
	36, 36, 36, 36, 36, 36, 36, 40, 
	41, 42, 43, 44, 36, 36, 36, 36, 
	36, 36, 50, 51, 52, 36, 53, 54, 
	55, 36, 36, 36, 36, 36, 59, 60, 
	61, 63, 36, 36, 36, 36, 41, 36, 
	39, 36, 36, 36, 36, 36, 36, 36, 
	36, 41, 42, 43, 44, 36, 36, 36, 
	36, 36, 36, 50, 51, 52, 36, 53, 
	54, 55, 36, 36, 36, 36, 36, 59, 
	60, 61, 63, 36, 36, 36, 36, 41, 
	36, 39, 36, 36, 36, 36, 36, 36, 
	36, 36, 41, 42, 43, 44, 36, 36, 
	36, 36, 36, 36, 36, 51, 52, 36, 
	53, 54, 55, 36, 36, 36, 36, 36, 
	59, 60, 61, 63, 36, 36, 36, 36, 
	41, 36, 39, 36, 36, 36, 36, 36, 
	36, 36, 36, 41, 42, 43, 44, 36, 
	36, 36, 36, 36, 36, 36, 36, 52, 
	36, 53, 54, 55, 36, 36, 36, 36, 
	36, 59, 60, 61, 63, 36, 36, 36, 
	36, 41, 36, 65, 36, 39, 36, 36, 
	36, 36, 36, 36, 36, 40, 41, 42, 
	43, 44, 36, 46, 47, 36, 36, 36, 
	50, 51, 52, 36, 53, 54, 55, 36, 
	36, 36, 36, 36, 59, 60, 61, 63, 
	36, 36, 36, 36, 41, 36, 39, 36, 
	36, 36, 36, 36, 36, 36, 36, 41, 
	42, 43, 44, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 53, 54, 55, 
	36, 36, 36, 36, 36, 59, 60, 61, 
	63, 36, 36, 36, 36, 41, 36, 65, 
	36, 39, 36, 36, 36, 36, 36, 36, 
	36, 40, 41, 42, 43, 44, 36, 36, 
	47, 36, 36, 36, 50, 51, 52, 36, 
	53, 54, 55, 36, 36, 36, 36, 36, 
	59, 60, 61, 63, 36, 36, 36, 36, 
	41, 36, 65, 36, 39, 36, 36, 36, 
	36, 36, 36, 36, 40, 41, 42, 43, 
	44, 36, 36, 36, 36, 36, 36, 50, 
	51, 52, 36, 53, 54, 55, 36, 36, 
	36, 36, 36, 59, 60, 61, 63, 36, 
	36, 36, 36, 41, 36, 65, 36, 39, 
	36, 36, 36, 36, 36, 36, 36, 40, 
	41, 42, 43, 44, 45, 46, 47, 36, 
	36, 36, 50, 51, 52, 36, 53, 54, 
	55, 36, 36, 36, 36, 36, 59, 60, 
	61, 63, 36, 36, 36, 36, 41, 36, 
	37, 38, 36, 39, 36, 36, 36, 36, 
	36, 36, 36, 40, 41, 42, 43, 44, 
	45, 46, 47, 48, 36, 49, 50, 51, 
	52, 36, 53, 54, 55, 36, 36, 36, 
	36, 58, 59, 60, 61, 58, 36, 36, 
	36, 36, 62, 36, 37, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 39, 36, 37, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	39, 36, 36, 36, 36, 36, 36, 36, 
	36, 41, 42, 43, 44, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 53, 
	54, 55, 36, 36, 36, 36, 36, 59, 
	60, 61, 63, 36, 39, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 56, 
	57, 36, 39, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 36, 36, 
	36, 36, 36, 36, 36, 36, 57, 36, 
	1, 67, 66, 68, 66, 66, 66, 66, 
	66, 66, 66, 69, 70, 71, 72, 73, 
	74, 75, 76, 77, 1, 78, 79, 80, 
	81, 66, 82, 83, 84, 66, 66, 66, 
	66, 85, 86, 87, 88, 89, 66, 66, 
	66, 66, 90, 66, 1, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 68, 66, 66, 66, 66, 66, 66, 
	66, 66, 70, 71, 72, 73, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	82, 83, 84, 66, 66, 66, 66, 66, 
	86, 87, 88, 91, 66, 66, 66, 66, 
	70, 66, 68, 66, 66, 66, 66, 66, 
	66, 66, 66, 70, 71, 72, 73, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 82, 83, 84, 66, 66, 66, 66, 
	66, 86, 87, 88, 91, 66, 68, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	71, 72, 73, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 86, 87, 88, 
	66, 68, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 72, 73, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	86, 87, 88, 66, 68, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	73, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 86, 87, 88, 66, 68, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 86, 87, 
	66, 68, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 87, 66, 68, 66, 68, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 71, 
	72, 73, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 82, 83, 84, 66, 
	66, 66, 66, 66, 86, 87, 88, 91, 
	66, 68, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 71, 72, 73, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 83, 84, 66, 66, 66, 66, 66, 
	86, 87, 88, 91, 66, 68, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 71, 
	72, 73, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 84, 66, 
	66, 66, 66, 66, 86, 87, 88, 91, 
	66, 93, 92, 92, 92, 92, 92, 92, 
	92, 92, 92, 92, 92, 92, 94, 92, 
	68, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 71, 72, 73, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 86, 
	87, 88, 91, 66, 68, 66, 66, 66, 
	66, 66, 66, 66, 69, 70, 71, 72, 
	73, 66, 66, 66, 66, 66, 66, 79, 
	80, 81, 66, 82, 83, 84, 66, 66, 
	66, 66, 66, 86, 87, 88, 91, 66, 
	66, 66, 66, 70, 66, 68, 66, 66, 
	66, 66, 66, 66, 66, 66, 70, 71, 
	72, 73, 66, 66, 66, 66, 66, 66, 
	79, 80, 81, 66, 82, 83, 84, 66, 
	66, 66, 66, 66, 86, 87, 88, 91, 
	66, 66, 66, 66, 70, 66, 68, 66, 
	66, 66, 66, 66, 66, 66, 66, 70, 
	71, 72, 73, 66, 66, 66, 66, 66, 
	66, 66, 80, 81, 66, 82, 83, 84, 
	66, 66, 66, 66, 66, 86, 87, 88, 
	91, 66, 66, 66, 66, 70, 66, 68, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	70, 71, 72, 73, 66, 66, 66, 66, 
	66, 66, 66, 66, 81, 66, 82, 83, 
	84, 66, 66, 66, 66, 66, 86, 87, 
	88, 91, 66, 66, 66, 66, 70, 66, 
	95, 66, 68, 66, 66, 66, 66, 66, 
	66, 66, 69, 70, 71, 72, 73, 66, 
	75, 76, 66, 66, 66, 79, 80, 81, 
	66, 82, 83, 84, 66, 66, 66, 66, 
	66, 86, 87, 88, 91, 66, 66, 66, 
	66, 70, 66, 68, 66, 66, 66, 66, 
	66, 66, 66, 66, 70, 71, 72, 73, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 82, 83, 84, 66, 66, 66, 
	66, 66, 86, 87, 88, 91, 66, 66, 
	66, 66, 70, 66, 95, 66, 68, 66, 
	66, 66, 66, 66, 66, 66, 69, 70, 
	71, 72, 73, 66, 66, 76, 66, 66, 
	66, 79, 80, 81, 66, 82, 83, 84, 
	66, 66, 66, 66, 66, 86, 87, 88, 
	91, 66, 66, 66, 66, 70, 66, 95, 
	66, 68, 66, 66, 66, 66, 66, 66, 
	66, 69, 70, 71, 72, 73, 66, 66, 
	66, 66, 66, 66, 79, 80, 81, 66, 
	82, 83, 84, 66, 66, 66, 66, 66, 
	86, 87, 88, 91, 66, 66, 66, 66, 
	70, 66, 95, 66, 68, 66, 66, 66, 
	66, 66, 66, 66, 69, 70, 71, 72, 
	73, 74, 75, 76, 66, 66, 66, 79, 
	80, 81, 66, 82, 83, 84, 66, 66, 
	66, 66, 66, 86, 87, 88, 91, 66, 
	66, 66, 66, 70, 66, 1, 67, 66, 
	68, 66, 66, 66, 66, 66, 66, 66, 
	69, 70, 71, 72, 73, 74, 75, 76, 
	77, 66, 78, 79, 80, 81, 66, 82, 
	83, 84, 66, 66, 66, 66, 85, 86, 
	87, 88, 89, 66, 66, 66, 66, 90, 
	66, 1, 96, 96, 96, 96, 96, 96, 
	96, 96, 96, 96, 96, 96, 97, 96, 
	1, 92, 92, 92, 92, 92, 92, 92, 
	92, 92, 92, 92, 92, 94, 92, 1, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 68, 66, 66, 66, 
	66, 66, 66, 66, 66, 70, 71, 72, 
	73, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 82, 83, 84, 66, 66, 
	66, 66, 66, 86, 87, 88, 91, 66, 
	99, 100, 98, 3, 101, 101, 101, 101, 
	101, 101, 101, 101, 101, 102, 101, 103, 
	104, 66, 68, 66, 66, 66, 66, 66, 
	66, 66, 105, 106, 107, 108, 109, 110, 
	111, 112, 113, 103, 114, 115, 116, 117, 
	66, 118, 119, 120, 66, 56, 57, 66, 
	121, 122, 123, 124, 125, 66, 66, 66, 
	66, 126, 66, 103, 104, 66, 68, 66, 
	66, 66, 66, 66, 66, 66, 105, 106, 
	107, 108, 109, 110, 111, 112, 113, 103, 
	114, 115, 116, 117, 66, 118, 119, 120, 
	66, 66, 66, 66, 121, 122, 123, 124, 
	125, 66, 66, 66, 66, 126, 66, 103, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 68, 66, 66, 66, 
	66, 66, 66, 66, 66, 106, 107, 108, 
	109, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 118, 119, 120, 66, 66, 
	66, 66, 66, 122, 123, 124, 127, 66, 
	66, 66, 66, 106, 66, 68, 66, 66, 
	66, 66, 66, 66, 66, 66, 106, 107, 
	108, 109, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 118, 119, 120, 66, 
	66, 66, 66, 66, 122, 123, 124, 127, 
	66, 68, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 107, 108, 109, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	122, 123, 124, 66, 68, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 108, 
	109, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 122, 123, 124, 66, 68, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 109, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 122, 123, 
	124, 66, 68, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 122, 123, 66, 68, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 123, 66, 68, 66, 
	68, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 107, 108, 109, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 118, 
	119, 120, 66, 66, 66, 66, 66, 122, 
	123, 124, 127, 66, 68, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 107, 108, 
	109, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 119, 120, 66, 66, 
	66, 66, 66, 122, 123, 124, 127, 66, 
	68, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 107, 108, 109, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 120, 66, 66, 66, 66, 66, 122, 
	123, 124, 127, 66, 128, 92, 92, 92, 
	92, 92, 92, 92, 92, 92, 92, 92, 
	92, 94, 92, 68, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 107, 108, 109, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 122, 123, 124, 127, 66, 68, 
	66, 66, 66, 66, 66, 66, 66, 105, 
	106, 107, 108, 109, 66, 66, 66, 66, 
	66, 66, 115, 116, 117, 66, 118, 119, 
	120, 66, 66, 66, 66, 66, 122, 123, 
	124, 127, 66, 66, 66, 66, 106, 66, 
	68, 66, 66, 66, 66, 66, 66, 66, 
	66, 106, 107, 108, 109, 66, 66, 66, 
	66, 66, 66, 115, 116, 117, 66, 118, 
	119, 120, 66, 66, 66, 66, 66, 122, 
	123, 124, 127, 66, 66, 66, 66, 106, 
	66, 68, 66, 66, 66, 66, 66, 66, 
	66, 66, 106, 107, 108, 109, 66, 66, 
	66, 66, 66, 66, 66, 116, 117, 66, 
	118, 119, 120, 66, 66, 66, 66, 66, 
	122, 123, 124, 127, 66, 66, 66, 66, 
	106, 66, 68, 66, 66, 66, 66, 66, 
	66, 66, 66, 106, 107, 108, 109, 66, 
	66, 66, 66, 66, 66, 66, 66, 117, 
	66, 118, 119, 120, 66, 66, 66, 66, 
	66, 122, 123, 124, 127, 66, 66, 66, 
	66, 106, 66, 129, 66, 68, 66, 66, 
	66, 66, 66, 66, 66, 105, 106, 107, 
	108, 109, 66, 111, 112, 66, 66, 66, 
	115, 116, 117, 66, 118, 119, 120, 66, 
	66, 66, 66, 66, 122, 123, 124, 127, 
	66, 66, 66, 66, 106, 66, 68, 66, 
	66, 66, 66, 66, 66, 66, 66, 106, 
	107, 108, 109, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 118, 119, 120, 
	66, 66, 66, 66, 66, 122, 123, 124, 
	127, 66, 66, 66, 66, 106, 66, 129, 
	66, 68, 66, 66, 66, 66, 66, 66, 
	66, 105, 106, 107, 108, 109, 66, 66, 
	112, 66, 66, 66, 115, 116, 117, 66, 
	118, 119, 120, 66, 66, 66, 66, 66, 
	122, 123, 124, 127, 66, 66, 66, 66, 
	106, 66, 129, 66, 68, 66, 66, 66, 
	66, 66, 66, 66, 105, 106, 107, 108, 
	109, 66, 66, 66, 66, 66, 66, 115, 
	116, 117, 66, 118, 119, 120, 66, 66, 
	66, 66, 66, 122, 123, 124, 127, 66, 
	66, 66, 66, 106, 66, 129, 66, 68, 
	66, 66, 66, 66, 66, 66, 66, 105, 
	106, 107, 108, 109, 110, 111, 112, 66, 
	66, 66, 115, 116, 117, 66, 118, 119, 
	120, 66, 66, 66, 66, 66, 122, 123, 
	124, 127, 66, 66, 66, 66, 106, 66, 
	103, 104, 66, 68, 66, 66, 66, 66, 
	66, 66, 66, 105, 106, 107, 108, 109, 
	110, 111, 112, 113, 66, 114, 115, 116, 
	117, 66, 118, 119, 120, 66, 66, 66, 
	66, 121, 122, 123, 124, 125, 66, 66, 
	66, 66, 126, 66, 103, 96, 96, 96, 
	96, 96, 96, 96, 96, 96, 96, 96, 
	96, 97, 96, 103, 92, 92, 92, 92, 
	92, 92, 92, 92, 92, 92, 92, 92, 
	94, 92, 103, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 68, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	106, 107, 108, 109, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 118, 119, 
	120, 66, 66, 66, 66, 66, 122, 123, 
	124, 127, 66, 5, 6, 130, 8, 130, 
	130, 130, 130, 130, 130, 130, 10, 11, 
	12, 13, 14, 15, 16, 17, 18, 5, 
	19, 20, 21, 22, 130, 23, 24, 25, 
	130, 130, 130, 130, 29, 30, 31, 32, 
	29, 130, 130, 130, 130, 35, 130, 5, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 8, 130, 130, 130, 
	130, 130, 130, 130, 130, 11, 12, 13, 
	14, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 23, 24, 25, 130, 130, 
	130, 130, 130, 30, 31, 32, 131, 130, 
	130, 130, 130, 11, 130, 8, 130, 130, 
	130, 130, 130, 130, 130, 130, 11, 12, 
	13, 14, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 23, 24, 25, 130, 
	130, 130, 130, 130, 30, 31, 32, 131, 
	130, 8, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 12, 13, 14, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	30, 31, 32, 130, 8, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 13, 
	14, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 30, 31, 32, 130, 8, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 14, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 30, 31, 
	32, 130, 8, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 30, 31, 130, 8, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 31, 130, 8, 130, 
	8, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 12, 13, 14, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 23, 
	24, 25, 130, 130, 130, 130, 130, 30, 
	31, 32, 131, 130, 8, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 12, 13, 
	14, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 24, 25, 130, 130, 
	130, 130, 130, 30, 31, 32, 131, 130, 
	8, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 12, 13, 14, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 25, 130, 130, 130, 130, 130, 30, 
	31, 32, 131, 130, 132, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 8, 130, 8, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 12, 13, 14, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 30, 31, 32, 131, 130, 8, 
	130, 130, 130, 130, 130, 130, 130, 10, 
	11, 12, 13, 14, 130, 130, 130, 130, 
	130, 130, 20, 21, 22, 130, 23, 24, 
	25, 130, 130, 130, 130, 130, 30, 31, 
	32, 131, 130, 130, 130, 130, 11, 130, 
	8, 130, 130, 130, 130, 130, 130, 130, 
	130, 11, 12, 13, 14, 130, 130, 130, 
	130, 130, 130, 20, 21, 22, 130, 23, 
	24, 25, 130, 130, 130, 130, 130, 30, 
	31, 32, 131, 130, 130, 130, 130, 11, 
	130, 8, 130, 130, 130, 130, 130, 130, 
	130, 130, 11, 12, 13, 14, 130, 130, 
	130, 130, 130, 130, 130, 21, 22, 130, 
	23, 24, 25, 130, 130, 130, 130, 130, 
	30, 31, 32, 131, 130, 130, 130, 130, 
	11, 130, 8, 130, 130, 130, 130, 130, 
	130, 130, 130, 11, 12, 13, 14, 130, 
	130, 130, 130, 130, 130, 130, 130, 22, 
	130, 23, 24, 25, 130, 130, 130, 130, 
	130, 30, 31, 32, 131, 130, 130, 130, 
	130, 11, 130, 133, 130, 8, 130, 130, 
	130, 130, 130, 130, 130, 10, 11, 12, 
	13, 14, 130, 16, 17, 130, 130, 130, 
	20, 21, 22, 130, 23, 24, 25, 130, 
	130, 130, 130, 130, 30, 31, 32, 131, 
	130, 130, 130, 130, 11, 130, 8, 130, 
	130, 130, 130, 130, 130, 130, 130, 11, 
	12, 13, 14, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 23, 24, 25, 
	130, 130, 130, 130, 130, 30, 31, 32, 
	131, 130, 130, 130, 130, 11, 130, 133, 
	130, 8, 130, 130, 130, 130, 130, 130, 
	130, 10, 11, 12, 13, 14, 130, 130, 
	17, 130, 130, 130, 20, 21, 22, 130, 
	23, 24, 25, 130, 130, 130, 130, 130, 
	30, 31, 32, 131, 130, 130, 130, 130, 
	11, 130, 133, 130, 8, 130, 130, 130, 
	130, 130, 130, 130, 10, 11, 12, 13, 
	14, 130, 130, 130, 130, 130, 130, 20, 
	21, 22, 130, 23, 24, 25, 130, 130, 
	130, 130, 130, 30, 31, 32, 131, 130, 
	130, 130, 130, 11, 130, 133, 130, 8, 
	130, 130, 130, 130, 130, 130, 130, 10, 
	11, 12, 13, 14, 15, 16, 17, 130, 
	130, 130, 20, 21, 22, 130, 23, 24, 
	25, 130, 130, 130, 130, 130, 30, 31, 
	32, 131, 130, 130, 130, 130, 11, 130, 
	5, 6, 130, 8, 130, 130, 130, 130, 
	130, 130, 130, 10, 11, 12, 13, 14, 
	15, 16, 17, 18, 130, 19, 20, 21, 
	22, 130, 23, 24, 25, 130, 130, 130, 
	130, 29, 30, 31, 32, 29, 130, 130, 
	130, 130, 35, 130, 5, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 8, 130, 5, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	8, 130, 130, 130, 130, 130, 130, 130, 
	130, 11, 12, 13, 14, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 23, 
	24, 25, 130, 130, 130, 130, 130, 30, 
	31, 32, 131, 130, 134, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 8, 130, 
	7, 8, 130, 1, 130, 130, 130, 1, 
	130, 130, 130, 130, 130, 5, 6, 7, 
	8, 130, 130, 130, 130, 130, 130, 130, 
	10, 11, 12, 13, 14, 15, 16, 17, 
	18, 5, 19, 20, 21, 22, 130, 23, 
	24, 25, 130, 26, 27, 130, 29, 30, 
	31, 32, 29, 130, 130, 130, 130, 35, 
	130, 8, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 26, 27, 130, 8, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 130, 130, 130, 130, 130, 
	130, 130, 130, 27, 130, 1, 135, 135, 
	135, 1, 135, 137, 136, 136, 136, 136, 
	136, 136, 136, 136, 136, 136, 136, 136, 
	136, 136, 136, 136, 136, 136, 136, 136, 
	136, 136, 136, 136, 136, 136, 136, 136, 
	136, 136, 136, 136, 136, 136, 136, 138, 
	136, 33, 136, 137, 136, 136, 136, 136, 
	136, 136, 136, 136, 136, 136, 136, 136, 
	136, 136, 136, 136, 136, 136, 136, 136, 
	136, 136, 136, 136, 136, 136, 136, 136, 
	136, 136, 136, 136, 136, 136, 33, 138, 
	136, 138, 136, 137, 136, 136, 136, 136, 
	136, 136, 136, 136, 136, 136, 136, 136, 
	136, 136, 136, 136, 136, 136, 136, 136, 
	136, 136, 136, 136, 136, 136, 136, 136, 
	136, 136, 136, 136, 136, 136, 33, 136, 
	34, 136, 0
};

static const char _use_syllable_machine_trans_targs[] = {
	1, 30, 0, 57, 59, 87, 88, 113, 
	0, 115, 101, 89, 90, 91, 92, 105, 
	107, 108, 109, 110, 102, 103, 104, 96, 
	97, 98, 116, 117, 118, 111, 93, 94, 
	95, 119, 121, 112, 0, 2, 3, 0, 
	16, 4, 5, 6, 7, 20, 22, 23, 
	24, 25, 17, 18, 19, 11, 12, 13, 
	28, 29, 26, 8, 9, 10, 27, 14, 
	15, 21, 0, 31, 0, 44, 32, 33, 
	34, 35, 48, 50, 51, 52, 53, 45, 
	46, 47, 39, 40, 41, 54, 36, 37, 
	38, 55, 56, 42, 0, 43, 0, 49, 
	0, 0, 0, 58, 0, 0, 0, 60, 
	61, 74, 62, 63, 64, 65, 78, 80, 
	81, 82, 83, 75, 76, 77, 69, 70, 
	71, 84, 66, 67, 68, 85, 86, 72, 
	73, 79, 0, 99, 100, 106, 114, 0, 
	0, 0, 120
};

static const char _use_syllable_machine_trans_actions[] = {
	0, 0, 3, 0, 0, 0, 0, 0, 
	4, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 5, 0, 0, 6, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 7, 0, 8, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 9, 0, 10, 0, 
	11, 12, 13, 0, 14, 15, 16, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 17, 0, 0, 0, 0, 18, 
	19, 20, 0
};

static const char _use_syllable_machine_to_state_actions[] = {
	1, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0
};

static const char _use_syllable_machine_from_state_actions[] = {
	2, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0
};

static const short _use_syllable_machine_eof_trans[] = {
	0, 37, 37, 37, 37, 37, 37, 37, 
	37, 37, 37, 37, 37, 37, 37, 37, 
	37, 37, 37, 37, 37, 37, 37, 37, 
	37, 37, 37, 37, 37, 37, 67, 67, 
	67, 67, 67, 67, 67, 67, 67, 67, 
	67, 67, 93, 67, 67, 67, 67, 67, 
	67, 67, 67, 67, 67, 67, 97, 93, 
	67, 99, 102, 67, 67, 67, 67, 67, 
	67, 67, 67, 67, 67, 67, 67, 67, 
	93, 67, 67, 67, 67, 67, 67, 67, 
	67, 67, 67, 67, 97, 93, 67, 131, 
	131, 131, 131, 131, 131, 131, 131, 131, 
	131, 131, 131, 131, 131, 131, 131, 131, 
	131, 131, 131, 131, 131, 131, 131, 131, 
	131, 131, 131, 131, 131, 131, 136, 137, 
	137, 137
};

static const int use_syllable_machine_start = 0;
static const int use_syllable_machine_first_final = 0;
static const int use_syllable_machine_error = -1;

static const int use_syllable_machine_en_main = 0;


#line 58 "hb-ot-shaper-use-machine.rl"



#line 182 "hb-ot-shaper-use-machine.rl"


#define found_syllable(syllable_type) \
  HB_STMT_START { \
    if (0) fprintf (stderr, "syllable %u..%u %s\n", (*ts).second.first, (*te).second.first, #syllable_type); \
    for (unsigned i = (*ts).second.first; i < (*te).second.first; ++i) \
      info[i].syllable() = (syllable_serial << 4) | syllable_type; \
    syllable_serial++; \
    if (syllable_serial == 16) syllable_serial = 1; \
  } HB_STMT_END


template <typename Iter>
struct machine_index_t :
  hb_iter_with_fallback_t<machine_index_t<Iter>,
			  typename Iter::item_t>
{
  machine_index_t (const Iter& it) : it (it) {}
  machine_index_t (const machine_index_t& o) : hb_iter_with_fallback_t<machine_index_t<Iter>,
								       typename Iter::item_t> (),
					       it (o.it), is_null (o.is_null) {}

  static constexpr bool is_random_access_iterator = Iter::is_random_access_iterator;
  static constexpr bool is_sorted_iterator = Iter::is_sorted_iterator;

  typename Iter::item_t __item__ () const { return *it; }
  typename Iter::item_t __item_at__ (unsigned i) const { return it[i]; }
  unsigned __len__ () const { return it.len (); }
  void __next__ () { ++it; }
  void __forward__ (unsigned n) { it += n; }
  void __prev__ () { --it; }
  void __rewind__ (unsigned n) { it -= n; }

  void operator = (unsigned n)
  {
    assert (n == 0);
    is_null = true;
  }
  explicit operator bool () { return !is_null; }

  void operator = (const machine_index_t& o)
  {
    is_null = o.is_null;
    unsigned index = (*it).first;
    unsigned n = (*o.it).first;
    if (index < n) it += n - index; else if (index > n) it -= index - n;
  }
  bool operator == (const machine_index_t& o) const
  { return is_null ? o.is_null : !o.is_null && (*it).first == (*o.it).first; }
  bool operator != (const machine_index_t& o) const { return !(*this == o); }

  private:
  Iter it;
  bool is_null = false;
};
struct
{
  template <typename Iter,
	    hb_requires (hb_is_iterable (Iter))>
  machine_index_t<hb_iter_type<Iter>>
  operator () (Iter&& it) const
  { return machine_index_t<hb_iter_type<Iter>> (hb_iter (it)); }
}
HB_FUNCOBJ (machine_index);



static bool
not_ccs_default_ignorable (const hb_glyph_info_t &i)
{ return i.use_category() != USE(CGJ); }

static inline void
find_syllables_use (hb_buffer_t *buffer)
{
  hb_glyph_info_t *info = buffer->info;
  auto p =
    + hb_iter (info, buffer->len)
    | hb_enumerate
    | hb_filter ([] (const hb_glyph_info_t &i) { return not_ccs_default_ignorable (i); },
		 hb_second)
    | hb_filter ([&] (const hb_pair_t<unsigned, const hb_glyph_info_t &> p)
		 {
		   if (p.second.use_category() == USE(ZWNJ))
		     for (unsigned i = p.first + 1; i < buffer->len; ++i)
		       if (not_ccs_default_ignorable (info[i]))
			 return !_hb_glyph_info_is_unicode_mark (&info[i]);
		   return true;
		 })
    | hb_enumerate
    | machine_index
    ;
  auto pe = p + p.len ();
  auto eof = +pe;
  auto ts = +p;
  auto te = +p;
  unsigned int act HB_UNUSED;
  int cs;
  
#line 911 "hb-ot-shaper-use-machine.hh"
	{
	cs = use_syllable_machine_start;
	ts = 0;
	te = 0;
	act = 0;
	}

#line 282 "hb-ot-shaper-use-machine.rl"


  unsigned int syllable_serial = 1;
  
#line 924 "hb-ot-shaper-use-machine.hh"
	{
	int _slen;
	int _trans;
	const unsigned char *_keys;
	const unsigned char *_inds;
	if ( p == pe )
		goto _test_eof;
_resume:
	switch ( _use_syllable_machine_from_state_actions[cs] ) {
	case 2:
#line 1 "NONE"
	{ts = p;}
	break;
#line 938 "hb-ot-shaper-use-machine.hh"
	}

	_keys = _use_syllable_machine_trans_keys + (cs<<1);
	_inds = _use_syllable_machine_indicies + _use_syllable_machine_index_offsets[cs];

	_slen = _use_syllable_machine_key_spans[cs];
	_trans = _inds[ _slen > 0 && _keys[0] <=( (*p).second.second.use_category()) &&
		( (*p).second.second.use_category()) <= _keys[1] ?
		( (*p).second.second.use_category()) - _keys[0] : _slen ];

_eof_trans:
	cs = _use_syllable_machine_trans_targs[_trans];

	if ( _use_syllable_machine_trans_actions[_trans] == 0 )
		goto _again;

	switch ( _use_syllable_machine_trans_actions[_trans] ) {
	case 12:
#line 170 "hb-ot-shaper-use-machine.rl"
	{te = p+1;{ found_syllable (use_virama_terminated_cluster); }}
	break;
	case 10:
#line 171 "hb-ot-shaper-use-machine.rl"
	{te = p+1;{ found_syllable (use_sakot_terminated_cluster); }}
	break;
	case 8:
#line 172 "hb-ot-shaper-use-machine.rl"
	{te = p+1;{ found_syllable (use_standard_cluster); }}
	break;
	case 16:
#line 173 "hb-ot-shaper-use-machine.rl"
	{te = p+1;{ found_syllable (use_number_joiner_terminated_cluster); }}
	break;
	case 14:
#line 174 "hb-ot-shaper-use-machine.rl"
	{te = p+1;{ found_syllable (use_numeral_cluster); }}
	break;
	case 6:
#line 175 "hb-ot-shaper-use-machine.rl"
	{te = p+1;{ found_syllable (use_symbol_cluster); }}
	break;
	case 20:
#line 176 "hb-ot-shaper-use-machine.rl"
	{te = p+1;{ found_syllable (use_hieroglyph_cluster); }}
	break;
	case 4:
#line 177 "hb-ot-shaper-use-machine.rl"
	{te = p+1;{ found_syllable (use_broken_cluster); buffer->scratch_flags |= HB_BUFFER_SCRATCH_FLAG_HAS_BROKEN_SYLLABLE; }}
	break;
	case 3:
#line 178 "hb-ot-shaper-use-machine.rl"
	{te = p+1;{ found_syllable (use_non_cluster); }}
	break;
	case 11:
#line 170 "hb-ot-shaper-use-machine.rl"
	{te = p;p--;{ found_syllable (use_virama_terminated_cluster); }}
	break;
	case 9:
#line 171 "hb-ot-shaper-use-machine.rl"
	{te = p;p--;{ found_syllable (use_sakot_terminated_cluster); }}
	break;
	case 7:
#line 172 "hb-ot-shaper-use-machine.rl"
	{te = p;p--;{ found_syllable (use_standard_cluster); }}
	break;
	case 15:
#line 173 "hb-ot-shaper-use-machine.rl"
	{te = p;p--;{ found_syllable (use_number_joiner_terminated_cluster); }}
	break;
	case 13:
#line 174 "hb-ot-shaper-use-machine.rl"
	{te = p;p--;{ found_syllable (use_numeral_cluster); }}
	break;
	case 5:
#line 175 "hb-ot-shaper-use-machine.rl"
	{te = p;p--;{ found_syllable (use_symbol_cluster); }}
	break;
	case 19:
#line 176 "hb-ot-shaper-use-machine.rl"
	{te = p;p--;{ found_syllable (use_hieroglyph_cluster); }}
	break;
	case 17:
#line 177 "hb-ot-shaper-use-machine.rl"
	{te = p;p--;{ found_syllable (use_broken_cluster); buffer->scratch_flags |= HB_BUFFER_SCRATCH_FLAG_HAS_BROKEN_SYLLABLE; }}
	break;
	case 18:
#line 178 "hb-ot-shaper-use-machine.rl"
	{te = p;p--;{ found_syllable (use_non_cluster); }}
	break;
#line 1028 "hb-ot-shaper-use-machine.hh"
	}

_again:
	switch ( _use_syllable_machine_to_state_actions[cs] ) {
	case 1:
#line 1 "NONE"
	{ts = 0;}
	break;
#line 1037 "hb-ot-shaper-use-machine.hh"
	}

	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	if ( p == eof )
	{
	if ( _use_syllable_machine_eof_trans[cs] > 0 ) {
		_trans = _use_syllable_machine_eof_trans[cs] - 1;
		goto _eof_trans;
	}
	}

	}

#line 287 "hb-ot-shaper-use-machine.rl"

}

#undef found_syllable

#endif /* HB_OT_SHAPER_USE_MACHINE_HH */
