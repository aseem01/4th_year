#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,b,t;
    while(cin>>n>>k>>a>>b)
    {
        int temp=n;
        if(a==0 || b==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        /*if(k+1<abs(a-b))
        {
            cout<<"NO"<<endl;
            continue;
        }*/
        string ss="";
        if(a>b)
        {
            int keep=min(k,abs(a-b));
            if(keep!=1) t=keep-1;
            else t=keep;
            //cout<<"keep = "<<keep<<endl;
            //cout<<"t = "<<t<<endl;
            int i,j;
            int cnt=0;
            while(n)
            {
                i=0;
                j=0;
                if(a)
                {
                    for(i=0; i<keep && a; i++)
                    {
                        ss+='G';
                        n--;
                        a--;
                    }
                }
                if(b)
                {

                    for( j=0; j<t && b; j++)
                    {
                        ss+='B';
                        n--;
                        b--;
                    }
                }
                //cout<<"ss = "<<ss<<endl;
                //cout<<"n = "<<n<<endl;
                //cnt++;
                //if(cnt==5) break;
            }
        }
        else
        {
            while(n)
            {
                int keep=min(k,abs(a-b));
                if(keep!=1) t=keep-1;
                else t=keep;
                if(b)
                {
                for(int i=0; i<keep && b; i++)
                {
                    ss+='B';
                    n--;
                    b--;
                }
                }
                if(a)
                {
                for(int i=0; i<t && a; i++)
                {
                    ss+='G';
                    n--;
                    a--;
                }
                }
            }
        }
        if(ss.size()==temp) cout<<ss<<endl;
        else cout<<"NO"<<endl;
    }
}

