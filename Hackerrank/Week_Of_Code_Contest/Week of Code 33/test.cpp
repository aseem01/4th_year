#include <string>
#include <iostream>

using namespace std;

int main()
{
    //string s("hello hello");
    string s,sub;
    while(cin>>s)
    {
        cin>>sub;
    int count = 0;
    size_t nPos = s.find(sub, 0); // fist occurrence
    while(nPos != string::npos)
    {
        count++;
        nPos = s.find(sub, nPos+1);
    }

    cout<<count;
    }
}
