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
	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_16_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_02_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_10_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_16_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_07_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_15_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_05_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_07_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_13_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_05_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_12_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_09_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_04_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_05_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_09_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_07_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_17_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_05_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_15_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_17_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_14_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_09_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_10_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_05_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_09_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_12_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_16_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_15_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_08_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_11_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_06_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_16_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_14_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_04_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_09_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_05_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_10_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_12_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_01_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_04_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_02_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_11_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_10_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_13_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_04_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_18_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_05_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_06_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_16_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_14_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_07_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_02_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_10_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_02_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_03_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_08_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_18_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_14_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_01_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_07_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_16_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_13_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_15_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_13_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_17_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_11_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_15_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_13_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_18_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_17_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_06_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_07_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_03_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_03_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_02_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_02_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_03_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_16_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_14_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_16_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_09_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_01_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_07_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_02_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_06_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_04_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_08_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_11_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_03_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_16_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_04_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_01_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_09_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_01_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_06_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_13_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_06_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_18_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_12_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_15_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_17_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_03_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_01_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_06_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_09_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_03_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_17_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_06_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_07_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_05_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_13_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_14_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_13_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_05_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_02_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_11_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_18_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_12_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_01_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_04_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_04_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_09_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_08_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_10_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_04_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_06_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_15_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_18_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_09_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_14_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_14_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_01_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_18_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_15_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_18_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_08_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_04_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_11_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_06_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_02_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_04_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_06_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_17_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_09_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_13_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_08_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_05_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_01_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_03_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_01_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_02_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_12_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_03_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_17_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_09_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_12_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_18_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_10_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_11_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_08_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_17_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_15_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_15_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_08_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_11_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_18_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_16_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_11_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_14_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_02_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_17_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_10_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_01_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_07_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_08_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_07_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_07_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_13_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_02_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_12_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_15_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_17_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_13_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_06_good();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_11_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_08_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_14_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_10_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_18_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_01_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_03_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_08_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_18_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_07_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_03_good();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_03_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_11_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_12_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_04_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_12_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_13_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_16_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_14_good();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_05_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_05_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_14_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_15_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_12_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_16_good();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_08_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_10_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_12_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_11_good();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_10_good();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_10_good();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_17_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-DECLARATIONS */
#endif // OMITGOOD


#ifndef OMITBAD
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-DECLARATIONS */
	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_16_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_02_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_10_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_16_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_07_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_15_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_05_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_07_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_13_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_05_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_12_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_09_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_04_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_05_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_09_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_07_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_17_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_05_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_15_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_17_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_14_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_09_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_10_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_05_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_09_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_12_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_16_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_15_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_08_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_11_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_06_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_16_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_14_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_04_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_09_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_05_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_10_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_12_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_01_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_04_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_02_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_11_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_10_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_13_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_04_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_18_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_05_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_06_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_16_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_14_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_07_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_02_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_10_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_02_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_03_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_08_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_18_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_14_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_01_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_07_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_16_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_13_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_15_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_13_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_17_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_11_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_15_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_13_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_18_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_17_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_06_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_07_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_03_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_03_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_02_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_02_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_03_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_16_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_14_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_16_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_09_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_01_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_07_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_02_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_06_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_04_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_08_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_11_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_03_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_16_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_04_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_01_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_09_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_01_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_06_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_13_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_06_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_18_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_12_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_15_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_17_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_03_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_01_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_06_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_09_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_03_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_17_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_06_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_07_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_05_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_13_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_14_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_13_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_05_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_02_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_11_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_18_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_12_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_01_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_04_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_04_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_09_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_08_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_10_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_04_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_06_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_15_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_18_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_09_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_14_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_14_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_01_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_18_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_15_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_18_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_08_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_04_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_11_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_06_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_02_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_04_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_06_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_17_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_09_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_13_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_08_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_05_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_01_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_03_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_01_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_02_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_12_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_03_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_17_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_09_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_12_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_18_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_10_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_11_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_08_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_17_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_15_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_15_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_08_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_11_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_18_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_16_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_11_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_14_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_02_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_17_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_10_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_01_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_07_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_08_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_07_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_07_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_13_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_02_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_12_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_15_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_17_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_13_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_06_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateWindowStation_11_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_08_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_14_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_10_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_18_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_01_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_03_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_08_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_18_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_07_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_03_bad();

	void CWE284_Improper_Access_Control__w32_char_SHRegCreateUSKey_03_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_11_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_12_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_04_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_12_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_13_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_16_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_14_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateNamedPipe_05_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateFile_05_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_14_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_15_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_12_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateWindowStation_16_bad();

	void CWE284_Improper_Access_Control__w32_char_RegCreateKeyEx_08_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateNamedPipe_10_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_SHRegCreateUSKey_12_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_RegCreateKeyEx_11_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateFile_10_bad();

	void CWE284_Improper_Access_Control__w32_char_CreateDesktop_10_bad();

	void CWE284_Improper_Access_Control__w32_wchar_t_CreateDesktop_17_bad();

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