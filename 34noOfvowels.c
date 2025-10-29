#include<stdio.h>   
#include <string.h>  

void main(){  

    char vowels[] = {'a','e','i','o','u','A','E','I','O','U'};  
    int numbers[] = {'1','2','3','4','5','6','7','8','9','0'};  

    int vow = 0;   
    int num = 0;  
    int con = 0;  
    int sap = 0;  
    char st[100];  
    scanf("%[^\n]%*c", st);  
    int length = strlen(st);  

printf("Total number of character in the String is :%d\n", length);  

     for(int i = 0; i < length; i++){  
        for(int j = 0; j < 10; j++){  
            if(st[i] == vowels[j]) vow++;  
            if(st[i] == numbers[j]) num++;  
        }  
        if(st[i] == ' ') sap++;  
    } 

    con = length - (vow + sap + num); 

    printf("Total vowels: %d\n", vow);   
    printf("Total consonants: %d\n", con);  
    printf("Total White space: %d\n", sap);  
    printf("Total Digits: %d\n", num);  

}  