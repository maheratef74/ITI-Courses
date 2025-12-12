#include<iostream>
#include<map>
using namespace std;
int main(){
    string word; cin >> word;
    map<char , int> freq;
    for(int i = 0; i < word.size(); i++) freq[word[i]]++;

    for(auto it : freq) cout << it.first << " => " << it.second << '\n';
    return 0;
}