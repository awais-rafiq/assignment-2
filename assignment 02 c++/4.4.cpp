#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 int a,b;
 a=9876;
 b=4556;
char str[]="opp using c++";
 cout<<"("<<setw(7)<<a<<")"<<endl;
 cout<<"("<<setw(15)<<b<<")"<<endl;
 cout<<"("<<setw(8)<<str<<")"<<endl;		
return 0;
}
