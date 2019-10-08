#include <bits/stdc++.h>

#define mxn 100000



long int cnt[26][mxn];



using namespace std;

int main()
{
   long int i, j, n, q;

    cin>> n >> q;

    string s;

    cin >> s;

    for(i=1; i<=n; i++){
        for(j=0; j<26; j++){

            cnt[j][i] = cnt[j][i-1];
        }

        int row = s[i-1] - 'a';
        cnt[row][i]++;


    }

    while(q--){

        long int l, r;

        cin >> l >> r;

        long int maxcounter=0;
        int alpha=0;

        for(i=0; i<26; i++){

            if(maxcounter<cnt[i][r] - cnt[i][l-1]){

                maxcounter = cnt[i][r] - cnt[i][l-1];
                alpha=i;
            }
        }


        char a = 'a'+alpha;

        cout<< a << " " << maxcounter <<endl;


    }


    return 0;
}
