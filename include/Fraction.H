#ifndef __FRACTION_H
#define __FRACTION_H

#include <stdexcept>

class Fraction{
	int	m_numerator;
	int m_denominator;

	int getGCD(int a, int b);
	
public:
	Fraction(int numerator, int denominator): m_numerator(numerator), m_denominator(denominator){
		if (m_denominator == 0) throw std::runtime_error("Division by 0");
	}

	void simplify();

	Fraction operator+ (const Fraction &);
	bool operator==(const Fraction &) const;
	bool operator>(const Fraction &) const;
	bool operator<(const Fraction &) const;

	Fraction operator+(const Fraction &) const;
	Fraction operator-(const Fraction &) const;
	Fraction operator*(const Fraction &) const;
	Fraction operator/(const Fraction &) const;

	int getNumerator() const {return m_numerator;}
	int getDenominator() const {return m_denominator;}


};
#endif

