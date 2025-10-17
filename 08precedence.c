#include<stdio.h>

int main(){
      /*
      01. Bracket (){}[]
      02. *,/,%
      03. +,-
      04. =
      */

      int x;
      x = 4+9*10;
      printf("%d\n", x);
      x = 4*3/6*2;  // same precedence (left to right ---->)
      printf("%d\n", x);

      x = 5*2-2*3;
      printf("%d\n", x);

      x = 5*2/2*3;
      printf("%d\n", x);

      x = 5*(2/2)*3;
      printf("%d\n", x);

      x = 5+2/2*3;
      printf("%d\n", x);

}