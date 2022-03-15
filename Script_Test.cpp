// Script_Test.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include "gtest/gtest.h"
//#include <conio.h>

int main(int argc, char* argv[]) 
{
	::testing::InitGoogleTest(&argc, argv);
	::testing::GTEST_FLAG(print_time) = true;
	int ret = RUN_ALL_TESTS();
	//getch();
	return ret;
}
