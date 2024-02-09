//Write a program that counts the number of vowels in a sentence.
#include <iostream>
using namespace std; 
int main(){
int i;
int numofvowels = 0;
string str ;
cout <<"enter your string:";
getline(cin , str);
 for(int i=0; i<str.length(); i++){
 	if((str[i]==('a'))|| (str[i]==('e'))||(str[i]==('i'))||(str[i]==('o'))||(str[i]==('u')))
		  numofvowels ++;
	 }
	 cout<<numofvowels;
	 return 0;
}