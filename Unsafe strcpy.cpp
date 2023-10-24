#include <bits/stdc++.h>

using namespace std;

int main()
{
    char buffer[2];
    char user_input[5];
    for(int i=0;i<5;i++)
    {
        cin>>user_input[i];
    }
    strcpy(buffer, user_input); // No bounds checking
    cout<<"Buffer: ";
    for(int i=0;i<5;i++)
    {
        cout<<buffer[i]<<" ";
    }
    return 0;
}
