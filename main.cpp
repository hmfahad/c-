#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    int a,b,n;
    int c,d,e,i;
    long long int sum;
    cin>>t;
    for(i=1;i<=t;i++)
    {
       cin>>a>>b>>n;

      c=sqrt((a*a)-(4*b));
      d=(a+c)/2;
      e=(a-c)/2;
      sum=pow(d,n)+pow(e,n);
      cout<<"Case "<<i<<": "<<sum<<endl;
    }

}
