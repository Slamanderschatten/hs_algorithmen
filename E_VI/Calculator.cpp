//
// Created on 06.05.2025.
//

#include "Calculator.h"

namespace hs_a {




    /******************************************************/
    /************* private *******************************/
    /****************************************************/


    long long Calculator::calcTopOfStacks() {
        long long right = sValues.pop();
        long long left = sValues.pop();
        long long result;
        switch (sOperator.pop()) {
            case '+':
                result = left + right;
                break;
            case '-':
                result = left - right;
                break;
            case '*':
                result = left * right;
                break;
            case '/':
                result = left / right;
                break;
        }
        sValues.push(result);
    }






    /******************************************************/
    /************* public ********************************/
    /****************************************************/


    Calculator::Calculator() {
        calcSymbols.emplace('(', 0);
        calcSymbols.emplace(')', 0);
        calcSymbols.emplace('*', 1);
        calcSymbols.emplace('/', 1);
        calcSymbols.emplace('+', 2);
        calcSymbols.emplace('-', 2);
    }


    long long Calculator::calc(string calc) {
        sValues.clear();
        sOperator.clear();
        char startOperator = '(';
        sOperator.push(startOperator);
        calc.append(")");

        long long lastPos = -1;
        for(size_t i = 0; i < calc.size(); i++) {
            char sym  = calc[i];
            auto priorityIt = calcSymbols.find(sym);
            if(priorityIt != calcSymbols.end()) {

                //take value
                if(i - lastPos > 1) {
                    long long val = stoll(calc.substr(lastPos + 1, i - lastPos - 1));
                    sValues.push(val);
                }
                lastPos = i;

                if(sOperator.top() == '(') {
                    sOperator.push(sym);
                }
                else if(sym == ')') {
                    while(sOperator.top() != '(') {
                        calcTopOfStacks();
                    }
                    sOperator.pop();
                }
                else if(priorityIt->second < calcSymbols[sOperator.top()]) {
                    sOperator.push(sym);
                }
                else {
                    calcTopOfStacks();
                    if(priorityIt->second >= calcSymbols[sOperator.top()]) {
                        calcTopOfStacks();
                    }
                    sOperator.push(sym);
                }
            }
        }
        return sValues.pop();
    }







} // hs_a