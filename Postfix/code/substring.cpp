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

    cout << endl;
    cout << "Sub-strings: " << endl;
    for(int i=0; i<temp; i++)
    {
         f=i;
        for(int m=0; m<temp; m++)
        {

            for(int j=m; j<f+1; j++)
            {

                if(f>=temp)
                {
                    break;
                }
                else
                    cout << ch[j];
            }
            f++;

            cout << " ";
        }

        cout << endl;
        cout << endl;

    }

    return 0;
}
