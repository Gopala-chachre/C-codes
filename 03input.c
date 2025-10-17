#include<stdio.h>
#include<string.h>

int main(){
      char name[20];
      int age;
      int class;
      int rollNo;
      int markEnglish;
      int markHindi;
      int markMaths;
      int markScience;

      //getting User name
      printf("Enter Student Name:");
      gets(name);
      //Getting Age
      printf("Enter Student age :");
      scanf("%d", &age);
      //Class of student
      printf("Class :");
      scanf("%d", &class);
      //Roll no. of student
      printf("Enter Roll No.:");
      scanf("%d", &rollNo);

      printf("============Enter marks outoff 100============\n");

      //Marks of english
      printf("Enter Student Marks in English:");
      scanf("%d", &markEnglish);
      //Marks of hindi
      printf("Enter Student Marks in Hindi:");
      scanf("%d", &markHindi);
      //Merks of Maths
      printf("Enter Student Marks in Maths:");
      scanf("%d", &markMaths);
      //Marks in science
      printf("Enter Student Marks in Science:");
      scanf("%d", &markScience);

      float totalMark = markEnglish+markHindi+markMaths+markScience;
      float percent = totalMark/4;

      //Partation
      printf("===============Student Details=============== \n");
      printf("Student Name:%s\n", name);
      printf("Student age : %d\n", age);
      printf("Class: %d\n", class);
      printf("Student rollno: %d\n", rollNo);
      printf("Student total Number out of 400: %d\n", totalMark);
      printf("Final persent: %f\n", percent);
      printf("\n");
      return 0;
}