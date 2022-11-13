#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char digit[]="0123456789";
    char upper[]="ABCDEFGHIJKLMNOQPRSTUYWVZX";
    char lower[]="abcdefghijklmnoqprstuvwyzx";
    char special[]= "!@#$^&*?";

    srand(time(0));
    int randomize= rand() % 4;
    
    string password="";
    
    for(int i=0;i<n;i++)
    {
        if(randomize==1)
        {
            password += digit[rand() % 10];
            randomize = rand() % 4;
        }
        else if(randomize==2)
        {
            password += upper[rand() % 26];
            randomize = rand() % 4;
        }
        else if(randomize==3)
        {
            password += lower[rand() % 26];
            randomize = rand() % 4;
        }
        else
        {
            password += special[rand() % 8];
            randomize = rand() % 4;
        }
    }
    cout<<password;
    return 0;
}