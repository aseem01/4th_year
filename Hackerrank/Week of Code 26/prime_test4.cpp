#include <bits/stdc++.h>
#define MAX_NO 50000
#define MAX_INT 100000
typedef long long int LL;
using namespace std;

int stprimes[MAX_NO];
int no;

void startprimes() {
	bool primes[MAX_NO+10];
	memset(primes, 1, sizeof primes);
	primes[0] = false;
	primes[1] = false;
	primes[2] = true;
	for(int i = 2; i <= MAX_NO; i++) {
		if(primes[i]) {
			for(int j = i+i; j <= MAX_NO; j+=i)
				primes[j] = false;
		}
	}
	no = 0;
	for(int i = 0; i <= MAX_NO; i++) {
		if(primes[i]) {
			stprimes[no] = i;
			no++;
		}
	}
}
int main() {
	startprimes();
	LL m,n;
	while(cin>>m>>n) {
            vector<int>v;
		bool primes[MAX_INT+10];
		memset(primes, 1, sizeof(primes));
		if(m == 0) {
			primes[0] = false;
			if(n-m > 1) primes[1] = false;
		}
		if(m == 1) primes[0] = false;
		for(int i = 0; i < no; i++) {
			int prime = stprimes[i];
			if(prime*2 > n)
				break;
			int j = (m/prime);
			if(j < 2) j = 2;
			while(true) {
				int prod = prime*j;
				if(prod > n) break;
				if(prod >= m)
					primes[prod-m] = false;
				j++;
			}
		}
		for(int i = m; i <= n; i++) {
			if(primes[i-m])
				//cout << i << endl;
				v.push_back(i);
		}

		int cnt=0;
        for(int i=1;i<v.size();i++)
        {
            if((abs(v[i]-v[i-1]))==2) cnt++;
        }
        cout<<cnt<<endl;

		//cout << endl;
	}
}
