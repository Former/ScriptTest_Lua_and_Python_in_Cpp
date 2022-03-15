#include "stdafx.h"
#ifdef SPEED_TEST

//#if defined(_M_IA64) || defined(_M_X64)

#include "gtest/gtest.h"
#include <Python.h>

TEST(SPEEDTEST, Python_init)
{
	Py_Initialize();
	Py_Finalize();
}


TEST(SPEEDTEST, Python_for10kin10k)
{
	Py_Initialize();
	std::string test =	
		"summ = 0\n"
		"i, j = 0, 0\n"
		"for i in range(10000):\n"
		"	for j in range(10000):\n"
		"		summ = summ + i - j\n";
	PyRun_SimpleString(test.c_str());
	Py_Finalize();
}

TEST(SPEEDTEST, Python_2in4000)
{
	Py_Initialize();
	std::string test =	
		"num = []\n"
		"for numIndex in range(4010):\n"
		"	num.append(0)\n"
		"num[0] = 2\n"
		"for iter in range (4000):\n"
		"	for numIndex in range(4000):\n"
		"		num[numIndex] = num[numIndex] * 2\n"
		"		if num[numIndex] >= 10:\n"
		"			num[numIndex + 1] = num[numIndex + 1] + 1\n"
		"			num[numIndex] = num[numIndex] % 10\n";
	PyRun_SimpleString(test.c_str());
	Py_Finalize();
}

//#endif

#endif
