#include <iostream>
#include <string>
using namespace std;

string StringReverse(const string& str,int index){
    if(index==0){
        return str.substr(0,1);
    }
    return str.substr(index,1) + StringReverse(str,index-1);
}

int main(){
    string input;
    cout<<"Enter the string: ";
    cin>>input;

    string reversed=StringReverse(input, input.length()-1);
    cout<<"Reversed string: "<<reversed<<endl;

    return 0;
}
