// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
// traversal function
void traversal(int arr[100],int n)
{

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        
 }
 void insertion(int arr[100],int n,int pos,int val){
     for(int i = n;i>pos;i--){
         arr[i]=arr[i-1];
     }
     arr[pos]=val;
     n++;
    traversal(arr,n);
    
 }
 void deletion(int arr[100],int n,int pos){
     for(int i=pos;i<n-1;i++){
         arr[i]=arr[i+1];
     }
     n--;
     traversal(arr,n);
 }
    
int main() {
    // array creation
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];  // extra space for insertion

    cout << "Enter " << n << " elements:\n";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int pos,val;
    cout<<"pos:"<<endl;
    cin>>pos;
    cout<<"val"<<endl;
    cin>>val;
//traversal(arr,n);
insertion(arr,n,pos,val);
//deletion(arr,n,pos);
return 0;    
}
    

    
