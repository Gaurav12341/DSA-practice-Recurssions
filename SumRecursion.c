#include <stdio.h>
int sum(int n){
    if (n==0)
        return 0;
    else
        return sum(n-1)+n;
}
int main()
{ int a;
     a= sum(5);
    printf("%d",a);
    return 0;
}