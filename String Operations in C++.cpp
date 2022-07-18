#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st="aaaabbbbaaazzz";
    cout<<st.find('b')<<endl;
    cout<<st.rfind('b')<<endl;
    cout<<st.find_first_of('b')<<endl;
    cout<<st.find_last_of('b')<<endl;
    cout<<st.find_first_not_of('a')<<endl;
    cout<<st.find_last_not_of('a')<<endl;
    //sub_string
    string sub = st.substr(3,6);
    string sub2=st.substr(2,7);
    cout<<sub<<endl;
    cout<<sub2<<endl;

    return 0;
}
