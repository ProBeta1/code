int Solution::paint(int k, int T, vector<int> &L) {
    long long beg ,last,mid,i,j;
    long long n=L.size();
    long long c=0,t=0,mx=0,ct,p;
    for(i=0;i<n;i++)
    {
        c+=L[i];
        if(L[i]>mx)
            mx=L[i];
    }
    
    beg=mx,last=c;
    while(beg<last)
    {
        mid=(beg+last)/2;
        p=0,ct=1;
        for(i=0;i<n;i++)
            {
                p+=L[i];
                if(p>mid)
                {
                    p=L[i];
                    ct++;
                }
            }
        if(ct<=k)
            last=mid;
        else
            beg=mid+1;
    }
    return (beg*T)%10000003;
}
