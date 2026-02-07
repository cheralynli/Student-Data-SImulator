#include "grade_school.h"
#include <iostream>

int main() {
    // Create a school object
    grade_school::school my_school;
    
    std::cout << "=== Testing School Roster ===\n\n";
    
    // Test 1: Add students
    std::cout << "1. Adding students...\n";
    my_school.add("Jim", 2);
    my_school.add("Anna", 1);
    my_school.add("Barb", 1);
    my_school.add("Charlie", 1);
    my_school.add("Alex", 2);
    my_school.add("Zoe", 2);
    std::cout << "   Added 6 students.\n\n";
    
    // Test 2: Get students in grade 1
    std::cout << "2. Students in Grade 1:\n";
    auto grade1 = my_school.grade(1);
    std::cout << "   ";
    for (const auto& name : grade1) {
        std::cout << name << " ";
    }
    std::cout << "(Expected: Anna Barb Charlie)\n\n";
    
    // Test 3: Get students in grade 2
    std::cout << "3. Students in Grade 2:\n";
    auto grade2 = my_school.grade(2);
    std::cout << "   ";
    for (const auto& name : grade2) {
        std::cout << name << " ";
    }
    std::cout << "(Expected: Alex Jim Zoe)\n\n";
    
    // Test 4: Try to get non-existent grade
    std::cout << "4. Students in Grade 99 (doesn't exist):\n";
    auto grade99 = my_school.grade(99);
    std::cout << "   Found " << grade99.size() << " students.\n";
    std::cout << "   (Should be 0)\n\n";
    
    // Test 5: Get entire roster
    std::cout << "5. Entire School Roster:\n";
    auto all_students = my_school.roster();
    for (const auto& [grade, students] : all_students) {
        std::cout << "   Grade " << grade << ": ";
        for (const auto& name : students) {
            std::cout << name << " ";
        }
        std::cout << "\n";
    }
    
    std::cout << "\n=== All tests completed ===\n";
    
    return 0;
}