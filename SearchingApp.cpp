#include <iostream>
#include "Searching.cpp"  // Include Searching.cpp to use its functions

int main() {
    std::vector<int> vec = { 10, 20, 30, 30, 30, 40, 50, 60, 70, 70 }; // Already sorted
    int target;
    std::cout << "Enter the value of target: ";
    std::cin >> target;

    // Test binarySearch for vector
    int index = binarySearch(vec, target);
    if (index != -1) {
        std::cout << "Binary search. Element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search. Element not found in the vector." << std::endl;
    }

    // Test binarySearchFirst for vector
    index = binarySearchFirst(vec, target);
    if (index != -1) {
        std::cout << "Binary search (first). Element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search (first). Element not found in the vector." << std::endl;
    }

    // Test linearSearch for vector
    index = linearSearch(vec, target);
    if (index != -1) {
        std::cout << "Linear search. Element found at index: " << index << std::endl;
    } else {
        std::cout << "Linear search. Element not found in the vector." << std::endl;
    }

    // Create std::array for testing
    std::array<int, 10> arr = { 10, 20, 30, 30, 30, 40, 50, 60, 70, 70 };

    // Test binarySearch for array
    index = binarySearch(arr, target);
    if (index != -1) {
        std::cout << "Binary search. Element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search. Element not found in the array." << std::endl;
    }

    // Test binarySearchFirst for array
    index = binarySearchFirst(arr, target);
    if (index != -1) {
        std::cout << "Binary search (first). Element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search (first). Element not found in the array." << std::endl;
    }

    // Test linearSearch for array
    index = linearSearch(arr, target);
    if (index != -1) {
        std::cout << "Linear search. Element found at index: " << index << std::endl;
    } else {
        std::cout << "Linear search. Element not found in the array." << std::endl;
    }

    return 0;
}
