// NOTE - eventually this file will be automatically updated using a Perl script that understand
// the naming of test case files, functions, and namespaces.

#ifndef _TESTCASES_H
#define _TESTCASES_H

#ifdef __cplusplus
extern "C" {
#endif

// declare C good and bad functions
#ifndef OMITGOOD
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-DECLARATIONS */
	void CWE126_Buffer_Overread__malloc_char_memmove_07_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_10_good();

	void CWE126_Buffer_Overread__malloc_char_loop_05_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_45_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_42_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_11_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_02_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_01_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_34_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_66_good();

	void CWE126_Buffer_Overread__malloc_char_loop_02_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_18_good();

	void CWE126_Buffer_Overread__malloc_char_loop_68_good();

	void CWE126_Buffer_Overread__malloc_char_loop_13_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_16_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_42_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_17_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_01_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_01_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_04_good();

	void CWE126_Buffer_Overread__malloc_char_loop_67_good();

	void CWE126_Buffer_Overread__malloc_char_loop_44_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_01_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_41_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_16_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_21_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_07_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_68_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_04_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_65_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_64_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_15_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_64_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_65_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_08_good();

	void CWE126_Buffer_Overread__malloc_char_loop_65_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_61_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_32_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_17_good();

	void CWE126_Buffer_Overread__malloc_char_loop_51_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_03_good();

	void CWE126_Buffer_Overread__malloc_char_loop_41_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_51_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_64_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_11_good();

	void CWE126_Buffer_Overread__malloc_char_loop_34_good();

	void CWE126_Buffer_Overread__malloc_char_loop_52_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_31_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_17_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_63_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_11_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_65_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_17_good();

	void CWE126_Buffer_Overread__malloc_char_loop_16_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_05_good();

	void CWE126_Buffer_Overread__malloc_char_loop_07_good();

	void CWE126_Buffer_Overread__malloc_char_loop_15_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_45_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_05_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_06_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_51_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_63_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_52_good();

	void CWE126_Buffer_Overread__malloc_char_loop_04_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_31_good();

	void CWE126_Buffer_Overread__malloc_char_loop_11_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_03_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_04_good();

	void CWE126_Buffer_Overread__malloc_char_loop_10_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_65_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_02_good();

	void CWE126_Buffer_Overread__malloc_char_loop_03_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_06_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_18_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_32_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_01_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_63_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_44_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_02_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_13_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_15_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_31_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_04_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_10_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_14_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_67_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_05_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_53_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_10_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_51_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_67_good();

	void CWE126_Buffer_Overread__malloc_char_loop_63_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_54_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_01_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_07_good();

	void CWE126_Buffer_Overread__malloc_char_loop_66_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_67_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_09_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_53_good();

	void CWE126_Buffer_Overread__malloc_char_loop_14_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_34_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_31_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_07_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_16_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_44_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_22_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_03_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_17_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_53_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_02_good();

	void CWE126_Buffer_Overread__malloc_char_loop_01_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_54_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_18_good();

	void CWE126_Buffer_Overread__malloc_char_loop_22_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_13_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_06_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_64_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_04_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_22_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_45_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_14_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_06_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_12_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_13_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_63_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_09_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_06_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_52_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_68_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_64_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_61_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_51_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_34_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_08_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_12_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_67_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_32_good();

	void CWE126_Buffer_Overread__malloc_char_loop_42_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_21_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_02_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_42_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_45_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_08_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_32_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_41_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_08_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_31_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_45_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_16_good();

	void CWE126_Buffer_Overread__malloc_char_loop_21_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_63_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_44_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_52_good();

	void CWE126_Buffer_Overread__malloc_char_loop_54_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_12_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_22_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_16_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_52_good();

	void CWE126_Buffer_Overread__malloc_char_loop_45_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_09_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_03_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_14_good();

	void CWE126_Buffer_Overread__malloc_char_loop_17_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_02_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_22_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_15_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_44_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_03_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_68_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_05_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_41_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_21_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_42_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_10_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_66_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_14_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_67_good();

	void CWE126_Buffer_Overread__malloc_char_loop_09_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_61_good();

	void CWE126_Buffer_Overread__malloc_char_loop_12_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_07_good();

	void CWE126_Buffer_Overread__malloc_char_loop_32_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_12_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_16_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_53_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_12_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_12_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_66_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_66_good();

	void CWE126_Buffer_Overread__malloc_char_loop_53_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_13_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_15_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_18_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_13_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_04_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_22_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_53_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_54_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_54_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_09_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_14_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_34_good();

	void CWE126_Buffer_Overread__malloc_char_loop_06_good();

	void CWE126_Buffer_Overread__malloc_char_loop_61_good();

	void CWE126_Buffer_Overread__malloc_char_loop_31_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_15_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_15_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_44_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_32_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_41_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_08_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_68_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_21_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_13_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_41_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_05_good();

	void CWE126_Buffer_Overread__malloc_char_loop_64_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_08_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_17_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_10_good();

	void CWE126_Buffer_Overread__malloc_char_loop_18_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_61_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_09_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_21_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_18_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_05_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_68_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_06_good();

	void CWE126_Buffer_Overread__malloc_char_loop_08_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_03_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_52_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_10_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_34_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_65_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_18_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_11_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_11_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_14_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_07_good();

	void CWE126_Buffer_Overread__malloc_char_memcpy_66_good();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_09_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_51_good();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_61_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_11_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_42_good();

	void CWE126_Buffer_Overread__malloc_char_memmove_54_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-DECLARATIONS */
#endif // OMITGOOD


#ifndef OMITBAD
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-DECLARATIONS */
	void CWE126_Buffer_Overread__malloc_char_memmove_07_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_10_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_05_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_45_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_42_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_11_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_02_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_01_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_34_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_66_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_02_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_18_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_68_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_13_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_16_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_42_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_17_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_01_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_01_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_04_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_67_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_44_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_01_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_41_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_16_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_21_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_07_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_68_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_04_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_65_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_64_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_15_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_64_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_65_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_08_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_65_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_61_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_32_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_17_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_51_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_03_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_41_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_51_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_64_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_11_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_34_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_52_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_31_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_17_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_63_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_11_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_65_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_17_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_16_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_05_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_07_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_15_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_45_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_05_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_06_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_51_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_63_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_52_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_04_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_31_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_11_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_03_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_04_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_10_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_65_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_02_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_03_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_06_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_18_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_32_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_01_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_63_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_44_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_02_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_13_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_15_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_31_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_04_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_10_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_14_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_67_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_05_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_53_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_10_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_51_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_67_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_63_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_54_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_01_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_07_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_66_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_67_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_09_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_53_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_14_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_34_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_31_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_07_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_16_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_44_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_22_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_03_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_17_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_53_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_02_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_01_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_54_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_18_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_22_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_13_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_06_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_64_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_04_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_22_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_45_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_14_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_06_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_12_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_13_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_63_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_09_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_06_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_52_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_68_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_64_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_61_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_51_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_34_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_08_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_12_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_67_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_32_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_42_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_21_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_02_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_42_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_45_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_08_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_32_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_41_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_08_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_31_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_45_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_16_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_21_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_63_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_44_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_52_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_54_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_12_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_22_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_16_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_52_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_45_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_09_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_03_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_14_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_17_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_02_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_22_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_15_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_44_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_03_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_68_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_05_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_41_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_21_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_42_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_10_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_66_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_14_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_67_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_09_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_61_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_12_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_07_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_32_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_12_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_16_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_53_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_12_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_12_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_66_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_66_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_53_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_13_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_15_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_18_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_13_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_04_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_22_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_53_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_54_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_54_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_09_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_14_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_34_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_06_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_61_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_31_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_15_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_15_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_44_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_32_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_41_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_08_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_68_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_21_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_13_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_41_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_05_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_64_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_08_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_17_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_10_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_18_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_61_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_09_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_21_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_18_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_05_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_68_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_06_bad();

	void CWE126_Buffer_Overread__malloc_char_loop_08_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_03_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_52_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_10_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_34_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_65_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_18_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_11_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memcpy_11_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_14_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_07_bad();

	void CWE126_Buffer_Overread__malloc_char_memcpy_66_bad();

	void CWE126_Buffer_Overread__CWE170_wchar_t_strncpy_09_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_loop_51_bad();

	void CWE126_Buffer_Overread__malloc_wchar_t_memmove_61_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_11_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_42_bad();

	void CWE126_Buffer_Overread__malloc_char_memmove_54_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-DECLARATIONS */
#endif // OMITBAD

#ifdef __cplusplus
} // end extern "C"
#endif

#ifdef __cplusplus
// declare C++ namespaces and good and bad functions

#ifndef OMITGOOD
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-DECLARATIONS */

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-DECLARATIONS */
#endif // OMITGOOD


#ifndef OMITBAD
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-DECLARATIONS */

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-DECLARATIONS */
#endif // OMITBAD


#endif // __cplusplus


#endif //  _TESTCASES_H