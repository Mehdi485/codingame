#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;



int main()
{
    int L;
    map<char, vector<string>> characters;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;
    getline(cin, T);
    for (int i = 0; i < H; i++) {
        string ROW;
        getline(cin, ROW);
        characters['?'].push_back(ROW.substr(26*L, L));
        for (int j = 0; j < 26; j++)
            characters['A' + j].push_back(ROW.substr(j*L, L));
    }
        for (int i = 0; i < H; i++)
    {
        for (auto c : T)
        {
            if ((c >= 'a') && (c <= 'z'))
                c += ('A' - 'a');
            else if ((c < 'A') || (c > 'Z'))
                c = '?';
            
            cout << characters[c][i];
        }
        
        cout << endl;
    }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

   
}
