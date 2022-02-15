#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    int n;
    int i=1;
    int sum=0;
    int prod=1;

    printf("find sum of natural numbers from 1 to enter number:\n",n);
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        prod=prod*i;
    }
        printf("%d %d",sum, prod);

       return 0;
}
