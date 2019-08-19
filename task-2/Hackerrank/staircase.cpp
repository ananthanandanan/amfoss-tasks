int main()

{
	
	int i,s,j,n;
	
	cin>>n;
	
	
	for(i=1;i<n;i++)
		
		{
			for(s=1;s<=n-i;s++)
				
			cout<<" ";
			
			for(j=1;j<=i;j++)
		cout<<"#"<<endl;
	
		}
		return 0;
}