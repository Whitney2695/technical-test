/*Write a program that accepts a string as input, capitalizes the first letter of each word in the 
string, and then returns the result string.*/
#include <iostream>
using namespace std;
int main(){
	string str;
	int i;
	cout << "Enter your sentense:";
	getline(cin, str);
	for(i=0; i<str.length(); i++){
		if(i==0){
			str[i]=toupper(str[i]);
		}
		else if(str[i]==' ' && str[i+1]!= ' '){
			str[i+1] = toupper(str[i+1]);
		}
	}
	cout <<str;
}