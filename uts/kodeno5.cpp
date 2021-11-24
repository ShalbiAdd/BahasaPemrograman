#include<iostream>
using namespace std;

int main()
{
    int matrix[4][4]={{1,9,3,7},{2,6,9,5},{1,8,4,6},{3,5,7,1}};
    for(int s=0;s<4;s++){
        for(int f=0;f<4;f++)
    {

    cout<<matrix[s][f]<<" ";
    }
    cout<<endl;
}

return 0;
}