/*вывести количество делителей числа x, включая 1*/
#include <stdio.h>
int main()
{
   int x;
   int y = 0;
   scanf("%d",&x);
   for(int i=1;i<=x;i++){
       if (x%i==0){
           y++;
          
           
         
       }
       
   }
    printf("%d",y);
    return 0;
   
   
}



