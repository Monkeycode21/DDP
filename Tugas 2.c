#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;


printf("Masukkan Angka Yang Di Inginkan (Lebih Dari 0): ");
scanf("%d",&d);


    for (a=d;a>0;a--)
    {
        for (b=0;b<=a;b++)
    {
        printf(" ");
    }
    for (c=a;c<=d;c++)
    {
          printf("*");
    }
     for (c=a;c<=d-1;c++)
    {
          printf("*");
    }
    printf("\n");
    }

     for (a=2;a<=d;a++)
    {
        for (b=0;b<=a;b++)
    {
        printf(" ");
    }
        for (c=d;c>=a;c--)
        {
            printf("*");
        }
        for (c=d-1;c>=a;c--)
        {
            printf("*");
        }
    printf("\n");
    }
getch();
}
