int main()
{

int a[5][5],i,j,n lsum=0,rsum=0;

cin>>n;

for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	cin>>a[i][j];

for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{
	if(i==j)lsum+=a[i];
	if(i+j==n-1)rsum+=a[i];
	}
	
	int diff=0;
	
	diff=lsum-rsum;
	if(diff<0)
		diff=-1*diff;
	cout<<diff;
	
	return 0;
}