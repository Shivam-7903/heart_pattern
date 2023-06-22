#include<iostream>

using namespace std;

int main()
{
    int n ,k=1;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<6*n-1;j++)
        {
            if(i<=5)
            {
                if(i+j>=(n-1)&&i+j<=(2*n+2*i-1))
                {
                    cout<<"A";
                }
                else if(i+j>=(4*n-2)&&i+j<=(5*n+2*i-2))
                {
                    cout<<"A";
                }
                else cout<<" ";
            }
        }
        cout<<endl;
    }
     for(int i=0;i<4*n;i++)
    {
        for(int j=0;j<6*n;j++)
        {
            if(i+j>=2*i&&i+j<=6*n-3)
            {
                cout<<"B";
            }
            else
            cout<<" ";
        }cout<<endl;
    }
}
