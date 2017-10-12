#include<iostream>
#include<strstream>

using namespace std;

int main(){
/*	double d1;
	while(true){
		cin >> d1;
		if(cin.good()){
			cout << d1 << "is a number" << endl;
		}
		else {
			cout << "not"<<endl;
			cin.clear();
		}
	}
*/
	

	string input;
	while(true){
		getline(cin, input); //ot kude shte chetem i kude shte zapisvame.
		cin>>input;
		isstringstream in(input);
		double value;		
		in >> value; //chetem samo e dna duma s toq operator pomalko pomalko;
		if(!in.fail() && in.eof()){ //proverqvame dali e svurshila dumata
			cout << input << "is a number" << endl;
		}
		else{
			cout << input << "is not a number"" << endl;
		}


	}


return 0;
}
