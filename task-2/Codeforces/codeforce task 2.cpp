int main()
{
  char s;
  
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
  
  int len;
  
  cin>>s;
  
  for(len=1;len<='\0';len++);
  
  len-=2;
  
  cout<<s[0]<<len<<s[len-1]<<endl;
  
  }
  
  return 0;
  }