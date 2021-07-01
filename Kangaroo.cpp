#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int f=0;
    for(int i =0;i<10000;i++)
    {
        if (a==c)
            {
            f=1;
            break;
            }
        a=a+b;
        c=c+d;
    }
    if (f==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
