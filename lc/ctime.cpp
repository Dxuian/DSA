#include <iostream>
#include <chrono>

int main() {
    auto start_time = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000000; i++) {
        // do something
    }
    auto end_time = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);
    std::cout << duration.count() << std::endl;
    return 0;
}