#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cout<<"Capacity of normal string :"<<st.capacity()<<endl;
    cout<<"Maximum capacity of normal string :"<<st.max_size()<<endl;
    cout<<"Enter a string :";
    cin>>st;
    cout<<st<<endl;
    string st1="abc";
    string st2="xyz";
    //string copy
    st1=st2;
    cout<<st1<<endl;
    //string concatenation
    st1+=st2;
    cout<<st1<<endl;
    //string compare
    if(st1==st2)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;


    return 0;
}
