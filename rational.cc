#include <iostream> 

using namespace std; 

class Rational{
	long num_;
	long den_; 

	public:
	
	long get_numerator() const {
		return num_;
	}

	long get_denominator() const{
		return den_; 
	} 

	Rational& set_num(long num){
		num = num_; 
		return *this;
	}
	
	Rational& set_den(long den){ 
		den = den_;
		return *this; 
	} 

	Rational& add(const Rational& r){
		if(den_==r.get_denominator()){
					num_+= r.get_numerator;
		}
		else if(den_!=r.get_denominator()){
			//umnojavame znamenatelitel1 sus znamenatel2; umnojavame chislitel1 sus znam2 i chislitel2 sus znam1 i subirame chislitelite vrushtaiki stoinost razdelena na znamenatelq koito sega e raven;	
		}

		return *this;
	}
	
	Rational& sub(const Rational& r){
		if(den_ == r.get_denominator){ 
	
		return *this;
	}

	Rational& operator +=(const Rational& r){
	
			return *this; 
	}
	Rational& operator  -=(const Rational& r){

			return *this;
	}

};


int main() {
	Rational r1(0,0);
	r1.print();
	(r.set_numerator(1)).set_denominator(2);
	

return 0; 
} 

