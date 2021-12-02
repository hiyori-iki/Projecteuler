#include <iostream>
#include <conio.h>

using namespace std;

 int som(int x)
    {
        int a,an,d,sum,n;
        a=x;
        d=x;
        an=999; 
        n=an/d; //number of terms
        sum=((n*(2*a+(n-1)*d))/2); //sum of multiples
        return sum;
    }
int main()
{
   cout<<(som(3)+som(5))-som(15);
}
