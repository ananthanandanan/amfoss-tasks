int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long g=0;
        g=(n-1)/3;
        g=3*g*(g+1)/2;
        long f=0;
        f=(n-1)/5;
        f=5*f*(f+1)/2;
       long h=0;
       h=(n-1)/15;
       h=15*h*(h+1)/2;
        cout<<g+f-h<<endl;
    }
       
    
    return 0;
}