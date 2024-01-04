//title of program
//Program for reading and writing the student marks data to files
#include<stdio.h>
//function heading
#include<stdlib.h>
//header file
int main()
{
//variable declaration
int q1,q2,q3;
char fname[30];
FILE *ifp,*ofp;
//for opening the input and output files
ifp=fopen("input.txt","r");
ofp=fopen("Output.txt","w");
if(ifp==NULL||ofp==NULL){
//output statement 
printf("error while opening the file.\n");
exit (0);
}
while(!feof(ifp)){
//input statement 
fscanf(ifp,"%s %d %d %d",fname,&q1,&q2,&q3);
//output statements
printf("%s %d %d %d\n",fname,q1,q2,q3);
fprintf(ofp,"%s %d %d %d\n",fname,q1,q2,q3);
}
//output statements
printf("copied the file\n");
printf("\n");
fclose(ofp);
fclose(ifp);
return 0;
}
