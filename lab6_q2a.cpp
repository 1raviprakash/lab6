
/* 
SUM 
(By Value) Write a program with a function that takes two int parameters, adds them together, then returns the sum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum

*/
// library
#include<iostream>
using namespace std;

	// function
	int func(int a, int b){
		//Give their sum.
		int sum = a + b;
		return sum;
	}

//Main function
int main(){
	//Declaring  variables
	int c,d;
		//Ask for the two numbers.
		cout<< "write the two numbers ";
		cin >>c >>d;
		//using the created function
		cout<<"The sum of the numbers "<<c<< " & " <<d<<" = "<< func(c,d) <<endl;
		
return 0;
}
