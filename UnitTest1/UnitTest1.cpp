#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(FindMaxFunctionTests)
    {
    public:

        TEST_METHOD(TestFindMaxWithEvenNumbers)
        {
            // Test case with even numbers
            int arr[] = { 2, 4, 6, 8, 10 };
            const int size = sizeof(arr) / sizeof(arr[0]);
            Assert::AreEqual(10, FindMax(arr, size), L"FindMax did not return the correct maximum even number");
        }

        TEST_METHOD(TestFindMaxWithMixedNumbers)
        {
            // Test case with mixed numbers (even and odd)
            int arr[] = { 1, 3, 4, 7, 6, 8, 5 };
            const int size = sizeof(arr) / sizeof(arr[0]);
            Assert::AreEqual(8, FindMax(arr, size), L"FindMax did not return the correct maximum even number");
        }


        TEST_METHOD(TestFindMaxWithSingleEvenNumber)
        {
            // Test case with a single even number
            int arr[] = { 2 };
            const int size = sizeof(arr) / sizeof(arr[0]);
            Assert::AreEqual(2, FindMax(arr, size), L"FindMax did not return the correct maximum even number for single even element");
        }


    };
}
