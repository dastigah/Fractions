#include "gtest/gtest.h"
#include "Fraction.H"
#include <iostream>

namespace {

class TestFraction : public ::testing::Test {
	
};

}

TEST_F(TestFraction, testEqual){
	EXPECT_EQ(Fraction(1,2),Fraction(2,4));
	EXPECT_EQ(Fraction(3,1),Fraction(6,2));
}

TEST_F(TestFraction, testGreaterThan){

}

TEST_F(TestFraction, testLessThan){

}

TEST_F(TestFraction, testDivByZero){

}

TEST_F(TestFraction, testSimplify){

}

TEST_F(TestFraction, testGCD){

}

TEST_F(TestFraction, testAdd){

}

TEST_F(TestFraction,testSubtract){

}

TEST_F(TestFraction,testMultiply){

}

TEST_F(TestFraction,testDivide){

}








int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
