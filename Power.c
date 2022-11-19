#include<stdio.h>
int power(int m, int n){
    if (n==0)
    {
        return 1;
    }
    return  power(m,n-1)*m;
}
int main()
{
    int a;
    a=power(5,2);
    printf("%d",a);
    return 0;
}