/*вывести степеь двойки*/
#include <stdio.h>

int main()
{
    int a=2;

    int b=1;
    scanf("%d",&b);
    int c=1;



    for(int i=0;i<b;i++){
  
        c=c*a;
        
    }
    printf("%d",c);
}