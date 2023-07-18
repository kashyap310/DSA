#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void updateOutput() {
    // Your code to continuously update the output goes here
    // For example, you can use a while loop to update and print content
    for (int i = 0; i < 10; i++) {
        cout << "Updating... " << i << flush; // Use flush to force immediate output
        this_thread::sleep_for(chrono::milliseconds(500));
        cout << "\r"; // Move the cursor to the beginning of the line
    }
}

int main() {
    updateOutput();
    cout << endl; // Move to the next line after the continuous update is finished
    return 0;
}
