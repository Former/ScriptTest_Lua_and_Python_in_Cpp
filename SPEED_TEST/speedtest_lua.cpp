#include "stdafx.h"
#ifdef SPEED_TEST

#include "gtest/gtest.h"
#include "luascript.h"

TEST(SPEEDTEST, Lua_init)
{
	LuaScript script;
}

TEST(SPEEDTEST, Lua_for10kin10k)
{
	LuaScript script;
	std::string test =
 		"local i, j = 0, 0;\n"
 		"summ = 0;\n"
 		"for i = 1, 10000\n"
 		"do\n"
 		"	for j = 1, 10000 \n"
 		"	do\n"
 		"		summ = summ + i - j;\n"
 		"	end	\n"
		"end\n";
	script.Execute(test.c_str());

	int summ = script.GetVariable<LuaScript::Int_LuaArg>("summ").GetValue();
	EXPECT_EQ(0, summ);
}

TEST(SPEEDTEST, Lua_2in4000)
{
	LuaScript script;
	std::string test =
		"local num = {};\n"
		"local numIndex = 0;\n"
		"for numIndex = 1, 4010  \n"
		"do\n"
		"	num[numIndex] = 0;\n"
		"end\n"
		"num[1] = 2;\n"
		"\n"
		"for iter = 1, 4000  \n"
		"do\n"
		"	for numIndex = 1, 4000  \n"
		"	do\n"
		"		num[numIndex] = num[numIndex] * 2;\n"
		"		if( num[numIndex] >= 10 )\n"
		"		then\n"
		"			num[numIndex + 1] = num[numIndex + 1] + 1;\n"
		"			num[numIndex] = num[numIndex] % 10;\n"
		"		end\n"
		"	end\n"
		"end\n"
		"\n"
		"num0 = num[1];\n"
		"num1 = num[2];\n";
	script.Execute(test.c_str());

	EXPECT_EQ(2, script.GetVariable<LuaScript::Int_LuaArg>("num0").GetValue());
	EXPECT_EQ(0, script.GetVariable<LuaScript::Int_LuaArg>("num1").GetValue());
}


#endif
