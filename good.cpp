#include<iostream>
using namespace std;
int calculatepower(int ,int);

 int main ()
{
	int base_number;
	cout<<"Enter base number";
	cin>>base_number;
	int Exponent;
	cout<<"Enter Exponent number";
	cin>>Exponent;
	int result =calculatepower(base_number,Exponent);
	cout<<"Required value is "<<result<<endl;
	return 0;
}
int claculatepower(int base_number, int Exponent)
{
	if(Exponent!=0)
	
		return (base_number*calculatepower(base_number,Exponent-1));
		
	else 
	return 1;
	
}
