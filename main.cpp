#include <iostream>
#include <string>
#include <vector>

#include "general/general.h"
#include "general/general.cpp"

int main()
{
    // Test
    General test1;
    cout << "Default: " << test1.getUsername() << ", Focus: " << test1.getFocus() << endl;

    vector<string> accountTypes = {"study", "career"};
    General test2("testuser1", accountTypes, "Math");
    cout << "Overloaded: " << test2.getUsername() << ", Focus: " << test2.getFocus() << endl;

    test1.shareFocus(test2);
    cout << "Shared. Test 1's Focus: " << test1.getFocus() << ", test 2's Focus: " << test2.getFocus() << endl;

    return 0;
}