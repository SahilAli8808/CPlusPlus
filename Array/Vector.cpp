#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> numbers;

    // Check if the vector is empty
    cout << "Is the vector empty? " << (numbers.empty() ? "Yes" : "No") << endl;

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Get the size of the vector
    cout << "Size of the vector: " << numbers.size() << endl;

    // Access elements using index
    cout << "First element: " << numbers.front() << endl;
    cout << "Last element: " << numbers.back() << endl;

    // Modify elements using index
    numbers[1] = 25;

    // Display vector elements using iterators
    cout << "Vector elements:";
    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        cout << " " << *it;
    }
    cout << endl;

    // Insert elements at a specific position
    numbers.insert(numbers.begin() + 1, 15);

    // Remove the last element
    numbers.pop_back();

    // Display modified vector elements using range-based for loop
    cout << "Modified vector elements:";
    for (int num : numbers) {
        cout << " " << num;
    }
    cout << endl;

    // Clear all elements from the vector
    numbers.clear();

    // Check if the vector is empty after clearing
    cout << "Is the vector empty after clearing? " << (numbers.empty() ? "Yes" : "No") << endl;

    return 0;
}
