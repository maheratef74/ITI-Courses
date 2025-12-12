#include<iostream>
using namespace std;
int main(){
    string s1 ,s2 ="";
    s1 = "maher01205397285";
    for(int i = 0; i < s1.size(); i++)
    {
        s2 += s1[i];
    }
    cout << s2 << '\n';
    return 0;
}