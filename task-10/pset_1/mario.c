#include<stdio.h>
#include<cs50.h>


int main(void)

{

   int n = get_int("height\n");

    if(n>=1 && n <=23)

    for(int i=1;i<=n;i++)

    {
        for(int s=n-i;s>=0;s--)printf(" ");

        for(int h=0;h<=i;h++)printf("#");

        printf("  ");

        for(int j=0;j<=i;j++)printf("#");

        printf("\n");



    }



}
