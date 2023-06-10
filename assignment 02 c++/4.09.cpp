#include<iostream>
using namespace std;
int main()
{
	double a,y,i,r;
	cout<<"enter the principle amount "<<endl;
	cin>>a;
	cout<<"enter the number of years"<<endl;
	cin>>y;
	cout<<"enter the rate of interest"<<endl;
	cin>>i;
	r=(i*y*a)/100;
	cout<<"principle arm ="<<a<<endl;
	cout<<"number of year "<<y<<"yrs"<<endl;
	cout<<"rate of interest is"<<i<<"%"<<endl;
	cout<<"simple interst =Rs."<<r;	
	
}

