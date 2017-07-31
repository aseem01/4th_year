#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define st struct
#define show(a) for(i=0;i<a.size();i++) cout<<a[i]<<" ";
#define s(n) scanf("%d",&n);
#define p printf
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define pb push_back
#define fast_io() cin.sync_with_stdio(false);cout.sync_with_stdio(false);
#define long_zero 0ll
#define long_one 1ll

using namespace std;
#define MAXX 1000002
int freq[MAXX+1];

int main() {
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;

    while(t--){
        int n,x,maxi=0;
        cin>>n;
        memset(freq,0,sizeof(freq));
        for(int i=0;i<n;i++){
            cin>>x;
            freq[x]++;
            maxi = max(maxi,x);
        }
        maxi++;
        int mgcd=0;
        for(int i=1;i<=maxi;i++){
            ll counter=0;
            for(int j=i;j<=maxi;j+=i){
                    cout<<"i = "<<i<<" j = "<<j<<endl;
                if(j<=MAXX)
                    counter+=freq[j];
                if(counter>=2){
                    mgcd=max(mgcd,i);
            cout<<"mgcd = "<<mgcd<<endl;
                    break;
                }
            }
        }
        cout<<mgcd<<endl;
    }

	return 0;
}
