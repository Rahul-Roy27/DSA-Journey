#include <bits/stdc++.h>
using namespace std;
int main(){
    //Vector
    //  -A vector represents a dynamic sized array in the Standard Template Library(STL) that automatically grows when elements are added beyond current capacity
    //  - must include vector library

    vector <int> v1;    // --> declaration an empty vector

    v1.push_back(1);    //---> adding elements
    v1.emplace_back(2); // --> same as push_back() but faster 

    vector <pair <int ,int>> v2;
    v2.push_back({10,20});  // --> hav to give curly braces
    v2.emplace_back(40,50); // --> automatically deduces that its a pair input

    vector <int> v3(5,100) ; // --> creates a vector of {100,100,100,100,100}
    vector <int> v4(5) ; // --> creates a vector of size 5 , we can increase the size even after this
    vector <int> v5(v3) ; // ---> copying the values of v3 in v5


    // accessing elements
    vector <int> v6 = {10,20,30,40,50};
    cout << v6[1] << endl;
    cout << v6.at(0) << endl;
    cout << v6.back() <<endl;
    cout << v6.front() << endl;
    

    //using iterator    ---> conatiner::iterator it1 , --> iterator points to the memory address
    vector <int> v7 = {1,2,3,4,5};
    vector <int>::iterator it = v7.begin(); // ---> begin() --> points to the memory of first element  not the element itself
    cout << *(it) << endl;  // --> dereferencing and gives value
    it += 2 ;   // ---> moves the pointer by 2 position
    cout << *(it) << endl;

    vector <int>::iterator it2 = v7.end(); // ---> points to the mem location ryt after the last element
    vector <int>::reverse_iterator rit = v7.rend(); // ---> rend() returns a reverse_iterator
    vector <int>::reverse_iterator rit2 = v7.rbegin(); 


    // Traversing thru vector elements
    for(vector <int> :: iterator it = v7.begin() ; it != v7.end() ; it++){
        cout << *it << " " ;
    }
    cout << endl << " shortcut for traversing" << endl;

    for(auto it = v7.begin(); it != v7.end() ; it++){   // auto keyword --> automatically deduces the datatype and assigned acc to the data
        cout << *it << "_";
    }
    cout << endl;
    for( auto it : v7){     // ---> automatically iterates over the vector
        cout << it << "  ";
    }
    cout << endl;

    //Deletion in a vector

    vector <int> v8 = {1,2,3,4,5,6,7,8,9,0};
    v8.erase(v8.begin()+1); // ---> erasing a single element
    for(auto it : v8){
        cout << it << " " ;
    }
    cout << endl;
    
    v8.erase(v8.begin(),v8.begin() + 3);    // ---> deleting a portion of the vector
    for(auto it : v8){
        cout << it << " " ;
    }
    cout << endl;
    


    //Insert function 
    vector <int> v9(2,100);
    v9.insert(v9.begin(),300) ; // ---> inserts the element ryt at the start ie {300,100,100}
    v9.insert(v9.begin()+1 , 2 , 10); // ---> inserts 2 10s after 300 ie {300,10,10,100,100}

    vector <int> copyV(2,50); // {50,50}
    v9.insert(v9.begin() ,copyV.begin(),copyV.end());   // {50,50,300,10,10,100,100}

    for(auto i : v9){
        cout << i << "  ";
    }
    cout << endl;

    
    //Some impt methods/functions in vector

    cout << "size of v9 = "<<v9.size() << endl; // .size() ---> returns the no of elements
    
    v9.pop_back();      // ---> removes element  from the back of  the vector
    for(auto i : v9){
        cout  << i << " ";
    }
    cout << endl;

    vector <int> v10 = {10,20};
    vector <int> v11(2,50);
    v10.swap(v11);      // ----> swaps the entire vector ie --> v10 = {50,50} and v11 = {10,20}
    
    v9.clear(); // ---> erases the entire vector

    cout << v9.empty() ;      // returs 1 ie true if the entire vector is empty



}