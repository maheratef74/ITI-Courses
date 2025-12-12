#include<iostream>
using namespace std;
int main(){
    string s , newString; cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z') newString += s[i];
    }
    cout << "the new string is: " << newString << '\n';
    return 0;
}