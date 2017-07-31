#include <bits/stdc++.h>
using namespace std;

const int maxL = 1001;
const int maxN = 100001;

int arr[maxL], LPS[maxL][maxL];
int mark[maxN];
vector<int> G[maxN];

void dfs(int s, int cc)
{
    mark[s] = cc;
    for(vector<int>::iterator it= G[s].begin(); it!=G[s].end(); ++it)
        if(!mark[*it])
            dfs(*it, cc);
}


int lps(int arr[], int L)
{
   int i, j, len;
   for(i=0; i<L; i++)
       LPS[i][i] = 1;

   for(len=2; len<=L; len++)
   {
       for(i=0; i<L+1-len; i++)
       {
           j = i + len - 1;
           if(mark[arr[i]] == mark[arr[j]])
           {
               if(len == 2)
                   LPS[i][j] = 2;
               else
                   LPS[i][j] = LPS[i+1][j-1] + 2;
           }
           else
               LPS[i][j] = max(LPS[i][j-1], LPS[i+1][j]);
       }
   }
   return LPS[0][L-1];
}

int main()
{
    int N, K, L;
    scanf("%d %d %d", &N, &K, &L);
    for(int i=0; i<K; i++)
    {
       int x, y;
       scanf("%d %d", &x, &y);
       G[x].push_back(y);
       G[y].push_back(x);
    }

    int cc = 1;
    for(int i=1; i<=N; ++i)
        if(!mark[i])
        {
            dfs(i, cc);
            cc++;
        }
    for(int i=0; i<L; i++)
    {
        scanf("%d", &arr[i]);
        cout<<"arr[i] = "<<mark[arr[i]]<<endl;
    }
    printf("%d\n", lps(arr, L));
    return 0;
}
