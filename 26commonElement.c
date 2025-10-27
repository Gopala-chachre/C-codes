#include<stdio.h> 

void main(){

    int i,j, flag = 0; 
    int lt1[] = {10,11,12,13,14} ; 
    int lt2[] = {6,7,8,9,10} ; 

    for(i=0; i<5; i++){ 
        for (j=0; j<5; j++){ 
            if (lt1[i] == lt2[j]){ 
                flag = 1; 
          } 
        } 
    } 

    if (flag == 0){ 
        printf("Have NO common element."); 
    } else{ 
        printf("Have An common element."); 
    } 
  
}