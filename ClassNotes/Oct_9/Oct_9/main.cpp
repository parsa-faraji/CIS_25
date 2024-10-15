//
//  main.cpp
//  Oct_9
//
//  Created by Parsa Faraji on 10/9/24.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // heap(free store)
    int* numbers= new int[5];
    int entries= 0;
    
    while(true) {
        cout << "number: " << endl;
        cin >> numbers[entries];
        if (cin.fail())
            break;
        entries++;
        // To be Continued
        // if(entries == 5)
        //  int* temp=
    }
    
    for(int i =0; i < entries; i++) {
        cout << numbers[i] << endl;
    }
}
