//
// Created on 04.04.2025.
//

#include "TowersOfHanoi.h"

namespace hs_a {




    /******************************************************/
    /************* private *******************************/
    /****************************************************/






    /******************************************************/
    /************* public ********************************/
    /****************************************************/


    int TowersOfHanoi::neededMoves(int numberOfRings) {
        if(numberOfRings < 1)
            return 0;
        int lastResult = 0;
        for(int i = 0; i < numberOfRings; i++) {
            lastResult = lastResult * 2 + 1;
        }
        return lastResult;
    }







} // hs_a