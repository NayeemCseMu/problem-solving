#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[100];
    cout << "Enter the main string : ";
    cin >> ch;
    int len = strlen(ch);
    int temp = len;
    int n, k=0, f;
    cin >> n;

    cout << endl;
    cout << "Sub-strings: " << endl;

        for(int m=0; m<temp; m++)
        {
            for(int j=m; j<n; j++)
            {

                if(n>temp)
                {
                    break;
                }
                else
                    cout << ch[j];
            }
            n++;

            cout << " ";
        }
        cout << endl;


    return 0;
}
