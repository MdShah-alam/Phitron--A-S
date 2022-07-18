#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st1="abcdefghij";
    string st2="xyz";
    //concatenation
    st1.append(st2);
    cout<<st1<<endl;
//    //insert a letter in last
//    st1.push_back('w');
//    cout<<st1<<endl;
    st1.pop_back();
    cout<<st1<<endl;
    //insert a letter or string at any position
//    st1.insert(3,"shah_alam");
//    cout<<st1<<endl;
    //delete a letter or string at any position
    st1.erase(4,4);
    cout<<st1<<endl;
    swap(st1,st2);
    cout<<st1<<" "<<st2<<endl;

    return 0;
}

