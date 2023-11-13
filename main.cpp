#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    problemSolution1(55);
    cout << "Problem 2\n";
    problemSolution2(89, 45, 111);
    cout << "Problem 3\n";
    problemSolution3('F', 165);
    cout << "Problem 4\n";
    problemSolution4("18:20:A3:22:F5");
    cout << "Problem 5\n";
    problemSolution5(1, '+', 2);
    return 0;
}