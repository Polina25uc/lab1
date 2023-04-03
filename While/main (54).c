/*Посчитать количество 0*/
#include<stdio.h>
int main()
{
   int n;
   int x=0;
   scanf("%d",&n);
   while(n!=0){
       if (n%10==0){
           x++;
       }
       
       n/=10;
       
   }
   printf("%d",x);
   return 0;
}



