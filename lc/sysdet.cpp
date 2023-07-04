#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <thread>

using namespace std;

int main() {
    int num_threads = thread::hardware_concurrency();
    cout << "Number of concurrent threads supported: " << num_threads << endl;

    char* stack_min_str = getenv(" _SC_THREAD_STACK_SIZE");
    if (stack_min_str != NULL) {
        long stack_min = strtol(stack_min_str, NULL, 10);
        cout << "PTHREAD_STACK_MIN environment variable: " << stack_min << " bytes" << endl;
    } else {
        cout << "PTHREAD_STACK_MIN environment variable not set" << endl;
    }

    return 0;
}