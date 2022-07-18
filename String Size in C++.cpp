#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st="abcdefghij";
    cout<<st<<" "<<st.size()<<endl;
    st.resize(5);
    cout<<st<<" "<<st.size()<<endl;
    st.clear();
    cout<<st<<" "<<st.size()<<endl;
    if(st.empty())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}
