#include<stdio.h>
void fibonaki();
void printmonthsaving();
void main()
{
    fibonaki();
}
void fibonaki()
{
    printmonthsaving();
}
void printmonthsaving()
{
    int i,sum=0,n,temp,n1=0,n2=1,ans=0;
    printf("= = = = = = = = = = = = = ");
    printf("How many month you saving:");
    scanf("%d",&n);
    printf("Month 1 saving=0 rupee\nMonth 2 saving=1 rupee\n");
    for(i=2;i<=n;i++)
    {
        temp=n1+n2;
        n1=n2;
        n2=temp;
        printf("Month %d saving=%d rupee\n",i,n2);
        ans=ans+n2;
    }
    printf("= = = = = = = = = = = = = ");
    ans++;
    printf("\n           = = = = = = = = = = = = = = = = = =                 ");
    printf("\n           Total saving amount month saving=%d                      ",ans);
    printf("\n           = = = = = = = = = = = = = = = = = =                  \n");
}
