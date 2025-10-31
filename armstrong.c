#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the number ");
    scanf("%d",&n);
    m=n;
    int ld=0;
    int sum=0;
    while(m!=0){
        ld=m%10;
        sum=sum+(ld*ld*ld);
        m=m/10;
    }
    if(sum == n)
    printf("%d \nThe no is armstrong no",sum);
    else
    printf("The no is not a armstrong no");
    return 0;
}
