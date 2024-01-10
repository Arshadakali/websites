#include <iostream>
#include<conio.h>
int test(int x,int y)
{
    return y%x;
}

int main(void) {
    int a=3,b=70,c,d;
    c=test(a,b);
    d=test(b,a);
    
    cout<<c<<d
    
    return 0;
    }
