#include <iostream>
using namespace std;



int main()
{
   int a=3,b=5;
   a=a+b;
   b=a-b;
   a=a-b;
   cout<<a<<" "<<b<<'\n';

   int c=3,d=5;
   c=c*d;
   d=c/d;
   c=c/d;
   cout<<c<<" "<<d<<'\n';

   int e=3,f=5;
   e=e^f;
   f=e^f;
   e=e^f;
   cout<<e<<" "<<f;
}