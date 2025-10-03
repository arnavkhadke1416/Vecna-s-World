#include <iostream>
using namespace std;

// Declare Function to calculate sum of indivual digits
int Sumof_indiviualdigits(int n){

	int rem=0,sum=0;

	while(n>0){
	rem = n%10;
	n = n/10;
	sum += rem;
	}
	return sum;
	}
int main(){
	int num;
	// Enter number
	cout << "Enter the positive number ";
	cin >> num;
	
	cout << "The sum of indiviual digits is " <<Sumof_indiviualdigits(num);
	
	return 0;
	
	}
	
	
