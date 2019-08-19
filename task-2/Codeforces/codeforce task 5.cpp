int main()
{  
  int a[100],n,i,c=0,k=0;
  
  for(i=0;i<n;i++)
    
	cin>>a[i];
	
	for(i=0;i<n;i++)
	
	 if(a[i]==0)
	 
	   { c++;
	   k=0;
		if(c==7) cout<"yes";
		
		}
		
		else 
		{
		c=0;
		k++;
		if(k==7)cout<<"yes";
		}
		if(c!=7&&k!=7)
		cout<<"no";
		
		return 0;
		
		}
		
     