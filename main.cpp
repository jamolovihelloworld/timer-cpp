#include <iostream>
#include <chrono>
#include <thread>
int main() {
    std::cout << "Timer started...\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "3 seconds passed!\n";
    return 0;
}
