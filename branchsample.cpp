/* branchsample.cpp */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <iostream>
  



int main(int argc, char * argv[]){
   char buff[1000]; 
   int ii = 0;
   strcpy_s(buff, argv[1]); 
   if (strlen(buff) > 1000) {
       ii = 1 + strlen(buff);
       printf("first exploit spot buff is %u\n", ii);
   }
   char buffse[20];
   strcpy_s(buffse, argv[2]);
   if (strlen(buffse) < 19) {
       ii += strlen(buffse);
       printf("spot buffse= %u\n", ii);
   }
   char str1[10];
   strcpy_s (str1, "xxxxxxxxx");
   strcpy_s(str1, buffse);
   char str3[100];
   strcpy_s(str3, buff);
   printf(str1);
   return 0;
}

