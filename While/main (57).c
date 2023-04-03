/*Определить,сколько элементов этой последовательности больше предыдущего элемента*/
#include <stdio.h>

int main()
{
    int y,n;
    int x=0;
   scanf("%d",&n);
   while(n!=0){
      y=n;
       
        scanf("%d",&n);
        if(n>y){
            x++;
        }
    }
    printf("%d",x);
    return 0;
}


