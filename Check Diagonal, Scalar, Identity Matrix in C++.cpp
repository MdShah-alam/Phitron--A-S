#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    int ar[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>ar[i][j];
        }
    }

    if(row!=col)
    {
        cout<<"Not ! daigonal";
        return 0;
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i!=j)
            {
                if(ar[i][j]!=0)
                {
                    cout<<"Not daigonal";
                    return 0;
                }
            }
        }
    }
    cout<<"Daigonal"<<endl;

    int save=ar[0][0];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i==j)
            {
                if(ar[i][j]!=save)
                {
                    cout<<"Not Scalar";
                    return 0;
                }
            }
        }
    }
    cout<<"Scalar"<<endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i==j)
            {
                if(ar[i][j]!=save)
                {
                    cout<<"Not Identity";
                    return 0;
                }
            }
        }
    }
    cout<<"Identity"<<endl;

    return 0;

}
