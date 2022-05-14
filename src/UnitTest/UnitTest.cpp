#include "pch.h"
#include "CppUnitTest.h"
#include "../include/StaticLib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

// ToDo
// 
// ○　テストコードに西暦１年はうるう年でないことを追加してください
// ○　テストコードが通らないことを確認してください
// ○　ライブラリのコードを適切に修正してください
// ○　テストコードが通ることを確認してください
//
// ○　2024年がうるう年であるテストコードと実装を書いてください
// ○　2100年がうるう年でないテストコードと実装を書いてください
// ○　2000年がうるう年であるテストコードと実装を書いてください

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		// 西暦１年はうるう年でない
		TEST_METHOD(TestMethod1_NotMultipleOfFour)
		{
			Assert::AreEqual(false, is_leap_year(1));
		}

		// 2024年はうるう年である
		TEST_METHOD(TestMethod2_MultipleOfFour)
		{
			Assert::AreEqual(true, is_leap_year(2024));
		}

		// 2100年はうるう年ではない
		TEST_METHOD(TestMethod3_MultipleOfHundred)
		{
			Assert::AreEqual(false, is_leap_year(2100));
		}

		// 2000年はうるう年である
		TEST_METHOD(TestMethod4_MultipleOfFourHundred)
		{
			Assert::AreEqual(true, is_leap_year(2000));
		}
	};
}
