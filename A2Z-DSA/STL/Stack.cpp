#include <iostream>
#include <stack>
using namespace std;

int main(){
    //STACK : 
        // - follow the Last In First Out (LIFO) , Stack = Plates 🍽️
        // - Stack removes from the top.
        // - stack hides its internal structure.

    //creating a stack
    stack <int> st;
    
    // adding elements
    st.push(10);  // {10}  
    st.push(20);  // {10,20}
    st.push(30);  // {10,20,30}
    st.emplace(40); // {10,20,30,40} ie --> same as  push
    

    cout << st.top() << endl ; // ---> returns the top element


    //removing element 
    st.pop();   // ----> removes the top element
    cout << st.top() <<  endl ;


    cout << st.empty() << endl; // ---> returns 1 if empty stack else 0

    cout << st.size() << endl;  // ---> returns the size of the stack

    stack <int> st1,st2;  // ---> swaps the stack
    st1.swap(st2);




}