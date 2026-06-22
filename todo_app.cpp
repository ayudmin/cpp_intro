#include <iostream>
#include <vector>
#include <string>

int main() {
    // This is our list of tasks (a vector is just a list that can grow)
    std::vector<std::string> todoList;
    std::string userChoice;

    while (true) {
        // 1. Print the menu options to the screen
        std::cout << "\n=== TO-DO LIST ===\n";
        std::cout << "1. See all tasks\n";
        std::cout << "2. Add a new task\n";
        std::cout << "3. Delete a task\n";
        std::cout << "4. Exit program\n";
        std::cout << "Enter a number (1-4): ";

        // 2. Get the user's choice
        std::getline(std::cin, userChoice);

        // Option 1: See all tasks
        if (userChoice == "1") {
            if (todoList.empty()) {
                std::cout << "\nYour list is empty! 🎉\n";
            } else {
                std::cout << "\n--- Your Current Tasks ---\n";
                // Loop through the list and print each item with a number
                for (size_t i = 0; i < todoList.size(); i++) {
                    std::cout << i + 1 << ". " << todoList[i] << "\n";
                }
            }
        }
        // Option 2: Add a new task
        else if (userChoice == "2") {
            std::cout << "Type your task and press Enter: ";
            std::string newTask;
            std::getline(std::cin, newTask);

            // This adds the new text to the end of our list
            todoList.push_back(newTask);
            std::cout << "Added!\n";
        }
        // Option 3: Delete a task
        else if (userChoice == "3") {
            if (todoList.empty()) {
                std::cout << "\nNothing to delete.\n";
            } else {
                std::cout << "Enter the task number to delete: ";
                std::string inputNumber;
                std::getline(std::cin, inputNumber);

                // Convert the text number into a real math number
                int taskNumber = std::stoi(inputNumber);

                // Computers start counting at 0, humans start at 1.
                // So, we subtract 1 to find the right item.
                int computerIndex = taskNumber - 1;

                // Check if the number typed actually exists in our list
                if (computerIndex >= 0 && computerIndex < todoList.size()) {
                    todoList.erase(todoList.begin() + computerIndex);
                    std::cout << "Deleted successfully!\n";
                } else {
                    std::cout << "Invalid task number!\n";
                }
            }
        }
        // Option 4: Exit the program
        else if (userChoice == "4") {
            std::cout << "Goodbye!\n";
            break; // This breaks out of the loop and closes the program
        }
        // If the user types anything else (like "hello" or "7")
        else {
            std::cout << "Invalid choice. Please type 1, 2, 3, or 4.\n";
        }
    }

    return 0;
}
