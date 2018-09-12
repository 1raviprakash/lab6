/*Maximum
(By Reference) Goal is the same as above, but this time, the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.*/
// Library
#include<iostream>
using namespace std;

	//Function.
	void funcR(int a, int b ,int &c)
	{
		// applying if else condition
		if(a>b)
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
	int p,q,max;
		//Ask for two numbers.
		cout<< "The two numbers to give the maximum  of : ";
		cin>>p>>q;
		
		funcR(p,q,max);
		//give the maximum.
		cout<<"The maximum of the numbers "<<p<< " & " << q <<" = "<< max <<endl;
		

return 0;
}
	

