#include "pch.h"
#include "CppUnitTest.h"
#include "../lab11.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			fstream f("D:\\Patiuk\\AP\\lab_2\\labs11\\lab11.3\\unittest.dat", ios::binary | ios::in | ios::out);
			int mathMark = fMark(f, 0);
			Assert::AreEqual(mathMark,3);
		}
	};
}
