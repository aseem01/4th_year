#include<iostream>
#include<forward_list>

using namespace std;

int main() {

    forward_list<int> flist1;
    flist1.assign({1, 2, 3});
    for(int i=0;i<flist1.size();i++) cout<<"flist1 = "<<flist1[i]<<endl;
    return 0;

}
