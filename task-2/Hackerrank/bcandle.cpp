int main()
{
	
	long double a[1000000],n;
	
	cin>>n;
	
	for(int i=1;i<=n;i++)
		
	cin>>a[i];
	
	long double lar=0;
	
	for(i=1;i<=n;i++)
		
	if(a[i]>lar)lar=a[i];
	int c=0;
	
	
	for(i=1;i<=n;i++)
		if(lar=a[i])c++;
	
	cout<<c;
	return 0;
}
		