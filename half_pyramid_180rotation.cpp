//     *
//    **
//   ***
//  ****
// *****
#include<iostream>
using namespace std;

int main()
{
    int row;
    cin>>row;
    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= row; j++)
        {
            if(j <= (row-i))
            {
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}