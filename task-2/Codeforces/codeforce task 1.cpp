int main()

{
   float m,n,a;
   
   cin>>m>>n;
   
   cin>>a;
   
   float b=m/a;
   
   if((b%10)>5)
   {
   b=b/10;
   b++;
   }
   
   float c=n/a;
   
    if((c%10)>5)
   {
   c=c/10;
   c++;
   }
   
   cout<<b+c;
   
   return 0;
   }
   
   
   