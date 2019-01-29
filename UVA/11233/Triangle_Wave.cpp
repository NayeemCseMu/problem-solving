#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t!=0)
    {
        int n, m;
        cin >> n >> m;

        while(m!=0)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=i; j++)
                {
                    cout << i;
                }
                cout << endl;

            }

            for(int i=n-1; i>=1; i--)
            {
                for(int j=1; j<=i; j++)
                {
                    cout << i;
                }
                cout << endl;

            }
            m--;
            if(m!=0)
            {
                cout << endl;
            }
        }

        t--;
        if(t!=0)
            {
                cout << endl;
            }

    }
    return 0;
}
