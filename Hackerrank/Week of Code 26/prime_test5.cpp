#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define max_value 1000001
#define endl "\n"
vector<int > prime ;
bool is_prime[1000002];
void seive(){
    for(int i = 2 ; i<= max_value ; i++)
        if( not is_prime[i]){
                prime.push_back(i);
                for(int  j = i * 2 ; j<= max_value ; j+= i)
                    is_prime[j] = true ;
        }
}
vector<ll > seg;
bool flag[1000005];
void segmented_seive(ll L , ll M){
    seg.clear() ;
    if( M < max_value){
        for(int i = 0 ; i < prime.size() ; i++)
            if( prime[i] > M) break;
            else if(prime[i] >= L) seg.push_back(prime[i]);

        return ;
    }
    for(int i = 0 ; i< M - L + 1 ; i++) flag[i] = true ;

    for(int i = 0 ; i< prime.size() ; i++){
        if(prime[i] > M ) break;
        ll ind =  (L / prime[i]) * prime[i] ;
        while(ind < L) ind += prime[i] ;

        for(ll j = ind ; j<= M ; j+= prime[i])
            flag[j - L] = false;
    }
    for(ll i = 0 ; i < M - L  + 1; i++)
        if(flag[i])
            seg.push_back( i + L);
}
ll read() {
	bool minus = false;
	ll result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}
int main(){

    //cin.sync_with_stdio(false);
    seive();
    ll t = read() ;
    while(t--){
        ll N  , M ;
        N = read() ; M = read() ;
        segmented_seive(N , M) ;
        for(int i = 0 ; i< seg.size() ; i++)
            printf("%lld\n" , seg[i]);
        printf("\n");
    }
}

