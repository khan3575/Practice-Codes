ll n,m,q;
		cin>>n>>m>>q;
			ll a,b;
			cin>>a>>b;
			ll dloc;
			cin>>dloc;
			int mn= min(a,b);
			int mx= max(a,b);
			if(dloc<mn)
			{
				cout<<mn-1<<endl;
			}
			else if(dloc>mx)
			{
				cout<<n-mx<<endl;
			}
			else{
				int mid= (a+b)/2;
				cout<<min(mid-mn, mx-mid)<<endl;
			}