#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"enter the number "<<endl;
	cin>>a>>b;
	cout<<"you input values are"<<a<<"and"<<b<<endl;
	temp=a;
	a=b;
	b=temp;
	cout<<"the swap values are   "<<a<<"  and  "<<b<<endl;
}
