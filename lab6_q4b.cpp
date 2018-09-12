/*Minimum
(By Reference) Goal is the same as above, but this time, the function that finds the Minimum should be void, and takes a third, pass by reference parameter; then puts the Minimum in that.*/
// Library
#include<iostream>
using namespace std;

	//Function.
	void funcR(int a, int b ,int &c)
	{
		// applying if else condition
		if(a<b)
		{
		c = a;
		}
		else 
		{
		c = b;
		}
	}

//main function
int main(){
	//Declare the variables.	
	int p,q,Minimum;
		//Ask for two numbers.
		cout<< "The two numbers to give the Minimum  of : ";
		cin>>p>>q;
		
		funcR(p,q,Minimum);
		//give the Minimum.
		cout<<"The Minimum of the numbers "<<p<< " & " << q <<" = "<< Minimum <<endl;
		

return 0;
}
	
