#include<stdio.h>
#include<conio.h>
void main()
{
int x[10],y[10][10],z=0,m,i,j,n,temp=0;
scanf("%d %d",&m,&n);
for(i=0;i<n*m;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<m*n;i++)
{
for(j=i+1;j<n*m;j++)
{
if(x[i]>x[j])
{
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
y[i][j]=x[k];
k++;
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf(" %d",y[i][j]);
}
printf("\n");
}
getch();
}
