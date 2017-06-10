#include<iostream>
#include<set>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;

struct face
{
    int x,y;
} a[6];

int cmp(face a,face b)
{
    if(a.x==b.x)
        return a.y<b.y;
    return a.x<b.x;
}

int main()
{
    while(cin>>a[0].x>>a[0].y>>a[1].x>>a[1].y>>a[2].x>>a[2].y>>a[3].x>>a[3].y>>a[4].x>>a[4].y>>a[5].x>>a[5].y)
    {
        set<int> temp;
        for(int i=0; i<6; i++)
        {
            if(a[i].x>a[i].y)
            swap(a[i].x,a[i].y);
            temp.insert(a[i].x);
            temp.insert(a[i].y);
        }
        if(temp.size()>3)
        {
            cout<<"IMPOSSIBLE"<<endl;
            continue;
        }
        else
        {
            sort(a,a+6,cmp);
            if(memcmp(a,a+1,sizeof(face))||memcmp(a+2,a+3,sizeof(face))||memcmp(a+4,a+5,sizeof(face)))
            {
                cout<<"IMPOSSIBLE"<<endl;
                continue;
            }
            if(a[0].x!=a[2].x||a[0].y!=a[4].x||a[2].y!=a[4].y)
            {
                cout<<"IMPOSSIBLE"<<endl;
                continue;
            }
            cout<<"POSSIBLE"<<endl;
        }
    }
    return 0;
}
