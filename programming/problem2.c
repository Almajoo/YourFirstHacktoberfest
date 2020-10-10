// "String Concatenation!"
/*
 John wanted to concatenate two strings in C as a part of his school assignment. But, he isn't being able to do so.
 
 He requires your help to write a program in C that takes two strings from the user, and then returns an output concatenating those two strings.
 
 Can you help him? The first person to write a program for his problem and create a PR for it would have his/her PR merged.
*/

// Write your program here!
// this program concatenates two string in c without the use of strcat
//solved by Almajoo

#include<stdio.h>
#define MAX 100
#define IMAX 100
void main()
{
char s1[MAX],s2[MAX],s3[IMAX];
int i=0,j=0; 
printf("Enter the String 1:");
gets(s1);
printf("Enter the String2: "); 
gets(s2);
while(s1[i] != '\0')
{
    s3[i]=s1[i];  // copying string_one in s3
    i++;
}
while(s2[j] != '\0')
{
    s3[i]=s2[j];  // copying string_two in s3
    i++;
    j++;
}
s3[i]='\0';   // adding end point
printf("Concatenated String = %s",s3);
}
