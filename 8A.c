//program to demonstrate use of various string operations in c
#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20],str3[20];
    int res;
    printf("enter the string 1\n");
    scanf("%s",str1);
    printf("enter the string 2\n");
    scanf("%s",str2);
    printf("concatenation string is:%s\n",strcat(str1,str2));
    res=strcmp(str1,str2);
    printf("compare string is:%d\n",res);
    strcpy(str3,str1);
    printf("The first string is:%s\n",str1);
    printf("The third string is:%s\n",str3);
    printf("The third string upper case is:%s\n",strupr(str3));
    printf("The third string lower case is:%s",strlwr(str3));
}
