#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
int Count(int n){
    int c = (int) log10(n)+1;
    return c;

}
void reverseDigits(int n){
    while(n>0){
        int rev=0;
        int rem=n%10;
        rev=rev*10+rem;
         n=n/10;
         cout<<rev;
    
           
    }
}
void palindrome(int n){
        int rev=0; 
        int dup=n;
    while(n>0){
       
        int rem=n%10;
        rev=rev*10+rem;
         n=n/10;
    }
if(dup==rev){
        cout<<"Palindrome";
    }
else{
        cout<<"Not a palindrome";
    }
    cout<<endl;  

}
void armstrong(int n){
     int sum=0;
     int rem=0;
      int dup =n;
     while(n>0){
     
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
     }
     if(sum== dup){
        cout<<"Armstrong number";
     }
     else{
        cout<<"Not an armstrong number";

     }

}
void divisors(int n){
    vector<int> div;
    for(int i=1;i<=sqrt(n);i++){ // coz after sqrt(n) the divisors will be repeated
        if(n%i==0){
            div.push_back(i);
                
        if(n/i!=i){  // 
            div.push_back(n/i);
        }

    }
}
    sort(div.begin(),div.end());
    for(int i=0;i<div.size();i++){
        cout<<div[i]<<" ";
    }

}
void checkprime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Not a prime number";
            return;
        }
    }
    cout<<"Prime number";
}
          /* for(int i= min(n1,n2);i>=1;i--){
                                    if(n1%i==0 && n2%i==0){
                                    cout<<"GCD is :"<<i;
                                     break;*/
        
    
  void gcd(int n1, int n2){

    while(n1>0 &&n2>0){
        if(n1>n2){
            n1=n1%n2;
    
        }

        else{
            n2=n2%n1;
        }
        if(n1==0){
            cout<<"gcd is"<<n2;}
         }
            if(n2==0){
                cout<<"gcd is"<<n1;
            }
            
        
        }

  
 
  
int main(){
    int n1, n2;
    cout<<"Enter a number 1 :";
    cin>>n1;
    cout<<"Enter a number 2 :";
    cin>>n2;
    gcd(n1,n2);
    return 0;
}