#include <iostream>
using namespace std;

int main() 
{
	float cm,m,km;
	cout<<"Enter a number in cm";
	cin>>cm;
	
	m=cm/100;
	km=cm/100000;
	
	cout<<"\centimeter: "<<cm<<"\meter: "<<m<<"\kilometer:"<<km;
 
	
	return 0;
}
