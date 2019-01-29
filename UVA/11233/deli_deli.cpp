#include<iostream>
#include<cstring>
using namespace std;
struct x
{
    char word[100];
    char pword[100];
} a[100];
int main()
{
    int L, N;

    char ch[100];

    cin >> L >> N;
    for(int i=1; i<=L; i++)
    {
        cin >> a[i].word >> a[i].pword;
    }
    while(N!=0)
    {
        N--;

        cin >> ch;
        int len = strlen(ch);

        int k=0;
        for(int i=1; i<=L; i++)
            if(strcmp(ch,a[i].word)==0)
            {
                cout << a[i].pword << endl;
                k=1;
                break;
            }

        if(k==0)
        {
            if(ch[len-1]=='y')
            {
                if(ch[len-2]=='a' || ch[len-2]=='e' || ch[len-2]=='i' || ch[len-2]=='o' || ch[len-2]=='u')
                {
                    ch[len]='s';
                    ch[len+1]='\0';
                    cout << ch << endl;
                }
                else
                {
                    ch[len-1]='i';
                    ch[len]='e';
                    ch[len+1]='s';
                    ch[len+2]='\0';
                    cout << ch << endl;
                }
            }

            else if(ch[len-1]=='o' || ch[len-1]=='s' || ((ch[len-2]=='c') && (ch[len-1]=='h')) || ((ch[len-2]=='s') && (ch[len-1]=='h')) || ch[len-1]=='x')
            {
                ch[len]='e';
                ch[len+1]='s';
                ch[len+2]='\0';
                cout << ch << endl;

            }

            else
            {
                ch[len]='s';
                ch[len+1]='\0';
                cout << ch << endl;
            }


        }
    }

    return 0;
}

