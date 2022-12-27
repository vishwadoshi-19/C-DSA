#include <iostream>
using namespace std;
#include <string>

int main()
{
    string lyrics;
    string modLyrics;
    cin >> lyrics;
    int len = lyrics.length();
    int i = 0;
    int count = 0;
    int j = 0;

    while (i < len)
    {
        if (lyrics[i] == 'W' && lyrics[i+1] == 'U' && lyrics[i+2] == 'B')
        {
            i = i + 3;
            count++;  
        }
        else{
            if (count == 0 || count ==1)
            {
                while (lyrics[i] != 'W' && lyrics[i+1] != 'U' && lyrics[i+2] != 'B' )
                {
                    modLyrics[j] = lyrics[i];
                    j++;
                    i++;
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
                }
            }
        }
    }
    cout<<modLyrics;
}
