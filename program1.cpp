#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<long> arr;
    long n,t,temp;
    long a,b,val=0;
    cin>>n;
    cin>>t;
    for(long i=0;i<n;++i)
        arr.push_back(0);
    long max=0;
    while(t--)
    {
        cin>>a;
        cin>>b;
        a--;
        b--;
        cin>>val;
        for(long i=a;i<=b;++i)
        {    
            arr[i]+=val;
            if(max<arr[i])
                max=arr[i];
        }
    }
    cout<<max;
    return 0;
}