#include<bits/stdc++.h>
using namespace std;
#define uniq(x)  x.erase(unique(x.begin(),x.end()), x.end()) //Unique value find from vector
#define upper(arr,n,fixed) upper_bound(arr,arr+n,fixed)-arr  //Upper value search;
#define lower(arr,n,fixed) upper_bound(arr,arr+n,fixed)-arr  //Lower value search;
#define max3(a,b,c) max(max(a,b),c)//maximum value find three value;
#define min3(a,b,c) min(min(a,b),c)//minimum value find three value;
#define rep(i,intial,n) for(int i=intial; i<(n) ; i++)
#define REP(i,intial,n) for(int i=intial; i<=(n) ; i++)
#define PI acos(-1.0)//PI Calculation
#define LL long long
#define MP make_pair
#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define MX 1000005
#define MOD 1000000007
template<typename T> T POW(T b,T p)          //Pow calculation
{
    T r=1;
    while(p)
    {
        if(p&1)r=(r*b);
        b=(b*b);
        p>>=1;
    }
    return r;
}

LL big_mod(LL n, LL p)
{
    if(p==0) return 1;
    if(!(p&1))
    {
        LL r = big_mod(n,p/2) % MOD;
        return ( (r%MOD) * (r%MOD) ) % MOD;
    }
    else return ( ( n%MOD) * (big_mod(n,p-1) %MOD)) % MOD;
}
long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

//||--------------------------->||Main_Code_Start_From_Here||<---------------------------------||




string largestPal(string input_str)
{
    string isPal = "";
    string largest = "";
    int j, k;
    for(int i = 0; i < input_str.length() - 1; ++i)
    {
        k = i + 1;
        j = i - 1;

        // starting a new interation
        // check to see if even pal
        if(j >= 0 && k < input_str.length())
        {
            if(input_str[i] == input_str[j])
                j--;
            else if(input_str[i] == input_str[j])
            {
                k++;
            }
        }
        while(j >= 0 && k < input_str.length())
        {
            if(input_str[j] != input_str[k])
                break;
            else
            {
                j--;
                k++;
            }
            isPal = input_str.substr(j + 1, k - j - 1);
            if(isPal.length() > largest.length())
            {
                largest = isPal;
            }
        }
    }
    return largest;


}
/*int Ispalindrome(string s)
{
    rep(i,0,s.size())
    {
        if(s[i]!=s[s.size()-1-i]) return 0;
    }
    return 1;
}*/

int main()
{
    //freopen("a.in", "r", stdin);
    //freopen("a.out", "w", stdout);
    int row,col,r1,r2,c1,c2;
    char ch[100010];
    string s;
    while(cin>>row>>col)
    {
        s="";
        rep(i,0,row)
        {
            rep(j,0,col)
            {
                cin>>ch[i];
                s+=ch[i];
            }
        }

       // cout<<largestPal(s)<<endl;
        string ss=largestPal(s);
         int p=0;
         int start=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==ss[p])
            {
                p++;
            }
            else p=0;
            if(p==ss.size())
            {
                start=i+1-ss.size();
                break;
            }
        }
   //cout<<"start = "<<start<<endl;
        if(start%col==0)
        {
            if(start==0) r1=0;
            else r1=start/col-1;
        }
        else r1=start/col;
        if(start%col==0)
        {
            if(start==0) c1=0;
            else
            c1=col-1;
        }
        else c1=start%col;

        start=start+ss.size();


         if(start%col==0) r2=start/col-1;
        else r2=start/col;
        if(start%col==0) c2=col-1;
        else c2=start%col;

   cout<<ss.size()<<endl;
   cout<<r1<<" "<<c1<<" "<<r2<<" "<<c2<<endl;


    }

}
