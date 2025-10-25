#include<stdio.h> 

int main() { 
int a,n=0; 
printf("enter your No:"); 
scanf("%d",&a); 

while(a>0) {
    a=a/10; 
    n=n+1; 
} 
printf("number of digits in the number you entered is:%d",n); 
return 0; 
}