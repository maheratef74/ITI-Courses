#include<iostream>
using namespace std;
int main(){
    string s; 
    cin >> s;
    int count = 0;  
    int i = 0;
    while (s[i] != '\0')
    {
        count++;
        i++;
    }
    cout << "the lenth of this string is: " << count << '\n';  
    
    return 0;
}