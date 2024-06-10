//
//  main.cpp
//  CGPA
//
//  Created by Alban Reci on 6/10/24.
//

#include "main.hpp"
#include <iostream>
using namespace std;

int main(){
    float Math, Science, English, History, Art, Gym, Computer, avg;
    
    Math = 3.3;
    Science = 3.2;
    English = 3.5;
    History = 3.6;
    Art = 3.8;
    Gym = 4.0;
    Computer = 3.5;
    
    avg = ((Math + Science + English + History + Art + Gym + Computer)/7);
    cout << "Your calculated Gpa is " << avg;
}
