//v bazoviq klas slagame navsqkude ukazateli - demek klasut naslednik se izrqzva i se vmestva v bazoviq klas; ne e mn dobur stranichen efekt shtoto chovek ochakva obekta da bude zakachen i da si ostane celiq; moje ponqkoga da ni trqq otrqzana versiq no kogato pishem na c++ trqq chovek da e gotov za vsichko da strada da plache da ne qde da ne spi da bude prebivan da bude depresiran s vecheri da ne moje da kaje maichinoto si ime;
//sledvashtiqt put zadulje pak pitaite za slaisvane;
//ima  dva boga;
//nasledqvaneto se izpolzva kogato iskame da imame obshta funkcionalnost mejdu obekti koito sa shodni;
//primerno imame mn figurki - krug triugulnik i tn i za vseki ot tiq obekti imame neshto shodno: cvqt/debelina na liniq i t.n toest za tova e hubavo da imame bazov klas za da moje taq funkcionalnost da e sigurna;
//shte otpechatvame che ima obekt - da si predstavim che imame metoda za risuvane draw() na class-a circle; toi trqq da narisuva krug; classa rectangle v metoda draw() risuvame liniq; vuprosut e metodut draw() kakvo trqbva da pravina bazoviq klas: sa sh praim zagotovka(musaka/banica);
//metodut draw na bazoviq klas trqq da go napraim chisto virtualen metod - kat abstrakten klas; nalichieto na pone 1 abstraktna funkciq pravi clasut abstrakten; toest klasovete naslednici trqq zamestqt chisto virtualnite funkcii;
#include <iostream>

#include <list>

using namespace std;

class Shape{

	
		public:
			
		virtual void draw() const=0;	






};

class Point{
	double x_, y_;
public:
	Point(double x=0.0, double y=0.0)
	:x_(x), y_(y)
	{}
	double get_x() const{
		return x_;
	}
	double get_y() const{
		return y_;
	}

};



ostream& operator<<(ostream& out, const Point& p){
	out << "P(" <<

}



class Circle: public Shape{

	Point center_;
	double radius_;


public:
	Circle(const Point& center, double radius)
	:center_(center),
	 radius_(radius)
	 {}
	 


	void draw() const{
		cout<<"C(" << center_ << ";" << radius << ")" << endl;
			
	}


};


class Rectangle: public Shape {

	Point ul_, br_;
	
	static double min_(double a, double b){
	return(a<b)? a:b;
	}
	
	static double max_(double a, double b){
		return(a<b)? a:b;
	}
	
	
	public:
	
	Rectangle(const Point& p1, const Point & p2)
	:ul_(min_(p1.get_x(), p2.get_x());
		 max_(p1.get_y(), p2.get_y())),
	 br_(max_(p1.get_x(), p2.get_x()))
		 min_(p1.get_y(), p2.get_y()))	 
	{}
	
	
	void draw() const {
		cout<< "R(" << ul_ << ";" << br_ << ")" << endl;
	
	}
	
};

int main(){
	
		
	list<Shape*> shapes;
	Circle c1(Point -3, 0),3.0);
	
	
	shapes.push_back(&c1);
	
	Circle c2(Point 3, 0),3.0);
	shapes.push_back(&c2);
	
	
	Rectangle r1(Point (-3, -1), Point(3,1));
	shapes.push_back(&r1);	
	
	
	
	for(list<Shape*> ::iterator it = shapes.begin();
		it!=shapes.end(); ++i){
			(*it)-> draw();			
		}



return 0;
}
