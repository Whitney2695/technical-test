//Write a program to generate the Fibonacci sequence up to 100.
#include <iostream>
using namespace std;
int main(){
	int num;
	int f=0;
	int s=0;
	int n;
	for(f=0; f<100; ++f){
		cout << f <<" \n";
		n = f + s;
		f =s;
		s =n;
	}
	return 0;
}