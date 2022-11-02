#include <iostream>
#include "submission.h"

int main()
{
    //TEST YOUR CODE HERE BY CALLING THE FUNCTION
    // Test Scenarios
    // sample_input1.txt ---> output = 1
    std::cout << count("sample_input1.txt") << std::endl;

    // sample_input2.txt ---> output = 1
    std::cout << count("sample_input2.txt") << std::endl;

    // sample_input3.txt ---> output = 0
    std::cout << count("sample_input3.txt") << std::endl;

    return 0;
}
