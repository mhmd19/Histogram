#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v1;
    int g;
    cout << "enter grades" << endl;
    cin>>g;
    int x = 0;
    while (g != -1)
    {
        v1.push_back(g);
        cin>>g;
        x++;
    }
    cout << x << endl;
        int arr[x];
    int y = 0;
    for(int i=0; i<x; i++)
    {
        for(int j = 0; j < x; j++)
        {
            if(v1[i] == v1[j])
            {
                y++;
            }
            else;
            continue;
        }
         cout << "the " << v1[i] << " 's =" << y << endl;
         y=0;

    }



    return 0;
}
