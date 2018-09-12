/*Minimum
(By Value) Write a program with a function that takes two int parameters, finds the Minimum, then returns the Minimum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the Minimum.*/

// library
#include<iostream>
using namespace std;

	// a function 
	int func(int a, int b){
		if(a<b){
		return a;}
		else 
		{
		return b;
		}
	}

//Driver function
int main(){
	//Declare variables
	int c,d;
		//Ask  for two numbers.
		cout<< "Let the two numbers be ";
		cin >>c >>d;
		//using the created function
		cout<<"The Minimum of the numbers "<<c<< " & " <<d<<" = "<< func(c,d) <<endl;
		
return 0;
}
