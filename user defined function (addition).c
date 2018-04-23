#include<stdio.h>

int thesum();

int main(){

int sum;

sum=thesum();

printf("The summession:%d",sum);

return 0;

}

int thesum(){

int num1,num2;

printf("Enter the 1st number:");

scanf("%d",&num1);

printf("Enter the 2nd number:");

scanf("%d",&num2);

return num1+num2;

}

