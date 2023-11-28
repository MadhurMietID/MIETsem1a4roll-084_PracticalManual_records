//title of program
//Program to read and print elements in two dimensional arrays
#include<stdio.h>
//function heading
void main()
{
//variable(array) declaration
int a[2][2];
int i,j;
//condition applied
for(i=0;i<2;i++){
for(j=0;j<2;j++){
//output statement 
printf("enter the elements:a[%d][%d]",i,j);
//input statement 
scanf("%d",&a[i][j]);
}
}
//output statement 
printf("to print the array values\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
//output statement 
printf("%d\t",a[i][j]);
}
//output statement 
printf("\n");
}
}
