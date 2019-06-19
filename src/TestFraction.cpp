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
	Fraction tst = Fraction(8,12);
	tst.simplify();
	EXPECT_TRUE(tst.getNumerator() == 2 && tst.getDenominator() == 3);

	Fraction tst2 = Fraction(20,4);
	tst2.simplify();
	EXPECT_TRUE(tst2.getNumerator() == 5 && tst2.getDenominator() == 1);
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
