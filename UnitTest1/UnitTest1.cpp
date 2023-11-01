#include "pch.h"
#include "CppUnitTest.h"

extern "C" char shoot(char p1[], char p2[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char player1[] = "rock";
			char player2[] = "PAPER";
			char result[] = { 0 };
			result[0] = shoot(player1, player2);
			//strncpy(result, shoot(player1, player2), );
			Assert::AreEqual(result, "Player 2");

		}
	};
}
