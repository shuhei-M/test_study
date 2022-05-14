#include "pch.h"
#include "CppUnitTest.h"
#include "../include/StaticLib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

// ToDo
// 
// ���@�e�X�g�R�[�h�ɐ���P�N�͂��邤�N�łȂ����Ƃ�ǉ����Ă�������
// ���@�e�X�g�R�[�h���ʂ�Ȃ����Ƃ��m�F���Ă�������
// ���@���C�u�����̃R�[�h��K�؂ɏC�����Ă�������
// ���@�e�X�g�R�[�h���ʂ邱�Ƃ��m�F���Ă�������
//
// ���@2024�N�����邤�N�ł���e�X�g�R�[�h�Ǝ����������Ă�������
// ���@2100�N�����邤�N�łȂ��e�X�g�R�[�h�Ǝ����������Ă�������
// ���@2000�N�����邤�N�ł���e�X�g�R�[�h�Ǝ����������Ă�������

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		// ����P�N�͂��邤�N�łȂ�
		TEST_METHOD(TestMethod1_NotMultipleOfFour)
		{
			Assert::AreEqual(false, is_leap_year(1));
		}

		// 2024�N�͂��邤�N�ł���
		TEST_METHOD(TestMethod2_MultipleOfFour)
		{
			Assert::AreEqual(true, is_leap_year(2024));
		}

		// 2100�N�͂��邤�N�ł͂Ȃ�
		TEST_METHOD(TestMethod3_MultipleOfHundred)
		{
			Assert::AreEqual(false, is_leap_year(2100));
		}

		// 2000�N�͂��邤�N�ł���
		TEST_METHOD(TestMethod4_MultipleOfFourHundred)
		{
			Assert::AreEqual(true, is_leap_year(2000));
		}
	};
}
