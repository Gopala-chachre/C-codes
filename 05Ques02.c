#include<stdio.h>

// ERROR---------
void diviByTwo(){
      //Q. Is the number is divisible by 2(EVEN or ODD)
      int num, rem;
      printf("Enter the Number : ");
      scanf("%d", &num);
      
      rem = num%2;

      if (rem==0)
      {
            printf("The number %d is divisible by 2.(That is the No. is EVEN)", num);
      } else if (rem!=0)
      {
             printf("the number %d is not divisible by 2.(That is the No. is ODD)", num);
      }else//not working at the time of entering Alphabates or Special Char.
      {
            printf("---------WARNING---------\n");
            printf("Plese Enter the right Data.");
      }
      
}

void validStems(){
      int A = 8^8;
      int a=7;int b=a;
      char tara = '*';
      printf("%d\n", A);
      printf("%d\n", a);
      printf("%d\n", b);
      printf("%c\n", tara);//print only One tara
}

// ERROR----------
void dayshow(){
      char choice;
      char snow;

      printf("a. Sunday\n b. Monday\n c.Tuesday\n c.Wednesday\n d.Thrusday\n e.Friday\n f.Saturday\n");
      printf("Enter One Choice:\n");
      scanf("%c", &choice);
      
      printf("Is there is Snowing(y/n):");
      scanf("%c", &snow);

      // if (choice=='a' && snow=='y')
      // {
      //       printf("Today is Sunday & Snowing");
      // }else if (choice!='a' && snow=='y')
      // {
      //       printf("Today is Not Sunday But Snowing");
      // }else
      // {
      //       printf("Today is not Sunday & Not Snowing");
      // }
}

void checkNum(){
      int num;
      printf("Enter a Number:");
      scanf("%d", &num);

      if (num>9 && num<100)
      {
            printf("True");
      } else
      {
            printf("False");
      }
}

void avgOf3(){
      int num1, num2, num3;
      float avg;
      printf("Enter Three numbers:");
      scanf("%d %d %d", &num1, &num2, &num3);
      avg = (num1+num2+num3)/3.0;
      printf("The Average Of three numbers is : %.2f", avg);
}

void isDigit(){
      char character;
      printf("Enter a character:");
      scanf("%c", &character);
      if (character >= '0' && character <= '9')
      {
            printf("The character Is a Digit");
      }else
      {
            printf("The character Is not a Digit");
      }
      
      
}

// write prog. for print the smallest number

int main(){
      diviByTwo();
      validStems();
      dayshow();
      checkNum();
      avgOf3();
      isDigit();
      return 0;
}
