cmake_minimum_required(VERSION 3.25)
project(programm)

set(CMAKE_CXX_STANDARD 17)

add_executable(programm main.cpp E_I/Collatz.cpp E_I/Collatz.h _MAIN.h E_II/E_II.cpp E_II/E_II.h E_II/TowersOfHanoi.cpp E_II/TowersOfHanoi.h E_III/E_III.cpp E_III/E_III.h)
