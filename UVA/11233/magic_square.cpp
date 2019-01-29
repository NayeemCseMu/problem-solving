#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{

    int arr[100][100];
    int n, br=0;
    while(cin>>n)
    {
        int  i, j, k, sum=0, l, upto=n*n;
        for(i=0; i<100; i++)
        {
            for(j=0; j<100; j++)
            {
                arr[i][j]=0;
            }
        }

        i=1, j=(n/2)+1;
        arr[i][j]=1;
        for(k=2; k<=upto; k++)
        {
            int p=i, q=j;
            i=i-1, j=j+1;

            if(i<=0)
                i=i+n;
            if(j<=0)
                j=j+n;

            if(i>n)
                i=i/n;
            if(j>n)
                j=j/n;

            if(arr[i][j]==0)
            {
                arr[i][j]=k;

            }


            else if(i==0 && j==0)
            {
                i=p-1;
                j=q-2;
                arr[i][j]=k;

            }
            else
            {
                i=p+1;
                j=q;
                arr[i][j]=k;
            }


        }
        for(l=1; l<=n; l++)
        {
            sum+=arr[l][l];
        }
        if(br>0)
        {
            cout << endl;
        }
        br++;
        printf("n=%d, sum=%d\n",n,sum);

        if(upto<10)
        {
            for(int i=1; i<=n; i++)
            {

                for(int j=1; j<=n; j++)
                {

                    printf("%2d", arr[i][j]);
                }
                printf("\n");
            }

        }

        else if(upto<100)
        {
            for(int i=1; i<=n; i++)
            {

                for(int j=1; j<=n; j++)
                {

                    printf("%3d", arr[i][j]);
                }
                printf("\n");
            }

        }

        else
        {
            for(int i=1; i<=n; i++)
            {

                for(int j=1; j<=n; j++)
                {

                    printf("%4d", arr[i][j]);
                }
                printf("\n");
            }

        }


    }
    return 0;
}
