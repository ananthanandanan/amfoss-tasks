#include<stdio.h>
#include<cs50.h>


int main(void)

{
    long num  = get_long("number :");

    int d,c=0,osum=0,esum=0,sum=0,k=0,l=0;

    int e[10],o[10],arr[16];

    int i=0;

    while(num!=0)// count digits,insert to new array
    {
        arr[i] = num%10;
        i++;
        c++;

        num/=10;

    }

    for(i=0;i<c;i++)// insert even position digit and odd positon digit to new array
    {
        if(i%2==0)
        {
        e[l++]=arr[i];
        }

      else
        {
        o[k++]=arr[i];
        }



    }



    for( i=0;i<c/2;i++)//take sum
    {
    o[i]=o[i]*2;


    }

    for( i=0;i<c/2;i++)//again take by digit and sum

    {
        int val = o[i];
        while(val!=0)
        {
            d = val%10;
            val = val/10;

            osum=osum+d;
        }
    }
     for( i=0;i<8;i++)
     {
         esum+=e[i];
     }

     sum = osum+esum;

     if(sum%10==0 && c==15)//checking
     printf("AMEX\n");

     else if(sum%10==0 && c==16)
     printf("Mastercard\n");

     else if(sum%10==0 &&c==13)
     printf("Visa\n");

     else
     printf("invalid\n");
     printf("digit %iand %i and %i and %i",c,sum,esum,osum);
     for(i=0;i<8;i++)
     {
     printf("a[]=%d",o[i]);
     printf("b[]=%d",e[i]);
     }






}