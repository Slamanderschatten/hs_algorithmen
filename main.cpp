


#include "_MAIN.h"
#include "E_I/Collatz.h"
#include "E_II/E_II.h"
#include "E_II/TowersOfHanoi.h"
#include "E_III/E_III.h"





#define TASK 9








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
        TowersOfHanoi::move_r(4, 1, 3, 2);
        cout << endl << endl;

        cout << 1 << " => " << TowersOfHanoi::neededMoves(1);
        cout << endl;
        cout << 2 << " => " << TowersOfHanoi::neededMoves(2);
        cout << endl;
        cout << 3 << " => " << TowersOfHanoi::neededMoves(3);
        cout << endl;
        cout << 4 << " => " << TowersOfHanoi::neededMoves(4);
        cout << endl;
        cout << 5 << " => " << TowersOfHanoi::neededMoves(5);
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

#if TASK == 8 // Sum(1/n)...
    {
        cout << E_III::tVIII_r(1);
        cout << endl;
        cout << E_III::tVIII_r(3);
        cout << endl;
        cout << E_III::tVIII_r(5);
        cout << endl << endl << endl;
        cout << E_III::tVIII_i(1);
        cout << endl;
        cout << E_III::tVIII_i(3);
        cout << endl;
        cout << E_III::tVIII_i(5);
        cout << endl << endl << endl;
    }
#endif

#if TASK == 9 // PI
    {
        cout << 2 * E_III::piRecursive(200);
        cout << endl << endl << endl;
    }
#endif




    return 0;
}
