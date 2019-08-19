int main()
 
 { int a[2],b[2],A[1];
 
 for(int i=0;i<2;i++)
	 
 cin>>a[i];
 
 for(int i=0;i<2;i++)
	 
 cin>>b[i];
 A[0]=0,A[1]=0;
 
 for(int j=0;j<2;j++)
	 
 if(a[i]<b[i]) A[0]++;
 
 else if(a[i]>b[i]) A[1]++;
 
 for(int k=0;k<1;k++)
	 cout<<a[k]<<" ";
 
 return 0;
 
 }