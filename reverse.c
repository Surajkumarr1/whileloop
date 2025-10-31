#include<stdio.h>
int main(){
    int n;
    printf("enter n =");
    scanf("%d",&n);
    int rev=0;
    int ld=0; //ld=last digit
    while(n>0){
        ld=n%10;
        rev=rev*10;
        rev=rev+ld;
        n=n/10;
    }
    printf("%d",rev);
    
}
