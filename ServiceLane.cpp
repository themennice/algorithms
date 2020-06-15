#include<iostream>
using namespace std;

int main()
{
    int N,T;
    cin>>N>>T;

    int A[N];

    for(int i=0;i<N;i++)    cin>>A[i];

    while(T--)
    {
        int i,j;
        cin>>i>>j;

        if(A[i] == 1 || A[j] == 1)
        {
            cout<<"1"<<endl;
            continue;
        }
        else
        {
            int min = 3;
            for(int a = i; a<=j;a++)
            {
                if(A[a] < min)
                {
                    min = A[a];
                    if(min == 1)    break;
                }
            }
            cout<<min<<endl;
        }
    }
}