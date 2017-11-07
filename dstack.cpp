#include <iostream> 
#include <cstdlib> 

using namespace std;

class Stack{
	
	const static int chunk_ = 2;
	int *data_;
	int size_;
	int top_;

	public: 
	Stack() : top_(-1), size_(chunk_), data_(new int[chunk_]) {}
	~Stack(){
	cout << "destructing" << endl; 
	delete []data_;
	} 


	void push(int v) {
		if(top_ == (size_ - 1)){
		resize(); 
		}
		data_[++top_] = v; 	
	}



	int pop(void) {
	if (top_ < 0 ){
		throw exception();
		}
	return data_[top_--];
	} 

	private: 
	
	void resize(){
	int* tmp = data_; 
	data_ = new int[size_ + chunk_]; 
	for(int i = 0; i < size_; i++){ 

	data_[i] = tmp[i]; 
		} 	
	delete [] tmp; 	
	cout << "resized" << endl; 	
	}
 

}; 

int main() { 
	Stack st;
	st.push (1);
	cout << "push 1" << endl; 	
	st.push (2);
	cout << "push 2" << endl;	
	st.push (3); 
	cout << "push 3" << endl; 
try { 
	cout << st.pop () << endl;
	cout << st.pop () << endl;
	cout << st.pop () << endl; 
	} catch( const exception & e) {
	cout << "basi feila" << endl;

	}
	
	return 0; 

	}
