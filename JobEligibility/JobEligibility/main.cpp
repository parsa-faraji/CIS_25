//
//  main.cpp
//  Program conditions : To be eligible, the applicant must be a US citizen and should either have a bachelor's degree or at least two years of experience.
//
//  Created by Parsa Faraji on 9/15/24.
//

#include <iostream>
using namespace std;

int main() {
    bool isCitizen;
    bool hasBachelors;
    bool hasExperience;
    
    string answer;
    
    cout << "Answer the following questions to determine your eligibility: " << endl;
    
    cout << "Are you a US Citizen? (1-yes / 0-No):" << endl;
    cin >> answer;
    
    isCitizen = (answer == "1")? true : false;
    

    
    cout << "Do you have a Bachelor's degree? (1-yes / 0-No):" << endl;
    cin >> answer;
    
    hasBachelors = (answer == "1")? true : false;
   
    
    cout << "Do you have 2 years of experience? (1-yes / 0-No):" << endl;
    cin >> answer;
    
    hasExperience = (answer == "1")? true : false;
    
    if (isCitizen) {
        if (hasBachelors) {
            cout << "Congrats! You're eligible to apply" << endl;
        }
        else if (hasExperience) {
            cout << "Congrats! You're eligible to apply" << endl;
        }
        else
            cout << "Sorry. You're not eligible to apply" << endl;
    }
    else
        cout << "Sorry. You're not eligible to apply" << endl;
    
}
