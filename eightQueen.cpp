#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int row[8],col[8],left[15],right[15];
    int i,j,queen =0;
    char a;
    for(i=0;i<15;i++)
    {
        if(i<8)
        {
            row[i]=0;
            col[i]=0;

        }
        left[i]=0;
        right[i]=0;
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            cin>>a;
            if(a=='*')
            {
                queen++;
                if(row[i]||col[j]||left[i+j]||right[i-j+7])
                {
                    cout<<"invalid";
                    return 0;
                }
                row[i] = col[j] = left[i+j] = right[i-j+7] = 1;
            }
        }
    }
    cout<<(queen==8?"valid":"invalid");
    return 0;
}
