//
//  main.cpp
//  FixCode
//
//  Created by Parsa Faraji on 9/15/24.
//

#include <iostream>
using namespace std;

int main (){
    int x=10;
    int y=3;
    // we just need to cast x or y to double
    double z= x/static_cast<double>(y);
    cout << z << endl;

    return 0;
}
