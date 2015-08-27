#include <stdio.h>
#define BIT0  0x0001
#define BIT1  0x0002
#define BIT2  0x0004
#define BIT3  0x0008
#define BIT4  0x0010
#define BIT5  0x0020
#define BIT6  0x0040
#define BIT7  0x0080
#define BIT8  0x0100
#define BIT9  0x0200
#define BIT10 0x0400
#define BIT11 0x0800
#define BIT12 0x1000
#define BIT13 0x2000
#define BIT14 0x4000
#define BIT15 0x8000
int main()
{
    int P1IN = BIT3;
    int P1DIR = BIT0|BIT6;        //5.Перевод линий, на которых находятся LED1и LED2, на выход
    int P1REN = BIT3;             //6.Включение подтягиваюющего резистора на линии кнопки S2
    int P1OUT = BIT3;             //7.Подключение подтягивающего резистора к плюсу питан
    printf("%d\n",P1DIR);
    printf("%d\n",P1OUT);
    P1OUT |= BIT6;
    printf("%d\n",P1OUT);
    P1OUT |= BIT0;
    printf("%d\n",P1OUT);
    P1OUT &=~BIT0;
    printf("%d\n",P1OUT);
    if(P1IN&BIT3)
        printf("PUSH BUTTON\n");
    return 0;
}