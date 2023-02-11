#include <iostream.h>
#include<bits/stdc++.h>

int main()
{
    // vector arrays
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.pop();
    for(int i=0; i<arr1.size(); i++)
        cout << arr[i] << endl;
    
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    arr.pop_back();

    // map
    map<int, int> m;
    m[1] = 2;
    m[2] = 3;
    m[3] = 4;
    
    for(map<int, int>::iterator it = m.begin(); it != m.end(); it++)
        cout << it->first << " " << it->second << endl;

    // OR

    for(auto z: m)
        cout << z.first << " " << z.second << endl;

    // set
    
}
