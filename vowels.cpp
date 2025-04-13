#include<iostream>
using namespace std;
int main(){
    string s;
    cout<< "Input: ";
    cin>>s;
    
    if(s.length() > 100){
        cout << "Input should be less than or equal to 100 characters" << endl;
        return 0;
    }

    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            count++;
        }
    }
    cout<<"Number of Vowels = "<<count<<endl;
    return 0;
}