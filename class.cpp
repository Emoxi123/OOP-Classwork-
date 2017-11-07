#include <iostream> 
#include <cstdlib> 

using namespace std;

class Foo{

	int bar_;
	public: 
	Foo() : bar_(6){
	cout << "init." << endl;
	}

	int get_bar(){
	return bar_;
	}
}; 

int main(void){

	Foo* ptr = new Foo();
	cout << ptr->get_bar() << endl;
	delete(ptr); 

	return 0; 
} 
