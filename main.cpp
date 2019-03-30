
#include<bits/stdc++.h>
using namespace std;


int evenNumSubstring(char str[])
{
    int len = strlen(str);
    int count = 0;

    for (int i = 0; i < len; i++)
    {
        int temp = str[i] - '0';


        if (temp % 2 == 0)
            count += (i + 1);
    }

    return count;
}


int main()
{
    int n;

    cin>>n;

    char str[n];



        cin>>str;




    cout << evenNumSubstring(str) << endl;
    return 0;
}
