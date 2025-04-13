#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"How many numbers do you want to add: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>= 0){
            sum+=arr[i];
        }
       
    }
    cout<<"Sum of positive numbers = "<<sum<<endl;
    return 0;
}