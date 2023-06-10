#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 
double r, a=132.364, b=26.91;
r=a+b;
cout<<r<<endl;
cout<<setprecision(5)<<r<<endl;
cout<<setprecision(4)<<r<<endl;
cout<<setprecision(3)<<r<<endl;
cout<<setprecision(2)<<r<<endl;
cout<<setprecision(1)<<r<<endl;
return 0;
}
