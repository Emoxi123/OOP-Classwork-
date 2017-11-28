#include <iostream>
#include <string>
#include <list>
//v bazoviq klas slagame navsqkude ukazateli - demek klasut naslednik se izrqzva i se vmestva v bazoviq klas; ne e mn dobur stranichen efekt shtoto chovek ochakva obekta da bude zakachen i da si ostane celiq; moje ponqkoga da ni trqq otrqzana versiq no kogato pishem na c++ trqq chovek da e gotov za vsichko da strada da plache da ne qde da ne spi da bude prebivan da bude depresiran s vecheri da ne moje da kaje maichinoto si ime;
//sledvashtiqt put zadulje pak pitaite za slaisvane;
//ima  dva boga;
//nasledqvaneto se izpolzva kogato iskame da imame obshta funkcionalnost mejdu obekti koito sa shodni;
//primerno imame mn figurki - krug triugulnik i tn i za vseki ot tiq obekti imame neshto shodno: cvqt/debelina na liniq i t.n toest za tova e hubavo da imame bazov klas za da moje taq funkcionalnost da e sigurna;
//shte otpechatvame che ima obekt - da si predstavim che imame metoda za risuvane draw() na class-a circle; toi trqq da narisuva krug; classa rectangle v metoda draw() risuvame liniq; vuprosut e metodut draw() kakvo trqbva da pravina bazoviq klas: sa sh praim zagotovka(musaka/banica);

using namespace std;

class Employee {

  string name_;
  long id_;
  
public:

  Employee(string name, long id) : name_(name), id_(id) {}
  
  string get_name() const {
    return name_;
  }
  
  long get_id() const {
    return id_;
  }
  
  virtual void print() const {
    cout << "Employee " << get_id() << ": "
         << get_name() << endl;
  }
};

class Manager : public Employee {
  int level_;
  
public:

  Manager(string name, long id, int level)
      : Employee(name, id), level_(level) {}
  
  int get_level() const {
    return level_;
  }
  
  virtual void print() const {
    cout << "Manager " << get_id() << ", level " << get_level() << ": "
         << get_name() << endl;
  }
};

int main() {

  list<Employee*> employees;

  employees.push_back(new Employee("Emil", 1));
  employees.push_back(new Employee("Vladimir", 2));
  Manager* m = new Manager("Lubo", 0, 1);
  employees.push_back(new Manager("Lubo", 0, 1));
  for (list<Employee*>::iterator it = employees.begin();
      it != employees.end(); it++) {
    (*it)->print();
  }
  //m->print();
  
  // won't compile
  //Manager* m1 = new Employee("Ivan", 3);
  
  // 
  cout << "Pointer vs instance" << endl;
  Employee* e1 = m;
  Employee e2 = *m;
  e1->print();
  e2.print();

return 0; 
	
}

