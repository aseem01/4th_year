#include <bits/stdc++.h>
using namespace std;
#define LOOP(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define LOOPE(i,l,u) for(int (i)=(int)(l);(i)<=(int)(u);++(i))
#define LOOPL(i,l,u) for(int (i)=(int)(l);(i)<(int)(u);++(i))
#define LOOPR(i,l,u) for(int (i)=(int)(l);(i)>=(int)(u);--(i))


int main()
{
    long long T,N;
    cin>>T;
    while(T--){
        cin>>N;
        vector<long long> A(N),m(N,0);
        LOOP(i,N) cin>>A[i];
        long long answer=0;
        LOOPR(i,N-2,0){
            LOOPL(j,i+1,N){
                if(__gcd(A[i],A[j])>1){
                    m[i]=max(m[i],1+m[j]);
                }
            }
            if(m[i]>answer) answer=m[i];
        }
        cout<<answer+1<<endl;
    }
    return 0;
}
