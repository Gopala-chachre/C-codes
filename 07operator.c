#include<stdio.h>
#include<math.h>

void arithmetic(int a, int b ){
     //Arithmetic Operators

     printf("-----------------Arithmetic Operation-----------------\n");

     int sum=a+b;
     int mult=a*b;
     int div=a/b;
     int rem= a%b;

     printf("%d\n", sum);
     printf("%d\n", mult);
     printf("%d\n", div);
     printf("%d\n", rem);

     int p = 3;
     int q = 2;
     int power = pow(p,q);
     printf("%d", power);

     /*int op int --> int
     int op float --> float
     float op float --> float*/

     printf("%d\n", 2*2);
     printf("%.2f\n", 2.5* 5);
     printf("%.2f\n",2.5* 5.0);
     printf("%d\n",2/3);
     printf("%.2f\n",2.0/3);
     printf("%d\n",3/2);
     printf("%.2f\n",3.0/2);

}

void relational(int a, int b){

     printf("-----------------Relational Operation-----------------\n");
     
     /*in C the non-Zero denotes the TRUE mainly 1
     and the FALSE is denoted by 0 (Zero)*/
     
     printf("%d\n ", a==b);
     printf("%d\n ", a!=b);
     printf("%d\n ", a>b);
     printf("%d\n ", a>=b);
     printf("%d\n ", a<b);
     printf("%d\n ", a<=b);
     
     if (a>b)
     {
          printf("%d is Greater then %d\n", a, b);
     }else if (a<b)
     {
          printf("%d ia Smaller then %d\n", a , b);
     }else
     {
          printf("a & b Both Numbers are Equals\n");
     }
     
}

void logical(int a, int b){
     
     /*Logial Operators 
     &&-->AND
     ||--> OR
     !-->NOT*/
     printf("-----------------Logial Operators-----------------\n");
     
     printf("%d\n", 3>4 && 5>2 );
     printf("%d\n", 3>4 || 5>2 );
     printf("%d\n", (3>4) && 5>2 );
     printf("%d\n", !(3>4) || 5>2 );
}

void assig(int a, int b){
     // a = a+b --> a+=b
     printf("%d\n", a=a+b);
     printf("%d\n", a+=b);
     printf("%d\n", a-=b);
     printf("%d\n", a*=b);
     printf("%d\n", a/=b);
     printf("%d\n", a%=b);
}

int main(){
     int a;
     int b;
     
     printf("Enter the First Number (a):");
     scanf("%d", &a);
     printf("Enter the second Number (b):");
     scanf("%d", &b);

     /*
          OPERATOR PRECENDENCE
     Priority            Operator
        1                    !
        2                  *,/,%
        3                   +,-
        4                <,<=,>,>=
        5                  ==,!=
        6                   &&
        7                   ||
        8                   =
     */
     
     // //Arithmetic Operators (+, -, *, /, %)
     arithmetic(a, b);

     // //Relational Operators (==, !=, >, >=, <, <=)
     relational(a,b);
     
     // //Logical Operators (&&, ||, !)
     logical(a, b);

     /*Assignment Operator
     (Shorthand Operator){ =,+=,-=,*=,/=,%= }*/
     assig(a,b);

     return 0;

}