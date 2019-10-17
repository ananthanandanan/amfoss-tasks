int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        long curr=2,prev=0,g3=0,sum=0;
        while(curr<n){
            sum=sum+curr;
            g3=curr;
            curr=4*curr+prev;
            prev=g3;
            
            
        }
        cout<<sum<<endl;
        
     


    }
    return 0;
}
