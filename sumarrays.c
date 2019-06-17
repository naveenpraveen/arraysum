#include<stdio.h>
int main()
{
 int m,N,K,sum=0,a[10],j;
 scanf("%d",&N);
 scanf("%d",&K);
 for(m=1;m<=N;m++)
 {
 	a[m]=m;
 }
 for(j=1;j<=K;j++)
 {
 	sum=sum+a[j];
 }
 printf("%d",sum);
return 0;
}
