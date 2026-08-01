#include <bits/stdc++.h>
using namespace std;

int main() {

    /** 

    //Declare the arr and input the values 
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n ; i++){
        cin >> arr[i];
    }


    //Hash arr
    int hash[13]={0};
    for (int i = 0; i < n; i++){
        hash[arr[i]]++;
    }

    //Fetching values
    int q;
    cin >> q;
    while (q--){
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }


    */

    /* 

    //Declare a string 
    string s;
    cin >> s;

    //Hash character array
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++){
        hash[s[i]-'a']++;
    }

    //Fetching the value
    int q;
    cin >> q;
    while (q--){
        char ch;
        cin >> ch;
        cout << hash[ch - 'a'] << endl;
    }

    */

    /*

    //Declare the arr and input the values 
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n ; i++){
        cin >> arr[i];
    }


    //Map
    map<int, int> mpp;
    for (int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    //iterate on map
    for (auto it : mpp){
        cout << it.first << "->" << it.second << endl ;
    }

    //Fetching values
    int q;
    cin >> q;
    while (q--){
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }

    */

    

}
