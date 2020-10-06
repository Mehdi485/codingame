#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;


int main()
{


 
    while (1) {
        vector<int> V;
        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain.
            cin >> mountainH; cin.ignore();
            V.push_back(mountainH);
        }
        int maxI= max_element(V.begin(),V.end())-(V.begin());
     
        cout << maxI<< endl; // The index of the mountain to fire on.
    }

}
