#include<bits/stdc++.h>
using namespace std;
int m=1001;
//map< std::pair<int, int>, int>mp;
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    double ab,cd,ad,bc,ac,bd;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        std::map<int, std::map<int, int> > mp;

        //memset(ar,0,sizeof(ar));
        //memset(ar, 0, sizeof(ar[0][0]) *m*m);
       // cout<<"br = "<<ar[-1][-1]<<endl;
        //cout<<"aa = "<<ar[1][1]<<endl;
        mp[x1][y1]=1;
        mp[x2][y2]=1;
        mp[x3][y3]=1;
        vector<pair<int,int> > v;
        int cnt=0;
        for(int i=0; i<=1; i++)
        {
            for(int j=0; j<=1; j++)
            {
                // cout<<"i = "<<i<<" j = "<<j<<endl;
                x4=i;
                y4=j;
                if(mp[i][j]==0)
                {
                    ab=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
                    cd=sqrt(((x3-x4)*(x3-x4))+((y3-y4)*(y3-y4)));
                    ad=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
                    bc=sqrt(((x2-x4)*(x2-x4))+((y2-y4)*(y2-y4)));
                    ac=sqrt(((x1-x4)*(x1-x4))+((y1-y4)*(y1-y4)));
                    bd=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
                    //cout<<"ab1 = "<<ab<<" cd1 = "<<cd<<" ad1 = "<<ad<<" bc1 = "<<bc<<" ac1 = "<<ac<<" bd1 = "<<bd<<endl;
                    if((ab==cd) && (ad==bc))
                    {
                        //cout<<"x4 = "<<x4<<" y4 = "<<y4<<endl;
                        cnt++;
                        v.push_back(make_pair(x4,y4));
                        mp[x4][y4]=1;
                    }
                }
            }
        }



        for(int i=0; i<=1; i++)
        {
            for(int j=0; j<=1; j++)
            {
                x4=j;
                y4=i;
                if(mp[x4][y4]==0)
                {
                    ab=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
                    cd=sqrt(((x3-x4)*(x3-x4))+((y3-y4)*(y3-y4)));
                    ad=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
                    bc=sqrt(((x2-x4)*(x2-x4))+((y2-y4)*(y2-y4)));
                    ac=sqrt(((x1-x4)*(x1-x4))+((y1-y4)*(y1-y4)));
                    bd=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
                   // cout<<"ab2 = "<<ab<<" cd2 = "<<cd<<" ad2 = "<<ad<<" bc2 = "<<bc<<" ac2 = "<<ac<<" bd2 = "<<bd<<endl;

                    if((ab==cd) && (ad==bc))
                    {
                        cnt++;
                        v.push_back(make_pair(x4,y4));
                        mp[x4][y4]=1;
                    }
                }
            }
        }




        for(int i=0; i<=1; i++)
        {
            for(int j=0; j<=1; j++)
            {
                x4=i*(-1);
                y4=j;
                cout<<"ii = "<<x4<<" jj = "<<y4<<endl;
                cout<<"ar = "<<mp[x4][y4]<<endl;
                if(mp[x4][y4]==0)
                {
                    cout<<"i = "<<i<<" j = "<<j<<endl;
                    ab=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
                    cd=sqrt(((x3-x4)*(x3-x4))+((y3-y4)*(y3-y4)));
                    ad=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
                    bc=sqrt(((x2-x4)*(x2-x4))+((y2-y4)*(y2-y4)));
                    ac=sqrt(((x1-x4)*(x1-x4))+((y1-y4)*(y1-y4)));
                    bd=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
                    cout<<"ab3 = "<<ab<<" cd3 = "<<cd<<" ad3 = "<<ad<<" bc3 = "<<bc<<endl;
                    if((ab==cd) && (ad==bc))
                    {
                        cnt++;
                        v.push_back(make_pair(x4,y4));
                        mp[x4][y4]=1;
                    }
                }
            }
        }



        for(int i=0; i<=1; i++)
        {
            for(int j=0; j<=1; j++)
            {
                x4=j*(-1);
                y4=i;
                if(mp[x4][y4]==0)
                {
                    ab=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
                    cd=sqrt(((x3-x4)*(x3-x4))+((y3-y4)*(y3-y4)));
                    ad=sqrt(((x1-x3)*(x1-x3))+((y1-y3)*(y1-y3)));
                    bc=sqrt(((x2-x4)*(x2-x4))+((y2-y4)*(y2-y4)));
                    ac=sqrt(((x1-x4)*(x1-x4))+((y1-y4)*(y1-y4)));
                    bd=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
                    //cout<<"ab4 = "<<ab<<" cd4 = "<<cd<<" ad4 = "<<ad<<" bc4 = "<<bc<<" ac4 = "<<ac<<" bd4 = "<<bd<<endl;
                    if((ab==cd) && (ad==bc))
                    {
                        cnt++;
                        v.push_back(make_pair(x4,y4));
                        mp[x4][y4]=1;
                    }
                }
            }
        }



        cout<<cnt<<endl;
        for(int i=0; i<cnt; i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }


    }
}

