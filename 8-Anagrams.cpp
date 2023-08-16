#include<bits/stdc++.h>
using namespace std;

bool Anagrams(const string& str1, const string& str2){
    if (str1.length()!=str2.length()){
        return false;
    }
    int charFrequency[26] = {0};

    for (char c:str1){
        charFrequency[c-'a']++;
    }
    for (char c:str2){
        charFrequency[c-'a']--;
    }
    for (int freq:charFrequency){
        if (freq!=0) {
            return false;
        }
    }
    
    return true;
}

int main(){
    string s1,s2;

    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    if (Anagrams(s1,s2)) {
        cout<<"True"<<endl;
    } else {
        cout<<"False"<<endl;
    }
    return 0;
}
