//
//  main.cpp
//  NamesArray
//
//  Created by Parsa Faraji on 9/15/24.
//

#include <iostream>
using namespace std;

int main() {
    string arrayOfNames[3];
    string name1;
    string name2;
    string name3;
    
    cout << "Please enter name 1: " << endl;
    cin >> name1;
    
    cout << "Please enter name 2: " << endl;
    cin >> name2;
    
    cout << "Please enter name 3: " << endl;
    cin >> name3;
    
    arrayOfNames[0] = name1;
    arrayOfNames[1] = name2;
    arrayOfNames[2] = name3;
    
    cout << "Name 1: " << name1 << endl;
    

    return 0;
}
