#include<stdio.h>
int main()
{
    int n,r,e=0,o=0;
    scanf("%d",&n);
    while (n!=0){
        r=n%10;
        if (r%2==0)
        {
            e=e+1;
        }
        else{
            o=o+1;
        }
        n=n/10;
    }
    if (e>0 && o>0)
    {
        printf("Mixed");
    }
    else if(e>=1){
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}