
#include <iostream>
using namespace std;
int main(){
    int age=20;
// pointer is a variable that stores a address of a another variable 
// to get address we use '&' symbol and to create pointer we use '*'
// creating a pointer 
    int* ptr=&age;
    cout<<ptr<<endl; // cout<<&age; same op
// getting the value throudh pointer via deferencing
    cout<<*ptr<<endl;    // cout<<age; same op
// pointer for pointer usine ** 
    int** ptr2 = &ptr;
    cout<<ptr2<<endl; //cout<<&ptr<<endl; same op
    cout<<**ptr2;
// null pointer = a pointer that doesnt store any address
 int* np = NULL;
 cout<<"\n"<< np;
}

void modifyByValue(int num) {
    num = 999; // ❌ Only changes the clone at 0x222. The original at 0x111 is untouched!
}
void modifyByPointer(int* ptr) {
    *ptr = 500; // 1. Look inside ptr to get the address (0x111)
                // 2. Travel to 0x111 and overwrite the 100 with 500. 
                //    (Original variable changes!)
}
void modifyByReference(int& ref) {
    ref = 777; // Modifies the box at 0x111 directly. No map-reading required! & here to cgive nick name to the original variable
}
