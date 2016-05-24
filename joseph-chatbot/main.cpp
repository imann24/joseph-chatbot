//
//  main.cpp
//  joseph-chatbot
//
//  Created by imann24 on 10/1/15.
//  Copyright © 2015 imann24. All rights reserved.
//

#include <iostream>
using namespace std;

enum Mood {HAPPY, SAD, NEUTRAL, ANGRY};


string getPunctuation (Mood currentMood) {
    if (currentMood == HAPPY) {
        return "!";
    } else if (currentMood == SAD) {
        return "...";
    } else if (currentMood == ANGRY) {
        return "!!!";
    } else if (currentMood == NEUTRAL) {
        return ".";
    } else {
        return ".";
    }
}



bool sayingGoodbye (string input) {
    return input == "bye";
}


int main(int argc, const char * argv[]) {
    string name;
    
    Mood currentMood = ANGRY;
    
    // insert code here...
    cout << "Hello, I'm Joseph, what's your name?\n";
    
    // Find out how to read in a multiword strings C++
    cin >> name;
    
    cout << name + " is a great name" + getPunctuation(currentMood) + " Tell me a little more about yourself"<< endl;

    string input = "";
    
    while (!sayingGoodbye(input)) {
        cin >> input;
        
        if (sayingGoodbye(input)) {
            cout << "It's been good talking. See you" << endl;
        } else {
            cout << input + " sounds so interesting. Tell me more or type 'bye' to exit" << endl;
        }
    }
    
    return 0;
}
