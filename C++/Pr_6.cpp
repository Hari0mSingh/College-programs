#include <iostream> 
using namespace std; 

static int  count; 
class count_me{ 
    public: 

    count_me(){ 

        count++; 
    } 
    int print(){ 
        cout<<"Number of objects are : "<<count; 
    } 

}; 

int main(){ 

    count_me t1; 
    count_me t2; 
    count_me t3; 
    t3.print(); 

    return 0; 

} 