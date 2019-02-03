#include <iostream>
#include <string>
#include <ctype.h>
#include <bits/stdc++.h> 

int main()
{
    std::string input;
    std::string input_rev;
    while(true) {
        std::cout << "Enter a word (lowercase only!): ";
        std::cin >> input;
        if(!std::all_of(input.begin(), input.end(), islower)) {
            std::cout << "Your string have a uppercase in it. Try again" << std::endl;
        } else {
            input_rev = input;
            reverse(input_rev.begin(), input_rev.end());
            if (input_rev == input) {
                std::cout << input << " is a palindrome!" << std::endl;
                std::cout << input << " backwards is " << input_rev << std::endl;
            } else {
                std::cout << input << " is not a palindrome!" << std::endl;
                std::cout << input << " backwards is " << input_rev << std::endl;
            }
        }
    }
}
