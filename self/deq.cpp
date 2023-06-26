#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers(5, 0);  // Initialize vector with 5 elements, all set to 0

    // Display initial vector
    std::cout << "Initial vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Erase elements from index 1 to 4
    numbers.erase(numbers.begin() + 1, numbers.begin() + 5);

    // Display resulting vector
    std::cout << "Resulting vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
