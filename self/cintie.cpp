#include <iostream>

int main() {
    std::cout << "Enter an integer: ";
    std::cout.flush();  // Flushing cout
//     The flush manipulator forces the output to be written to the stream immediately.
//if the user enters \n or \t or any other character then in the first cin then the program immidiately flushes and the program ends 
// and the user is not able to enter the second input
//flushing means that the output is written to the stream immidiately and not stored in the buffer
//normally the output is stored in a buffer and when that buffer is full or 
//when the program ends then the output is written to the stream
// a new buffer starts/flushed when the program starts and the output is written to the buffer
//or when user types \n orr /t or any other character then the buffer is flushed and the output is written to the stream
//or the stream is explicity flushed using the flush manipulator that is cout.flush() or cin.flush()
//the flush manipulator forces the output to be written to the stream immidiately
//it will be stored in the buffer and will be printed when the buffer is full or when the program ends.
    int x;
    std::cin >> x;  // Reading input using cin

    std::cout << "Enter a character: ";
    char c;
    std::cin >> c;  // Reading input using cin

    std::cout << "Entered values: " << x << " and " << c << std::endl;  // Writing output using cout

    return 0;
}
