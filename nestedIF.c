#include<stdio.h>
#include<stdbool.h>
bool ValidTriangle(float , float ,float );
int main(){
bool valid= ValidTriangle(10,10,160);
printf("%d",  valid);
}
bool ValidTriangle(float a , float b,float c){
bool valid = false;
if (a>0 && b>0 && c>0){
	if (a+b+c == 180){
		valid=true;
		return valid;
	}else
		return valid;
}else
 return valid;
}