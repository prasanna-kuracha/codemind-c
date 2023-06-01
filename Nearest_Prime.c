#include<stdio.h>
#include<stdlib.h>
int fun(int n){
    int i;
    for(i=2;i<=n/2;i++)
    {
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int k,x,y,i;
        scanf("%d",&k);
        for(i=k;;i++)
        {
            if (fun(i)==1)
            {
                x=i;
                break;
            }
        }
        for(i=k;i>=1;i--)
        {
            if (fun(i)==1)
            {
                y=i;
                break;
            }
        }
        if (abs(k-x)==abs(k-y)){
            printf("%d
",y);
        }
        else if(abs(k-x)<abs(k-y)){
            printf("%d
",x);
        }
        else{
            printf("%d
",y);
        }
    }
}