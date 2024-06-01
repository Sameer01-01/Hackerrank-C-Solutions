#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int q;
    cin >> q; 

    map<string, int> mp;
    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            string name;
            int marks;
            cin >> name >> marks;
            mp[name] += marks;
        } else if (type == 2) {
            string name;
            cin >> name;
            mp.erase(name);
        } else if (type == 3) {
            string name;
            cin >> name;

            cout << mp[name] << endl;
        }
    } 
    return 0;
}