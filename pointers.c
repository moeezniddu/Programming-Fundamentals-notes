#include<stdio.h>
int main(){
int a=10;
int *p_a = &a;

char b='x';
char *p_b=&b;

float h=3.14;
float *p_h=&h;

int s=7;
p_a=&s;

printf("%d %c %.2f %d",a,b,h,s);
printf("\n%d %d %d %d",p_a,p_b,p_h,p_a);
printf("\n%d %c %.2f %d",*p_a,*p_b,*p_h,*p_a);
}