#include<stdio.h>
int main(){
      /*Write a program to calculate perimertr of rectangle 
      Take side a & b from the user*/

      int len, wid;
      printf("Enter the length of rectangle : ");
      scanf("%d", &len);
      printf("Enter the width of rectangle : ");
      scanf("%d ", &wid);

      printf("Perimeter of rectangle will be : %d", 2*(len+wid));

      /*Take a number from user & output its cube*/

      int num;
      printf("Enter the Number: ");
      scanf("%d", &num);
      printf("Cube of the Number %d is %d:", num, num*num*num);


}