#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3_2/Truck.cpp"
#include "../Lab_3_2/Car.cpp"
#include "../Lab_3_2/Engine.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Labtest32
{
	TEST_CLASS(Labtest32)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Truck N(180, "BMV", 6000, 10);
			Assert::AreEqual(N.GetPrice(), 6000);
		}
	};
}
