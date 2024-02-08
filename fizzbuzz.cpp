/*Write a program that prints the numbers from 1 to 100. For multiples of 3, print "Fizz"; for 
multiples of 5, print "Buzz"; and for numbers that are multiples of both 3 and 5, print 
"FizzBuzz".
*/
#include <iostream>
using namespace std;
int main(){
	int i=0;
	for (i=1; i<101; ++i){
	if(i%3==0 && i%5==0){
		cout << i <<" fizzbuzz\n";
	}
	else if(i%3==0){
		cout << i <<" fizz\n";
	}
	else if(i%5==0){
		cout << i <<" Buzz\n";
	}
	else{
		cout << i <<"\n ";
	}
	
	}
	return 0;
}