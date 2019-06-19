#include "Fraction.H"

void Fraction::simplify(){
	int gcd = getGCD(m_numerator,m_denominator);
	
	if (gcd > 1){
		m_numerator /= gcd;
		m_denominator /= gcd;
	}

}

int Fraction::getGCD(int a, int b){
	if (a < b) return getGCD(b,a);

	if (b == 0) return a;
	else{
		return (b,a%b);
	}
}

bool Fraction::operator==(const Fraction & obj) const{
	if (m_denominator == obj.getDenominator()){
		return m_numerator == obj.getNumerator();
	}

	return (m_numerator * obj.getDenominator()) == (obj.getNumerator() * m_denominator);
}
