#include "stdafx.h"
#ifdef SPEED_TEST

#include "gtest/gtest.h"

TEST(SPEEDTEST, Cpp_for10kin10k)
{
	int summ = 0;
	for( int i = 0; i < 10000; i++ )
	{
		for( int k = 0; k < 10000; k++ )
			summ += i - k;
	}
}

TEST(SPEEDTEST, Cpp_2in4000)
{
	std::vector<char> num;
	for( int numIndex = 0; numIndex < 4000; numIndex++)
		num.push_back(0);
	num[0] = 2;
	for( int iter = 0; iter < 4000; iter++ )
	{
		for( int numIndex = 0; numIndex < 4000; numIndex++)
		{
			num[numIndex] *= 2;
			if( num[numIndex] >= 10 )
			{
				num[numIndex + 1] += 1;
				num[numIndex] %= 10;
			}
		}
	}
	//EXPECT_EQ(2, num[0]);
	//EXPECT_EQ(0, num[1]);
}


#endif
