#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int original;
    cin >> original;
    int n = original ;
    vector<int> v;
    while (n > 0)
    {
        int r = n % 10;
        v.push_back(r);
        n /= 10;
    }
    int digits = v.size();
    int armNum = 0;
    for (int i = 0; i < digits; i++)
    {

        int power = 1;
    
        for (int j = 0; j < digits; j++)
        {
            power *= v[i];
        }

        armNum += power;
    }
    cout << "armNum = " << armNum << endl;

    if(armNum == original){
        cout << "Armstrong";
    }else{
        cout << "Not Armstrong";
    }
}