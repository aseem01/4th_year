#include<bits/stdc++.h>
using namespace std;

struct node
{
    string name;
    int region;
    int marks;
};

bool cmp(node a, node b)
{
    return a.marks>b.marks;
}

vector<sadek>v[10005];

int main()
{
    int n,m;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        node s;
        cin>>s.name>>s.region>>s.marks;
        int d=s.region;
        v[d].push_back(s);
    }

    for(int i=1;i<=m;i++)
    sort(v[i].begin(),v[i].end(),cmp);

    for(int i=1;i<=m;i++)
    {
        if(v[i].size()>2 && v[i][1].marks==v[i][2].marks)
        cout<<"?"<<endl;
        else
        cout<<v[i][0].name<<" "<<v[i][1].name<<endl;
    }
    return 0;
}


