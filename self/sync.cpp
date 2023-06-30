#include <iostream>
#include <cstdio>

int main() {
    std::ios::sync_with_stdio(false);  // Disable synchronization

    int x;

//this doesnt work on tihis compiler cuz the cin and cout are not synced with
// the c style printf and scanf and the result is non deterministic and random in nature and depends explicitly  on the compiler and 
// the environment 
    printf("Enter another number: ");
    std::cin >> x;  // Reading input using C++ stream (cin)

    printf("The sum of the numbers is: %d\n", (x + x));  // Writing output using C-style function (printf)

    return 0;
}
