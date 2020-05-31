#include "CppUTest/TestHarness.h"

TEST_GROUP(FirstTestGroup)
{
};

TEST(FirstTestGroup, SecondTest)
{
   CHECK(true);
}

TEST(FirstTestGroup, FirstTest)
{
	   // CHECK(true);
   FAIL("Fail me!");
}


