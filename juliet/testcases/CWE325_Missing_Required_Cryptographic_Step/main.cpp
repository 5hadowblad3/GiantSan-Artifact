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
	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_15_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_15_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_16_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_16_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_07_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_07_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_06_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_06_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_14_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_14_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_02_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_02_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_17_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_17_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_09_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_09_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_07_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_07_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_06_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_06_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_12_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_12_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_13_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_13_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_18_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_18_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_08_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_08_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_15_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_15_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_14_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_14_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_05_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_05_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_08_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_08_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_02_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_02_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_03_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_03_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_12_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_12_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_05_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_05_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_10_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_10_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_16_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_16_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_16_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_16_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_03_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_03_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_07_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_07_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_18_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_18_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_17_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_17_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_04_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_04_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_16_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_16_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_08_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_08_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_03_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_03_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_12_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_12_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_09_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_09_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_11_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_11_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_18_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_18_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_04_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_04_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_01_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_01_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_10_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_10_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_07_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_07_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_09_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_09_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_01_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_01_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_13_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_13_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_04_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_04_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_11_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_11_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_10_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_10_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_13_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_13_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_01_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_01_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_02_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_02_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_17_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_17_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_01_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_01_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_12_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_12_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_11_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_11_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_15_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_15_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_14_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_14_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_06_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_06_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_04_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_04_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_06_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_06_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_05_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_05_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_13_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_13_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_10_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_10_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_17_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_17_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_05_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_05_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_09_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_09_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_15_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_15_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_18_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_18_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_11_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_11_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_02_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_02_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_03_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_03_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_14_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_14_good();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_08_good();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_08_good();

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
	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_15_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_15_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_16_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_16_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_07_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_07_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_06_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_06_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_14_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_14_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_02_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_02_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_17_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_17_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_09_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_09_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_07_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_07_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_06_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_06_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_12_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_12_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_13_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_13_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_18_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_18_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_08_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_08_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_15_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_15_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_14_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_14_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_05_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_05_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_08_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_08_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_02_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_02_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_03_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_03_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_12_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_12_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_05_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_05_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_10_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_10_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_16_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_16_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_16_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_16_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_03_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_03_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_07_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_07_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_18_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_18_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_17_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_17_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_04_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_04_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_16_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_16_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_08_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_08_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_03_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_03_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_12_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_12_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_09_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_09_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_11_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_11_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_18_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_18_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_04_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_04_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_01_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_01_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_10_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_10_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_07_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_07_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_09_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_09_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_01_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_01_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_13_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_13_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_04_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_04_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_11_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_11_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_10_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_10_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_13_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_13_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_01_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_01_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_02_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_02_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_17_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_17_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_01_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_01_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_12_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_12_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_11_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_11_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_15_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_15_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_14_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_14_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_06_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_06_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_04_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_04_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_06_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_06_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_05_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_05_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_13_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_13_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_10_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_10_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_17_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_17_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_05_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_05_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_09_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_09_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_15_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptDeriveKey_15_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_18_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_18_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_11_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptHashData_11_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_02_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_02_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_03_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_03_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_14_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptCreateHash_14_bad();

	printLine("Calling CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_08_bad();");
	CWE325_Missing_Required_Cryptographic_Step__w32_CryptEncrypt_08_bad();

	/* END-AUTOGENERATED-C-BAD-FUNCTION-CALLS */




	
#ifdef __cplusplus
	/* Calling C++ bad functions */
	/* BEGIN-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */

	/* END-AUTOGENERATED-CPP-BAD-FUNCTION-CALLS */
	
#endif /* __cplusplus */

#endif /* OMITBAD */

	return 0;

} 
