/*вывести четные числа от a до b*/
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d",&a,&b);
    if(a%2==1)a++;
    for (int i = a; i<= b; i+=2)
        printf("%d ",i);
    return 0;
}
