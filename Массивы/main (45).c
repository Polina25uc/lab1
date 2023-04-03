/******************************************************************************

      Числа следует выводить через пробел. Все числа целые, по модулю не больше 231-1. Количество элементов массива не превышает 10000.
Дан массив, состоящий из целых чисел. Напишите программу, которая подсчитает количество элементов массива, больших предыдущего (элемента с предыдущим номером).

Входные данные
Сначала задано число N
 — количество элементов в массиве (1≤N≤10000
). Далее через пробел записаны N
 чисел — элементы массива. Массив состоит из целых чисел.

Выходные данные
Необходимо вывести единственное число - количество элементов массива, больших предыдущего.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n[10000];
    int x;//кол-во чисел
    int y;//для ввода
    int c = 0;//кол-во положительных
    scanf("%d",&x);
    for(int i = 0;i<x;i++){
        scanf("%d",&y);
        n[i]=y;
    }
    for( int i = 1;i<x;i++){
       if (n[i]>n[i-1]){
           c++;
       }
    }
    
    printf("%d",c);
}
   
