#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    long a,b,c;
    a=1;
    b=2;
    unsigned int sum=2;
    for(long i=0;;i++)
    {
        if(c>4000000)
        {
            break;
        }
        c=a+b;
        if(c%2==0)
        {
            cout<<c<<endl;
            sum=sum+c;
        }
        a=b;
        b=c;
    }
    cout<<sum;
}