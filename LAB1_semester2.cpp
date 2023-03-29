﻿#include <iomanip>
#include <vector>
#include <iostream>
#include <string>

#include "strings_algorithms.h"

using namespace std;

int main()
{
    for (auto el : string_algorithms::task7(
        { 3, 4, 8, 4, 0, 9, 1, 2, 8, 3, 0, 2, 1 },
        { 3, 8, 9, 0, 2, 4, 8, 3, 0, 2, 9, 4, 8 }
    )) cout << el << " ";
}