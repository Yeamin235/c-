#include<stdio.h>

int main(){

double *p;

double q,temp;

temp=1234.34;

p=&temp;

q=*p;

printf("%.2f",q);

return 0;


}
