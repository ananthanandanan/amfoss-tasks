int main()
{
  int a[100],i,k,n,c=0;
  
  cin>>n;
  
  for(i=0;i<n;i++)
  cin>>a[i];
  
  cin>>k;
  
  for(i=0;i<n;i++)
  {
    if(a[i]>=a[k])
	 c++;
	 }
	 
	 cout<<c;
	 
	 return 0;
	 
	 }
  
  