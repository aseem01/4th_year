#include<bits/stdc++.h>
#define rep(i,intial,n) for(int i=intial; i<(n) ; i++)
using namespace std;
int main()
{
    int n;
    string s[5];
    for(int i=0; i<4; i++) cin>>s[i];
    int xcnt=0;
    int ocnt=0;
    int flag=0;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(s[i][j]=='x') xcnt++;
            if(s[i][j]=='o') ocnt++;
        }
    }

    //
    cout<<"xcnt = "<<xcnt<<endl;
    cout<<"ocnt = "<<ocnt<<endl;
    if(xcnt>=ocnt)
    {
        //left up checking;
        int ans=0;
        int space=0;
        rep(i,0,1)
        {
            rep(j,0,3)
            {
                if(s[i][j]=='x') ans++;
                if(s[i][j]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES1"<<endl; return 0;
        }


        //left up checking
        ans=0;
        space=0;
        rep(i,0,1)
        {
            rep(j,1,4)
            {
                if(s[i][j]=='x') ans++;
                if(s[i][j]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES2"<<endl; return 0;
        }



        //up row right checking;

        ans=0;
        space=0;
        rep(i,0,1)
        {
            for(int j=3;j>=1;j--)
            {
                if(s[i][j]=='x') ans++;
                if(s[i][j]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES3"<<endl; return 0;
        }

        // up row right checking



        ans=0;
        space=0;
        rep(i,0,1)
        {
            for(int j=2;j>=0;j--)
            {
                if(s[i][j]=='x') ans++;
                if(s[i][j]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES4"<<endl; return 0;
        }

        //down left row checking


        ans=0;
        space=0;
        rep(i,3,4)
        {
            for(int j=0;j<3;j++)
            {
                if(s[i][j]=='x') ans++;
                if(s[i][j]=='.') space++;

            }
        }
        if(ans+space==3)
        {
            cout<<"YES5"<<endl; return 0;
        }

        //down left row checking;
        ans=0;
        space=0;
        rep(i,3,4)
        {
            for(int j=1;j<4;j++)
            {
                if(s[i][j]=='x') ans++;
                if(s[i][j]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES6"<<endl; return 0;
        }



        // left up coloum checking

        ans=0;
        space=0;
        rep(i,0,1)
        {
            for(int j=0;j<3;j++)
            {
                if(s[j][i]=='x') ans++;
                if(s[j][i]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES7"<<endl; return 0;
        }

        //left up coloum checking ;

        ans=0;
        space=0;
        rep(i,1,2)
        {
            for(int j=1;j<4;j++)
            {
                if(s[j][i]=='x') ans++;
                 if(s[j][i]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES8"<<endl; return 0;
        }


        //down left coloum checking

         ans=0;
         space=0;
        rep(i,0,1)
        {
            for(int j=3;j>=1;j--)
            {
                if(s[j][i]=='x') ans++;
                if(s[j][i]=='.') space++;

            }
        }
        if(ans+space==3)
        {
            cout<<"YES9"<<endl; return 0;
        }

        //down left coloum checking
         ans=0;
         space=0;
        rep(i,0,1)
        {
            for(int j=2;j>=0;j--)
            {
                if(s[j][i]=='x') ans++;
                 if(s[j][i]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES10"<<endl; return 0;
        }

        //down right coloum checking

        ans=0;
        space=0;
        rep(i,3,4)
        {
            for(int j=3;j>=1;j--)
            {
                if(s[j][i]=='x') ans++;
                if(s[j][i]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES11"<<endl; return 0;
        }

        //down right coloum checking
        ans=0;
        space=0;
        rep(i,3,4)
        {
            for(int j=2;j>=0;j--)
            {
                if(s[j][i]=='x') ans++;
                if(s[j][i]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES12"<<endl; return 0;
        }
        //diagonal checking;
        ans=0;
        space=0;
        rep(i,0,3)
        {
            for(int j=0;j<3;j++)
            {
                if(i==j)
                {
                if(s[i][j]=='x' ) ans++;
                if(s[i][j]=='.' ) space++;

                }

            }
        }
        if(ans+space==3)
        {
            cout<<"YES13"<<endl; return 0;
        }


        //digonal

        ans=0;
        space=0;
        rep(i,1,4)
        {
            for(int j=1;j<4;j++)
            {
                if(i==j)
                {
                if(s[i][j]=='x' ) ans++;
                if(s[i][j]=='.' ) space++;
                }

            }
        }
        if(ans+space==3)
        {
            cout<<"YES14"<<endl; return 0;
        }


        //opposite checking;

        ans=0;
        space=0;
        rep(i,0,4)
        {
            for(int j=0;j<4;j++)
            {
                if(i==0 && j==3 && s[i][j]=='x') ans++;
                if(i==1 && j==2 && s[i][j]=='x') ans++;
                if(i==2 && j==1 && s[i][j]=='x') ans++;
                if(i==0 && j==3 && s[i][j]=='.') space++;
                if(i==1 && j==2 && s[i][j]=='.') space++;
                if(i==2 && j==1 && s[i][j]=='.') space++;

            }
        }
        if(ans+space==3)
        {
            cout<<"YES15"<<endl; return 0;
        }



        ans=0;
        space=0;
        rep(i,0,4)
        {
            for(int j=0;j<4;j++)
            {
                if(i==3 && j==0 && s[i][j]=='x') ans++;
                if(i==1 && j==2 && s[i][j]=='x') ans++;
                if(i==2 && j==1 && s[i][j]=='x') ans++;
                if(i==3 && j==0 && s[i][j]=='.') space++;
                if(i==1 && j==2 && s[i][j]=='.') space++;
                if(i==2 && j==1 && s[i][j]=='.') space++;

            }
        }
        if(ans+space==3)
        {
            cout<<"YES16"<<endl; return 0;
        }



        //extra;
        ans=0;
        space=0;
        rep(i,0,4)
        {
            for(int j=0;j<4;j++)
            {
                if(i==0 && j==2 && s[i][j]=='x') ans++;
                if(i==1 && j==1 && s[i][j]=='x') ans++;
                if(i==2 && j==0 && s[i][j]=='x') ans++;
                if(i==0 && j==2 && s[i][j]=='.') space++;
                if(i==1 && j==1 && s[i][j]=='.') space++;
                if(i==2 && j==0 && s[i][j]=='.') space++;

            }
        }
        if(ans+space==3)
        {
            cout<<"YES17"<<endl; return 0;
        }



        ans=0;
        space=0;
        rep(i,0,4)
        {
            for(int j=0;j<4;j++)
            {
                if(i==1 && j==3 && s[i][j]=='x') ans++;
                if(i==2 && j==2 && s[i][j]=='x') ans++;
                if(i==3 && j==1 && s[i][j]=='x') ans++;
                if(i==1 && j==3 && s[i][j]=='.') space++;
                if(i==2 && j==2 && s[i][j]=='.') space++;
                if(i==3 && j==1 && s[i][j]=='.') space++;

            }
        }
        if(ans+space==3)
        {
            cout<<"YES18"<<endl; return 0;
        }

    }
    else
    {


  //left up checking;
        int ans=0;
        int space=0;
        rep(i,0,1)
        {
            rep(j,0,3)
            {
                if(s[i][j]=='o') ans++;
                if(s[i][j]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }


        //left up checking
        ans=0;
        space=0;
        rep(i,0,1)
        {
            rep(j,1,4)
            {
                if(s[i][j]=='o') ans++;
                if(s[i][j]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }



        //up row right checking;

        ans=0;
        space=0;
        rep(i,0,1)
        {
            for(int j=3;j>=1;j--)
            {
                if(s[i][j]=='o') ans++;
                if(s[i][j]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }

        // up row right checking



        ans=0;
        space=0;
        rep(i,0,1)
        {
            for(int j=2;j>=0;j--)
            {
                if(s[i][j]=='o') ans++;
                if(s[i][j]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }

        //down left row checking


        ans=0;
        space=0;
        rep(i,3,4)
        {
            for(int j=0;j<3;j++)
            {
                if(s[i][j]=='o') ans++;
                if(s[i][j]=='.') space++;

            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }

        //down left row checking;
        ans=0;
        space=0;
        rep(i,3,4)
        {
            for(int j=1;j<4;j++)
            {
                if(s[i][j]=='o') ans++;
                if(s[i][j]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }



        // left up coloum checking

        ans=0;
        space=0;
        rep(i,0,1)
        {
            for(int j=0;j<3;j++)
            {
                if(s[j][i]=='o') ans++;
                if(s[j][i]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }

        //left up coloum checking ;

        ans=0;
        space=0;
        rep(i,1,2)
        {
            for(int j=1;j<4;j++)
            {
                if(s[j][i]=='o') ans++;
                 if(s[j][i]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }


        //down left coloum checking

         ans=0;
         space=0;
        rep(i,0,1)
        {
            for(int j=3;j>=1;j--)
            {
                if(s[j][i]=='o') ans++;
                if(s[j][i]=='.') space++;

            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }

        //down left coloum checking
         ans=0;
         space=0;
        rep(i,0,1)
        {
            for(int j=2;j>=0;j--)
            {
                if(s[j][i]=='o') ans++;
                 if(s[j][i]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }

        //down right coloum checking

        ans=0;
        space=0;
        rep(i,3,4)
        {
            for(int j=3;j>=1;j--)
            {
                if(s[j][i]=='o') ans++;
                if(s[j][i]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }

        //down right coloum checking
        ans=0;
        space=0;
        rep(i,3,4)
        {
            for(int j=2;j>=0;j--)
            {
                if(s[j][i]=='o') ans++;
                if(s[j][i]=='.') space++;
            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }
        //diagonal checking;
        ans=0;
        space=0;
        rep(i,0,3)
        {
            for(int j=0;j<3;j++)
            {
                if(i==j)
                {
                if(s[i][j]=='o' ) ans++;
                if(s[i][j]=='.' ) space++;

                }

            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }


        //digonal

        ans=0;
        space=0;
        rep(i,1,4)
        {
            for(int j=1;j<4;j++)
            {
                if(i==j)
                {
                if(s[i][j]=='o' ) ans++;
                if(s[i][j]=='.' ) space++;
                }

            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }


        //opposite checking;

        ans=0;
        space=0;
        rep(i,0,4)
        {
            for(int j=0;j<4;j++)
            {
                if(i==0 && j==3 && s[i][j]=='o') ans++;
                if(i==1 && j==2 && s[i][j]=='o') ans++;
                if(i==2 && j==1 && s[i][j]=='o') ans++;
                if(i==0 && j==3 && s[i][j]=='.') space++;
                if(i==1 && j==2 && s[i][j]=='.') space++;
                if(i==2 && j==1 && s[i][j]=='.') space++;

            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }



        ans=0;
        space=0;
        rep(i,0,4)
        {
            for(int j=0;j<4;j++)
            {
                if(i==3 && j==0 && s[i][j]=='o') ans++;
                if(i==1 && j==2 && s[i][j]=='o') ans++;
                if(i==2 && j==1 && s[i][j]=='o') ans++;
                if(i==3 && j==0 && s[i][j]=='.') space++;
                if(i==1 && j==2 && s[i][j]=='.') space++;
                if(i==2 && j==1 && s[i][j]=='.') space++;

            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }



        //extra;
        ans=0;
        space=0;
        rep(i,0,4)
        {
            for(int j=0;j<4;j++)
            {
                if(i==0 && j==2 && s[i][j]=='o') ans++;
                if(i==1 && j==1 && s[i][j]=='o') ans++;
                if(i==2 && j==0 && s[i][j]=='o') ans++;
                if(i==0 && j==2 && s[i][j]=='.') space++;
                if(i==1 && j==1 && s[i][j]=='.') space++;
                if(i==2 && j==0 && s[i][j]=='.') space++;

            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }



        ans=0;
        space=0;
        rep(i,0,4)
        {
            for(int j=0;j<4;j++)
            {
                if(i==1 && j==3 && s[i][j]=='o') ans++;
                if(i==2 && j==2 && s[i][j]=='o') ans++;
                if(i==3 && j==1 && s[i][j]=='o') ans++;
                if(i==1 && j==3 && s[i][j]=='.') space++;
                if(i==2 && j==2 && s[i][j]=='.') space++;
                if(i==3 && j==1 && s[i][j]=='.') space++;

            }
        }
        if(ans+space==3)
        {
            cout<<"YES"<<endl; return 0;
        }


    }
    cout<<"NO"<<endl;
}


