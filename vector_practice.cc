#include<iostream> 

using namespace std; 

class VectorError{};

class Vector {
	int capacity_;
	int size_;
	int* buffer_;
public:
	Vector(int capacity=10): capacity_(capacity), size_(0), buffer_(new int[capacity]){}
	~Vector();
	int size() const{
	return size_; 
	}

	bool empty() const{
	return size_ == 0; 
	}

	int& operator[](int n){
	if(n <= capacity_ && n > 0){ 	
	return buffer_(n);
	}
	else{
  		throw VectorError();	
		}	
	}
	
	const int& operator[] const{
	return buffer_(0);
	} 

	void clear(){
	size_ == 0;
	
	}
	
	int capacity() const{
	return capacity_; 
	}

	int& front(){ 
	return 
	}

	const int& front() const{

	}
	
	int& back(){


	}

	const int& back() const{

	}

	
	void push_back()const int& i){
	if(capacity_ == size_){	
	p = size_;
	for( i = 0; i <= size_; i++){
	
	p[i] = buffer_[i]; 
	
	}



};



int main(){




return 0; 
}
