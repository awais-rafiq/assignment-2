#include<iostream>
using  namespace std;
int main()
{
	int n,a,b;
	cout<<"enter the 3 digit number:"<<endl;
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	cout<<"number in reserved order is "<<n<<b<<a;
}

