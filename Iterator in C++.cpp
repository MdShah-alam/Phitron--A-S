#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st="abcdefgijklmnopqrstuvwyxz";
    string :: iterator t;
    string :: reverse_iterator it;
    string s;
    for( it=st.rbegin(),t=st.begin();it!=st.rend(),t!=st.end();it++,t++)
    {
        cout<<*it<<" "<<*t<<endl;
    }

//    for(auto it=st.begin(); it!=st.end(); it++)
//    {
//        cout<<*it<<endl;
//    }

    return 0;
}
