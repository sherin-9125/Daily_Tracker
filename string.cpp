#include<iostream>
#include<string>
using  namespace std;
bool isPalidrome(string s){
    int st=0,end=s.size()-1;
    while(st<end){
        if(s[st]!=s[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main(){
    string s1 = "race a car";
    string s2="a man a plan a canal panama";
    cout<<isPalidrome(s1)<<endl;
    cout<<isPalidrome(s2)<<endl;

}


