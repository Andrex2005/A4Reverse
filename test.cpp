#include <iostream>
#include <cassert>
#include <string>
#include "reverse.hpp"

// Test 1: Integer Array 
void test_int_even() {
    int arr[] = {1, 2, 3, 4};
    reverse_array(arr, 4);
    assert(arr[0] == 4);
    assert(arr[3] == 1);
    std::cout << "Integer (Even) Test Passed!" << std::endl;
}

// Test 2: Double Array 
void test_double_odd() {
    double arr[] = {1.1, 2.2, 3.3};
    reverse_array(arr, 3);
    assert(arr[0] == 3.3);
    assert(arr[1] == 2.2); 
    assert(arr[2] == 1.1);
    std::cout << "Double (Odd) Test Passed!" << std::endl;
}

// Test 3: String Objects 
void test_strings() {
    std::string arr[] = {"Virginia", "Tech", "ECE"};
    reverse_array(arr, 3);
    assert(arr[0] == "ECE");
    assert(arr[2] == "Virginia");
    std::cout << "String Object Test Passed!" << std::endl;
}

// Test 4: Single Element 
void test_single() {
    int arr[] = {42};
    reverse_array(arr, 1);
    assert(arr[0] == 42);
    std::cout << "Single Element Test Passed!" << std::endl;
}

int main() {
    std::cout << "--- Starting Array Reversal Tests ---" << std::endl;
    test_int_even();
    test_double_odd();
    test_strings();
    test_single();
    std::cout << "--- ALL 4 TEST CASES PASSED ---" << std::endl;
    return 0;
}