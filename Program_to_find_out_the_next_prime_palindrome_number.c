#include<stdio.h>
int fun(int n){
    int i;
    for(i=2;i<=n/2;i++)
    {
        if (n%i==0) return 0;
    }
    return 1;
}
int fig(int k)
{
    int q=k,s=0,r;
    while (q!=0){
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    if (k==s) return 1;
    else{
        return 0;
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    i=n+1;
    while (1)
    {
       if (fun(i)==1 && fig(i)==1){
           printf("%d",i);
           break;
       } 
       i++;
    }
    
}