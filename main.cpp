//
//  main.cpp
//  LinearSearch
//
//  Created by Teddy Engel on 18/02/2015.
//  Copyright (c) 2015 Teddy Engel. All rights reserved.
//

#include <vector>
#include <iostream>

#define NIL -1

int FindValue(const int& needle, std::vector<int>& haystack)
{
    int i;
    int foundIndex = NIL;
    
    for(i = 0; i != haystack.size(); i++)
    {
        if (haystack[i] == needle)
            foundIndex = i;
    }   
    return foundIndex;
}

void PrintVector(std::vector<int>& values)
{
    int i;
    
    for(i = 0; i != values.size(); i++)
    {
        std::cout << values[i] << std::endl;
    }
}

int main(int argc, const char * argv[]) {
    int searchValue = 3;
    int foundValue = NIL;
    std::vector<int> values = {10, 0, 2, 5, -4, 3, 2};
    
    std::cout << "Our collection is:" << std::endl;
    PrintVector(values);
    std::cout << "Looking for: " << searchValue << std::endl;
    foundValue = FindValue(searchValue, values);
    if (foundValue == NIL)
        std::cout << "Not found in collection" << std::endl;
    else
        std::cout << "Found in collection at position " << foundValue << std::endl;
    return 0;
}