/*Программа получает на вход последовательность целых неотрицательных чисел, каждое число записано в отдельной строке. Последовательность завершается числом 0, при считывании которого программа должна закончить свою работу и вынести количество членов последовательности (не считая завершающего числа 0).
Числа, следующие за числом 0, считывать не нужно.

ВХОДНЫЕ ДАННЫЕ
Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательности не входит).

ВЫХОДНЫЕ ДАННЫЕ
Выведите ответ на задачу.*/
#include <stdio.h>

int main()
{
   int n;
   int x=0;
   scanf("%d",&n);
   while(n!=0){
    x++;
    scanf("%d",&n);
       }
       printf("%d",x);
       return 0;
   

}



