#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int speed;
   // cout << "speed?" << endl;
    cin >> speed; cin.ignore();
    //cout << "lightCount" << endl;
    int lightCount;
    cin >> lightCount; cin.ignore();


    vector<int> Dis;
    vector<int> Dur;

    for (int i = 0; i < lightCount; i++) {
        int distance;
        int duration;
        cin >> distance >> duration; cin.ignore();
       /* timetravel.push_back((double(distance) / double(duration)) * 3.6);*/

        Dis.push_back(distance);
        Dur.push_back(duration);
    }

    for (int i = 0; i < lightCount; i++) {
        if ((18 * Dis[i]) % (10 * speed * Dur[i]) >= (5 * speed * Dur[i])){
        speed--;
       i=-1;}
    }

    cout << speed << endl;

}


