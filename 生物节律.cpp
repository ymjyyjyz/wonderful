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
printf("���������ĳ��������� �� �գ�");
scanf("%d %d %d",&y1,&m1,&d1);
printf( "��������Ҫ���Ե������� �� �գ�");
scanf("%d %d %d",&y2,&m2,&d2);
s1=sum(y1,m1,d1);
s2=sum(y2,m2,d2);
if(s2>s1)
 P =(s2-s1)%28;
   E = (s2-s1)%33;
   I = (s2-s1)%23;
	printf("�������������������ڵĵ�%d��\n",P);
	printf("�������������������ڵĵ�%d��\n",E);
	printf("�������������������ڵĵ�%d��\n",I);
	return 0 ;
	
}
	