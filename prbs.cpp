#include<bits/stdc++.h>
using namespace std;

// brute force approach
vector <int> PairSum(vector <int> nums,int target){
    vector <int> ans;
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]== target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

// optimal approach
 
vector <int> PairSum1(vector <int> nums,int target)
 {   
    vector <int> ans;

    int n = nums.size();
    int i = 0;
    int j = n - 1;

    while (i < j) {
        if (nums[i] + nums[j] > target) {
        j--;
       } 
         else if (nums[i] + nums[j] < target) {
            i++;
        } 
        else {
        ans.push_back(i);
        ans.push_back(j);

            }
    } // <--- This closing brace was missing!
 return ans;
}

int main(){
    vector <int> nums={1,2,3,4,5};
    int target = 8;
     vector <int> ans = PairSum1(nums,target);
    cout<<ans[0]<<" , "<<ans[1]<<endl;
    return 0;
}

// recursive problem to check the array is sorted or not
#include<iostream>
#include<vector>
using namespace std;
bool issot(vector<int> arr,int n){
    if(n==0||n==1){
        return true;
    }
    if(arr[n-1]>=arr[n-2] && issot(arr,n-1))
   {
    return true;
    }
return false;
}
int main(){
    vector<int>arr = {1,2,5,4,6};
    int n = arr.size();
   cout<< issot(arr,n);
}