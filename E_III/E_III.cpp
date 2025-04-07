//
// Created on 07.04.2025.
//

#include "E_III.h"

namespace hs_a {




    /******************************************************/
    /************* private *******************************/
    /****************************************************/






    /******************************************************/
    /************* public ********************************/
    /****************************************************/


    double E_III::tVIII_r(unsigned int n) {
        if(n == 0)
            return 0;

        return 1.0 / n + tVIII_r(n - 1);
    }


    double E_III::tVIII_i(unsigned int n) {
        double sum = 1;
        for(int i = 2; i <= n; i++) {
            sum += 1.0/i;
        }
        return sum;
    }


    double E_III::piRecursive(const unsigned int n, const unsigned int i) {
        double res = 2.0;
        if(i != 0)
            res = 1 + (i / (i * 2.0 + 1.0));

        if(i == n)
            return res;
        else
            return res * piRecursive(n, i + 1);
    }






} // hs_a