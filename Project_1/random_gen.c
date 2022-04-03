#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;
    srand(time(0));
    // number=rand()%100; --> Used to generate random number
    // number=rand()%100 + 1; --> Used to generate random number between 0 to 100

    printf("The number is %d\n",number);
    return 0;
}