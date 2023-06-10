#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the number "<<endl;
	cin>>a>>b;
	cout<<"you input values are  "<<a<<" and "<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"the swap values are   "<<b<<"  and  "<<a<<endl;
}
