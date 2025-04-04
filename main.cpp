


#include "_MAIN.h"
#include "E_I/Collatz.h"
#include "E_II/E_II.h"
#include "E_II/TowersOfHanoi.h"





#define TASK 7








int main() {
    using namespace hs_a;


#if TASK == 1
    {
        Collatz::calc(27);
        cout << endl << endl;
        Collatz::calc(37);
        cout << endl << endl;
        Collatz::calc(42);
        cout << endl << endl;
    }
#endif

#if TASK == 4
    {
        //recursive
        cout << E_II::tIV_r(1);
        cout << endl;
        cout << E_II::tIV_r(2);
        cout << endl;
        cout << E_II::tIV_r(3);
        cout << endl;
        cout << E_II::tIV_r(4);
        cout << endl;
        cout << E_II::tIV_r(5);
        cout << endl << endl << endl;

        //iterative
        cout << E_II::tIV_i(1);
        cout << endl;
        cout << E_II::tIV_i(2);
        cout << endl;
        cout << E_II::tIV_i(3);
        cout << endl;
        cout << E_II::tIV_i(4);
        cout << endl;
        cout << E_II::tIV_i(5);
        cout << endl << endl << endl;


    }
#endif

#if TASK == 5
    {
        //recursive
        cout << E_II::tV_r(1);
        cout << endl;
        cout << E_II::tV_r(2);
        cout << endl;
        cout << E_II::tV_r(3);
        cout << endl;
        cout << E_II::tV_r(4);
        cout << endl;
        cout << E_II::tV_r(5);
        cout << endl << endl << endl;

        //iterative
        cout << E_II::tV_i(1);
        cout << endl;
        cout << E_II::tV_i(2);
        cout << endl;
        cout << E_II::tV_i(3);
        cout << endl;
        cout << E_II::tV_i(4);
        cout << endl;
        cout << E_II::tV_i(5);
        cout << endl << endl << endl;
    }
#endif

#if TASK == 6 //number of moves for towers of hanoi
    {
        cout << TowersOfHanoi::neededMoves(1);
        cout << endl;
        cout << TowersOfHanoi::neededMoves(2);
        cout << endl;
        cout << TowersOfHanoi::neededMoves(3);
        cout << endl;
        cout << TowersOfHanoi::neededMoves(4);
        cout << endl;
        cout << TowersOfHanoi::neededMoves(5);
        cout << endl << endl << endl;
    }
#endif

#if TASK == 7 //greatest common divisor
    {
        cout << E_II::tVII(9,15);
        cout << endl;
        cout << E_II::tVII(16,28);
        cout << endl;
        cout << E_II::tVII(119,544);
        cout << endl << endl << endl;
    }
#endif




    return 0;
}
