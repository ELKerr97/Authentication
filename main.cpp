#include <iostream>
#include "User.h"
#include "UserDatabase.h"

int main() {
    UserDatabase userDatabase;
    bool running = true;
    bool loggedIn = false;
    while(running){
        int choice;

        if(loggedIn){

            std::cout << "1. Logout\n";
            std::cout << "2. Exit\n";
            std::cout << "Choose options 1 or 2: "; std::cin >> choice;
            if(choice != 1 && choice != 2){
                std::cout << "ERROR: Please choose options 1 or 2.\n";
            } else if (choice == 1){
                loggedIn = false;
            } else {
                running = false;
            }

        } else {
            std::cout << "1. Register New User\n";
            std::cout << "2. Login\n";
            std::cout << "3. Exit\n";
            std::cout << "Choose option 1, 2, or 3: "; std::cin >> choice;

            if(choice != 1 && choice != 2 && choice != 3){
                std::cout << "ERROR: Please choose options 1 or 2.\n";
            } else if (choice == 1){
                // register new user
                std::string username;
                std::string password;
                std::string firstName;
                std::string lastName;

                std::cout << "REGISTER USER\n" << "--------------------------\n";
                std::cout << "Username: "; std::cin >> username;
                std::cout << "Password: "; std::cin >> password;
                std::cout << "First Name: "; std::cin >> firstName;
                std::cout << "Last Name: "; std::cin >> lastName;

                userDatabase.registerUser(username, password, firstName, lastName);

            } else if (choice == 2){
                std::cout << "LOGIN USER\n" << "--------------------------\n";
                // login user
                std::string username;
                std::string password;
                std::cout << "Username: "; std::cin >> username;
                std::cout << "Password: "; std::cin >> password;
                loggedIn = userDatabase.loginUser(username, password);
            } else {
                // exit
                running = false;
            }
        }
    }

    return 0;
}
