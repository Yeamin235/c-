#include<stdio.h>
int main(){

int num,n,rev=0,reminder;
printf("Enter a number:\n");

scanf("%d",&num);

n=num;

while(num>0){

reminder=num%10;

rev=rev*10+reminder;

num=num/10;

}

if(n==rev)

printf("\n palindrome.");

else

printf("not a palindrome.");


return 0;
}
