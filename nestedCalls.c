#include<stdio.h>
int strange(int,int);
int main(){
int a=1,b=2,c=3,d=4;
c = strange(a,b);
a = strange(c,d);
b = strange(strange(c,a), strange(2,3));
d = strange(strange(strange(a,b),c),a);
printf("%d  %d  %d  %d",a,b,c,d);
}
int strange( int a,int b)
{
int c ,d;
c=a+b;
d=a-b;
return c+d;
}