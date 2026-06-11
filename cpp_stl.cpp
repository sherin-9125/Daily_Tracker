#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    pair<int,int> p={5,9};
    cout<<p.first<<" "<<p.second<<endl;
    pair<pair<int,int>,int> p1={{1,2},5};
    cout<< p1.first.first <<"  "<< p1.second<<endl;
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].second;
    pair<string,string> p3={"Sherin","Sharmila"};
    cout<<p3.second<<endl;
} 

void explainVector(){
    vector <int > vec;
    // they are used to add element in the end
    vec.push_back(1);// used when there is already an object variable exists 
    vec.emplace_back(2);// used for efficiency when there is no object variable exists
    vector<pair<int,int>>vec1;
    vec1.push_back({1,2});
    vec1.emplace_back(3,4);// automatically consider as a pair and add it to vector
    

    // creating container of  a size with default value syntax:vector<data_type> name(size,value):
    vector<int>v(5,25);// create a vector of size 5 with default value 25
    vector<int>v1(5);// create a vector of size 5 with default value 0
    vector<int>v2(v1);// another container of same value and size as v1 copied
    // ITERATORS
    vector<int>::iterator it =v.begin();// points to memory address of 1st element 
    it++;
    cout<<*(it)<<" "; 
    it =it+2;
    cout<<*(it)<<" ";
   // vector<int>::iterator it =v.end();// points to a location that is right after the last element
    cout<<v[0]<<" "<<v.at(0)<<endl;// both are used to access element at index 0 but at() also checks for out of bound error
    cout<< v.back()<<" ";

    // printing the elements of vector
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for (auto it =v.begin();it!=v.end();it++){ // automatically assign sto iterator type
        cout<<*(it)<<" ";
    }
    vector<int>vec3={10,22,33,44,45,66};
    cout<<vec3.size();// returns the size of vector
    
}

    void explainStack() {
        stack<int>st;
        st.push(1);
        st.push(2);
        st.push(3);
        st.pop();
        cout<<st.size()<<endl;
         }
   
    void explainSet(){
        set<int>s;
        s.insert(5);
        s.insert(2);
        s.insert(8);
        s.insert(5);// duplicate element will not be added
        auto it=s.find(5);// returns an iterator to the element if found else returns s.end()
        
    }
     void explainBound(){
    vector<int> v = {10, 20, 30, 30, 30, 40, 50};
    int target = 30;

    // Finding bounds
    auto lb = lower_bound(v.begin(), v.end(), target);
    auto ub = upper_bound(v.begin(), v.end(), target);

    cout << "Lower Bound (first 30): " << *lb << " at index " << (lb - v.begin()) << endl;
    cout << "Upper Bound (first item > 30): " << *ub << " at index " << (ub - v.begin()) << endl;

    // Showing the "range" of 30s
    cout << "\nThe elements between LB and UB are: ";
    for (auto it = lb; it != ub; ++it) {
        cout << *it << " ";
    }
}


int main(){
    explainBound();
    return 0;
}   