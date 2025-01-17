/* NOTE - eventually this file will be automatically updated using a Perl script that understand
 * the naming of test case files, functions, and namespaces.
 */

#include <time.h>   /* for time() */
#include <stdlib.h> /* for srand() */

#include "std_testcase.h"
#include "testcases.h"

int main(int argc, char * argv[]) {

	/* seed randomness */

	srand( (unsigned)time(NULL) );

	globalArgc = argc;
	globalArgv = argv;

#ifndef OMITGOOD

	/* Calling C good functions */
	/* BEGIN-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */
	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_08_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_08_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_18_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_18_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_01_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_01_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_14_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_14_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_08_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_08_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_12_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_12_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_05_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_05_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_02_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_02_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_07_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_07_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_03_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_03_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_04_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_04_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_11_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_11_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_07_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_07_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_17_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_17_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_12_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_12_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_13_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_13_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_09_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_09_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_16_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_16_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_04_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_04_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_11_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_11_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_02_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_02_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_03_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_03_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_10_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_10_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_10_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_10_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_08_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_08_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_01_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_01_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_15_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_15_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_07_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_07_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_15_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_15_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_10_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_10_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_04_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_04_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_09_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_09_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_18_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_18_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_18_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_18_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_09_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_09_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_15_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_15_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_01_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_01_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_03_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_03_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_12_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_12_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_06_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_06_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_08_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_08_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_17_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_17_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_09_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_09_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_13_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_13_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_10_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_10_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_15_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_15_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_06_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_06_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_16_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_16_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_03_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_03_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_17_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_17_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_14_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_14_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_13_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_13_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_11_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_11_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_14_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_14_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_07_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_07_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_02_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_02_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_05_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_05_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_16_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_16_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_17_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_17_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_01_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_01_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_05_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_05_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_06_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_06_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_11_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_11_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_02_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_02_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_12_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_12_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_13_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_13_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_05_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_05_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_04_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_04_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_06_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_06_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_14_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_14_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_16_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_16_good();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_18_good();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_18_good();

	/* END-AUTOGENERATED-C-GOOD-FUNCTION-CALLS */





#ifdef __cplusplus
	/* Calling C++ good functions */
	/* BEGIN-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-GOOD-FUNCTION-CALLS */

#endif /* __cplusplus */

#endif /* OMITGOOD */

#ifndef OMITBAD

	/* Calling C bad functions */
	/* BEGIN-AUTOGENERATED-C-BAD-FUNCTION-CALLS */
	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_08_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_08_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_18_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_18_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_01_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_01_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_14_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_14_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_08_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_08_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_12_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_12_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_05_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_05_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_02_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_02_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_07_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_07_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_03_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_03_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_04_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_04_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_11_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_11_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_07_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_07_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_17_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_17_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_12_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_12_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_13_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_13_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_09_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_09_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_16_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_16_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_04_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_04_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_11_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_11_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_02_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_02_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_03_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_03_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_10_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_10_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_10_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_10_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_08_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_08_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_01_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_01_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_15_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_15_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_07_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_07_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_15_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_15_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_10_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_10_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_04_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_04_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_09_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_09_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_18_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_18_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_18_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_18_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_09_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_09_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_15_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_15_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_01_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_01_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_03_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_03_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_12_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_12_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_06_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_06_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_08_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_08_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_17_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_17_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_09_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_09_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_13_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_13_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_10_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_10_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_15_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_15_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_06_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_06_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_16_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_16_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_03_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_03_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_17_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_17_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_14_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_14_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_13_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_13_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_11_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_11_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_14_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_14_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_07_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_07_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_02_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_02_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_05_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_05_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_16_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_16_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_17_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_17_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_01_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_01_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_05_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_05_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_06_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_06_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_11_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_11_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_02_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_02_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_12_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_12_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_13_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_declare_13_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_05_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_05_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_04_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_04_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_06_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_alloca_06_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_14_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_14_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_16_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_wchar_t_alloca_16_bad();

	printLine("Calling CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_18_bad();");
	CWE226_Sensitive_Information_Uncleared_Before_Release__w32_char_declare_18_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
