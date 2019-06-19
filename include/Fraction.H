#ifndef __FRACTION_H
#define __FRACTION_H
class Fraction{
	int	m_numerator;
	int m_denominator;

	int gcd(int a, int b);
	
public:
	Fraction(int numerator, int denominator): m_numerator(numerator), m_denominator(denominator){}

	void simplify();

	Fraction operator+ (const Fraction &);


};
#endif

