﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 8.1.recurs/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str[101] = { 'w', 'h', 'i', 'l', 'e', 'w' };
			char* dest1 = new char[151];
			dest1[0] = '\0';
			char* dest2;
			dest2 = Change(dest1, str, dest1, 0);
			Assert::AreEqual(dest2[0], '*');

		}
	};
}