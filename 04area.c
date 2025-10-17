#include<stdio.h>
#include<math.h>

int main(){
      
      //area of square
      int side ;
      printf("Enter the Side of the square:");
      scanf("%d", &side);
      printf("Area of square with side %d is: %d\n", side , side*side);

      /*Area of Circle*/
      float radi;
      printf("Enter the Radius of the Circle:");
      scanf("%f", &radi);
      printf("Area of Circle with Radius %f is :%.2f \n", radi, (22.0/7)*radi*radi );

      //Area of triangle

      int a,b,c;
      printf("Enter the sides of triangle:");
      scanf("%d %d %d", &a, &b, &c);
      int s = (a+b+c)/2;
      int area = sqrt(s*(s-a)*(s-b)*(s-c));

      printf("Area will be: %d" , area);

      return 0;

}