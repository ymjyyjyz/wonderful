#include <stdio.h>
int sum(int y,int m,int d)
{
unsigned char x[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int i,s=0;
for(i=1;i<y;i++)
if(i%4==0 && i%100!=0 || i%400==0)
s+=366;
else
s+=365;
if(y%4==0 && y%100!=0 || y%400==0)
x[2]=29;
for(i=1;i<m;i++)
s+=x[i];
s+=d;
return s;
}
int main()
{
unsigned char y1,m1,d1,y2,m2,d2;
int s1,s2, P, E,I ;
printf("请输入您的出生日期年 月 日：");
scanf("%d %d %d",&y1,&m1,&d1);
printf( "请输入您要测试的日期年 月 日：");
scanf("%d %d %d",&y2,&m2,&d2);
s1=sum(y1,m1,d1);
s2=sum(y2,m2,d2);
if(s2>s1)
 P =(s2-s1)%28;
   E = (s2-s1)%33;
   I = (s2-s1)%23;
	printf("今天您的体力处于周期的第%d天\n",P);
	printf("今天您的情绪处于周期的第%d天\n",E);
	printf("今天您的智力处于周期的第%d天\n",I);
	return 0 ;
	
}
	