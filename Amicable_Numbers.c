#include<stdio.h>
void Amicable(int n,int m)
{
    int s=0,k=0,i;
    for(i=1;i<n;i++)
    {
        if(n%i==0){
            s=s+i;
        }
    }
    
    
    for(i=1;i<m;i++)
    {
        if(m%i==0){
            k=k+i;
        }
    }
    
    if(s==m && k==n){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
    
    
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    Amicable(n,m);
    
}