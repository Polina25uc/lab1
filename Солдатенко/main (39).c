/******************************************************************************
Солдатенко. Задание 4.9 Распечатать все совершенные числа в диапазоне от 1 до 1000.
Напечатайте все делители для каждого совершенного числа.

Щуровская Полина,30.03.2023

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x = 1;
    int y = 1000;
    int id;    
    
    for(int i=x; i<=y; i++){
        id = 0;    

        for(int j=1; j<i; j++){
            if(i % j == 0){
                id += j;
            }
        }
 
        
        if(id == i){
            printf("%d ", i);
        }
    }
    
    return 0;
}