#include <iostream>
#include <list>
using namespace std;
int main(){
    
    //list
    // -A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.
    // -two major differences between lists and vectors are:
        // You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.
        // Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.

    //declarations
    list <int> ls1;
    ls1.push_back(2); // {2}
    ls1.emplace_back(3); // {2,3}
    ls1.push_front(50); // {50,2,3} ie list allows front operations
    ls1.emplace_front(20); // {20,50,2,3}

    for(auto i : ls1){
        cout << i << " ";
    }
    cout << endl;


    //rest of the fucntions same as vector
    // begin , end,rbegin,rend , clear , insert , size ,swap

}

