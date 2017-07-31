#include "bits/stdc++.h"
using namespace std;

struct node {
        int a, b, c;
        node(int a, int b, int c) : a(a), b(b), c(c) {}
};



int main()
{
        vector< node > v;
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
                int x, y, z;
                scanf("%d %d %d", &x, &y, &z);
                v.push_back(node(x, y, z));
        }
        sort(v.begin(), v.end(), [](node astro, node lion) {
                if(astro.a == lion.a) return astro.c >lion.c;
                else  return astro.a <lion.a;
        } );
        cout<<"After sorting"<<endl;
        for(int i=0;i<v.size();i++) {
                cout << v[i].a << " " << v[i].b << " " << v[i].c << endl;
        }

        return 0;
}
