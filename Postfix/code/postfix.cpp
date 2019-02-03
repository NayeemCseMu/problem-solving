#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char ch[100];

    while(1)
    {

        cout << "Enter the main string: -> ";
        cin >> ch;
        int len = strlen(ch);
        int temp = len;
        int n = len;

        //this part is for print the word from first positions as prefix
        cout << "Prefix : " << endl;
        for(int i=0; i<temp; i++)
        {
            for(int j=0; j<=i; j++)
            {
                cout << ch[j];
            }
            cout << endl;

        }
//        this part is for print the word from last positions as postfix
        cout << endl;
        cout << "Suffix : " << endl;
        for(int i=0; i<temp; i++)
        {
            for(int j=len-1; j<temp; j++)
            {
                cout << ch[j];
            }
            len--;
            cout << endl;
        }
        //this part is for print the word from proper-prefix
        cout << endl;
        cout << "Proper-prefix : " << endl;
        for(int i=0; i<temp-1; i++)
        {
            for(int j=0; j<=i; j++)
            {
                cout << ch[j];
            }
            cout << endl;
        }

         //this part is for print the word from proper-suffix
        cout << endl;
        cout << "Proper-suffix : " << endl;
        for(int i=0; i<temp-1; i++)
        {
            for(int j=n-1; j<temp; j++)
            {
                cout << ch[j];
            }
            n--;
            cout << endl;
        }

        cout << endl;
    }



    return 0;
}
