#include <bits/stdc++.h>
using namespace std;

int main()
{
    string lyrics;
    string modLyrics[100];
    cin >> lyrics;
    int count = 0;
    int j = 0;

    for(int i=0;i<lyrics.length();i++){
         if (lyrics[i] == 'W' && lyrics[i+1] == 'U' && lyrics[i+2] == 'B')
        {
            i = i + 2;
        }
        else{
            if (count == 0)
            {
                while (lyrics[i] != 'W' && lyrics[i+1] != 'U' && lyrics[i+2] != 'B' )
                {
                    modLyrics[j] = lyrics[i];
                    j++;
                    i++;
                    count++;
                }
            }
            else
            {
                modLyrics[j] = ' ';
                j++;
                while (lyrics[i] != 'W' && lyrics[i+1] != 'U' && lyrics[i+2] != 'B')
                {
                    modLyrics[j] = lyrics[i];
                    j++;
                    i++;
                    count++;
                }
            }
        }
    }
    cout<<modLyrics;
}

