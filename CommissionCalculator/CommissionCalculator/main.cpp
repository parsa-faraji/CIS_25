//
//  main.cpp
//  CommissionCalculator
//
//  Created by Parsa Faraji on 9/15/24.
//

#include <iostream>
using namespace std;

int main() {
    int sales = 10'000;
    double commission;
    
    if (sales < 10'000)
        commission = .1;
    else if (sales < 15'000)
        commission = .15;
    else
        commission = .2;
    
    cout << "Commission according to sales: " << commission << endl;
    
    return 0;
}
