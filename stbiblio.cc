#include <iostream> 
#include <list> 

using namespace std;



void print_list(list<int>& l1){
		for(list<int>::iterator it = l1.begin(); it!=l1.end(); ++it) {
		//definirame iterator za spisuk ot celi chisla, vurvi dokato ne minem do edno sled posledniq - tam spira, obhojdat se vs elementi i trqq da gi outnem, znaeiki che moderira ukazatel:
		cout<< *it << endl;
	}	
}

int main() 
{ 
 	
 	list<int> l1; 

	cout <<"empty" << l1.empty() << endl; 
	cout <<"size" << l1.size() <<endl; 
	l1.push_front(-1);
	l1.push_back(1);
	l1.push_front(-2);
	l1.push_back(2); 

 	cout <<"empty" << l1.empty() << endl;
	cout <<"size" << l1.size() << endl;
	cout << l1.back() << endl; 
	cout << l1.front() << endl;
		//front i back ni vrushtat stoinostta bez da iztrivat; push_back dobavq nov element v kraq, a push_front -  v nachaloto;

	print_list(l1); 

for(auto it = l1.begin(); it != l1.end(); ++it){
	cout << *it << " "; 
	//auto kazva da se izvede sam tipa
}
 	cout << endl;
	l1.insert(l1.begin(), -10);
	l1.insert(l1, end(), 10);
	print_list(l1);
	
	auto it=l1.begin();
	it++;
	it++;
	it++;
	it = l1.insert(it, 0);
	print_list(l1);
	
	l1.erase(it);
	print_list(l1);
	l1.erase(l1.begin(), l1.end());
	cout<< "size" << l1.size() << endl;

	list<int> l2(10);
	print_list(l2);
	list<int>l3(10, -1);
	print_list(13);

	int a[] = {0,1,2,3,4,5,6,7,8,9};

	list<int> l4(a, a+10);
	print_list(l4);
	
	print_list(l1);
	list<int>l5(l1.begin(), l1.end());
	print_list(l5);
	

	return 0;
//insert vmukva element predi elementa kum koito e nasochen iteratora



} 

