#include<iostream>
using namespace std;
int main()
{
double p, r, t, i;
cout<<"enter the principle  amount ,rate, time:";
cin>>p>>r>>t;
i=(p*t*r)/100;
cout<<"\n the principle arm =Rs"<<p<<endl;
cout<<"\n time=yrs "<<t<<endl;
cout<<"\n rate=% "<<r<<endl;
cout<<"\n the simplest interset arm is =Rs"<<i;
return 0;
}
