/*SUM 
(By Reference) Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.

*/


//Library
#include<iostream>
using namespace std;

	//Function
	void funcR(int a, int b ,int &c){
		//Giving the sum
		c=a+b;
	}

// main function
int main(){
	//Declare the variables.	
	int p,q,sum;
		//Ask for input
		cout<< "The two numbers are : ";
		cin>>p>>q;
		// go to arguments
		funcR(p,q,sum);
		//write the sum 
		cout<<"The sum of the numbers "<<p<< " & " << q <<" = "<<  sum <<endl;       
return 0;
}
