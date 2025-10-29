#include<stdio.h>  
#include <string.h>  

void main(){  

    char st[] = "My name is Gopala";  
    int length = strlen(st);  
    int x = 0;  
    char temp; 

    for(int i = length - 1; i != -1; i--){   
        temp = st[i];  
        st[i] = st[x];  
        st[x] = temp;  
        x++;  
        if(x>=i) break;  
    }  
   printf("%s", st);  

}  