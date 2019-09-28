#include<iostream>


long Hcf ( long  a,long b )
{

while(a!=0)
{
long int c = a;

a = b % a;

b = c;

}

return b;


}




long int Lcm (long  a ,long  b)
{

    return a *(b/(Hcf(a,b)));

}



int main()
{

int test;

std::cin>>test;

while(test--)
{

int N;
std::cin>>N;

long answer = 1;

for(int i = 2;i<= N ;i++)

answer = Lcm(answer,i);

std::cout<<answer<<std::endl;



}


return 0;


}