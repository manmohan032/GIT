int t;
    cin>>t;
    while(t--)
    {
        int i,j;
        long long int k;
        cin>>k;
        cin>>i>>j;
        unsigned long long int n=i*10+j;
        int d=(i+j)%10;

        for(i=1;i<=k-2;i++)
        {
            n=n*10+d;
            d=(n*2)%10;
        }
        //cout<<n<<endl;
        if(n%3==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }