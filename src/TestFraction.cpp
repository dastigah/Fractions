#include "gtest/gtest.h"
#include "Fraction.H"
#include <iostream>
#include <stdexcept>

namespace {

class TestFraction : public ::testing::Test {
	
};

}

TEST_F(TestFraction, testEqual){
	EXPECT_EQ(Fraction(1,2),Fraction(2,4));
	EXPECT_EQ(Fraction(3,1),Fraction(6,2));
}

TEST_F(TestFraction, testLessThan){
	EXPECT_LT(Fraction(1,2),Fraction(2,3));
	EXPECT_LT(Fraction(6,8),Fraction(7,8));
}

TEST_F(TestFraction, testGreaterThan){
	EXPECT_GT(Fraction(3,4), Fraction(1,2));
	EXPECT_GT(Fraction(1,5), Fraction(1,6));
}

TEST_F(TestFraction, testDivByZero){
	EXPECT_THROW(Fraction(1,0),std::runtime_error);	
	EXPECT_THROW(Fraction/
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
	EXPECT_EQ(Fraction(1,4)+Fraction(2,5),Fraction(13,20))
	EXPECT_EQ(Fraction(2,8)+Fraction(4,8),Fraction(3,4)); 
}

TEST_F(TestFraction,testSubtract){
	EXPECT_EQ(Fraction(15,60)-Fraction(10,60),Fraction(1,12));
	EXPECT_EQ(Fraction(1,4) - Fraction (2,4),Fraction(-1,4))
}

TEST_F(TestFraction,testMultiply){
	EXPECT_EQ(Fraction(12,144)*Fraction(2,10),Fraction(1,60));
	EXPECT_EQ(Fraction(2,9)*Fraction(-4,8),Fraction(-8,72));
}

TEST_F(TestFraction,testDivide){
	EXPECT_EQ(Fraction(2,5)/Fraction(1,3),Fraction(6,5));
	EXPECT_EQ(Fraction(-1,7)/Fraction(3,1),Fraction(-1,21));
}








int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
