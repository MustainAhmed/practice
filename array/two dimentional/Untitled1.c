#include<stdio.h>
int main(){
char s1[100],s2[100], i, j;
printf("Enter the first string: ");
scanf("%s",s1);
printf("Enter the second string: ");
scanf("%s",s2);
for(i=0; s1[i]!='\0'; ++i); /*i contains lenght of string s1. */
for(j=0; s1[j]!='\0'; ++j, ++i){
s1[i]=s2[j];
}
s1[i]='\0';
printf("After concatenation : %s",s1);
return 0;
}
