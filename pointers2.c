#include <stdio.h>
int main()
{
   int* pc, c;
   
   c = 22;
   printf("Address of c: %p\n", &c); //656456
   printf("Value of c: %d\n\n", c);  // 22
   
   pc = &c;
   printf("Address of pointer pc: %p\n", pc);//656456
   printf("Content of pointer pc: %d\n\n", *pc); // 22
   
   c = 11;
   printf("Address of pointer pc: %p\n", pc);//656456
   printf("Content of pointer pc: %d\n\n", *pc); // 11
   
   *pc = 2;
   printf("Address of c: %p\n", &c);//656456
   printf("Value of c: %d\n\n", c); // 2
   return 0;
}