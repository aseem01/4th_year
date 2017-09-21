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
const int inf = 100;

int min_distance[10][10];
const int dx[4] = {+1, +1, -1, -1};
const int dy[4] = {-1, +1, -1, +1};

int main()
{
    int x, y;
    cin >> x >> y;

    for (int i = 1; i <= 8; i += 1)
    {
        for (int j = 1; j <= 8; j += 1)
        {
            min_distance[i][j] = inf;
        }
    }

    queue<pair<int, int>> bfs_queue;
    bfs_queue.push({x, y});
    min_distance[x][y] = 0;

    while (bfs_queue.size())
    {
        auto current = bfs_queue.front();
        bfs_queue.pop();

        int x = current.first;
        int y = current.second;

        // every cell that's reacheable from {x, y} will have a cost equal to
        // min_distance[x][y] (the distance to reach this cell) + 1
        // since the bishop is not limited to
        cout<<"x = "<<x<<" y = "<<y<<" min_distance = "<<min_distance[x][y]<<endl;
        int c = min_distance[x][y] + 1;
        for (int d = 0; d < 4; d += 1)
        {
            int nx = x, ny = y;

            // if we move the bishop in one direction, eventually it will
            // leave the table (max 8 steps in a direction)
            while (1)
            {
                // move the bishop in the direction d one time.
                nx += dx[d];
                ny += dy[d];


                // check if our cell is outside the board
                if (!(1 <= nx and nx <= 8 and 1 <= ny and ny <= 8))
                {
                    break;
                }
                 cout<<"nx = "<<nx<<" ny = "<<ny<<" d = "<<d<<endl;

                // check if we encountered a cell for the first time.
                // if so, update the cell's min_distance and put it in the
                // bfs_queue so we'll extend from it, eventually.
                if (min_distance[nx][ny] == inf)
                {
                    min_distance[nx][ny] = c;
                    bfs_queue.push({nx, ny});
                }
            }
        }
    }

    int fx, fy;
    cin >> fx >> fy;

    rep(i,1,9)
    {
        rep(j,1,9) cout<<min_distance[i][j]<<"   ";
        cout<<endl;
    }
    // read the final destination.
    // if min_distance[fx][fy] is inf, it means that it's not reacheable from
    // the start position, so we need to print -1
    int fcost = min_distance[fx][fy];
    if (fcost == inf)
    {
        fcost = -1;
    }
    cout << fcost << '\n';
}


