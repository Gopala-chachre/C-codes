#include<stdio.h>

int main(){
      /*chota contaner bade me fit ho skta h par bada chote me nhi to use forcefully karna padega
      jese ki int h vo 2bit jagh leta h or float 4bit to int float ho chalajaega 
      par float int me nhi jayega*/

      /*conersion 01. implicit (Jo ki copiler khud karta h)(interinal bolsakte h)
      02. explicet (Jo ham forcefully karate h)(external bol sakte h)*/


      int a = (int) 1.999999;// yaha pe jo (int) h vo forceful act karega or float ko int me banayega
      printf("%d", a);

      return 0;
}