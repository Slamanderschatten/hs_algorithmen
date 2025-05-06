//
// Created on 06.05.2025.
//

#pragma once

#include "../_MAIN.h"
#include "Stack.h"

namespace hs_a {

    class Calculator {
    private:
        unordered_map<char, uint8_t> calcSymbols;
        Stack<long long> sValues;
        Stack<char> sOperator;


        long long calcTopOfStacks();

    public:

        Calculator();
        long long calc(string s);


    };

} // hs_a
