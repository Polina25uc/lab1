/******************************************************************************
Числа следует выводить через пробел. Все числа целые, по модулю не больше 231-1. Количество элементов массива не превышает 10000.
Дан массив, состоящий из целых чисел. Напишите программу, которая в данном массиве определит количество элементов, у которых два соседних и, при этом, оба соседних элемента меньше данного.

Входные данные
Сначала задано число N
 — количество элементов в массиве (1≤N≤100
). Далее через пробел записаны N
 чисел — элементы массива. Массив состоит из целых чисел.

Выходные данные
Необходимо вывести количество элементов массива, у которых два соседа и которые при этом строго больше обоих своих соседей.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n[100];
    int x;//кол-во чисел
    int y;//для ввода
    int c = 0;//кол-во положительных
    scanf("%d",&x);
    for(int i = 0;i<x;i++){
        scanf("%d",&y);
        n[i]=y;
    }
    for( int i = 1;i<x-1;i++){
       if (n[i]>n[i-1] && n[i+1]<n[i]){
           c++;
           
       }
       
    }
   printf("%d",c);
   return 0;
}      
    

   
