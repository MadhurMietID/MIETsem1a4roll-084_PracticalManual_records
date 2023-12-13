#include<stdio.h>
void main()
{
    struct student
    {
      int m1,m2,m3;
      int tot;
      float avg;
    };
struct student s1, s2, s3;
int i;
printf("enter the student marks  ");
scanf("%d%d%d",&s1.m1,&s2.m2,&s3.m3);
s1.tot=s1.m1+s2.m2+s3.m3;
s1.avg=(float)s1.tot/3.0;
printf("student marklist\n");
printf("subject1:%d\n",s1.m1);
printf("subject2:%d\n",s2.m2);
printf("subject3:%d\n",s3.m3);

printf("total:%d\n",s1.tot);
printf("average:%f",s1.avg);

}
