//
// Created by Ethan L. Kerr on 1/2/23.
//

#ifndef AUTHENTICATION_USERDATABASE_H
#define AUTHENTICATION_USERDATABASE_H

#include <vector>
#include <string>
#include <algorithm>
#include "iostream"
#include "User.h"

class UserDatabase{
private:
    std::vector<User> users;
public:
    UserDatabase(){
        users.reserve(50);
    }
    void registerUser(std::string& username, std::string& password, std::string& firstName,
                 std::string& lastName){
        User newUser(username, password, firstName, lastName);
        users.push_back(newUser);
    }

    bool loginUser(std::string& username, std::string& password){
        for(int i = 0; i < users.size(); i++){
            if(users[i].getUsername() == username){
                if(users[i].getPassword() == password){
                    std::cout << "Login Success! \nNow logged in as " << users[i].getFirstName() <<
                    " " << users[i].getLastName() << std::endl;
                    return true;
                } else {
                    std::cout << "Login Failed. Incorrect Username or Password.\n";
                    return false;
                }
            }
        }
        std::cout << "Login Failed. Incorrect Username or Password.\n";
        return false;
    }

};

#endif //AUTHENTICATION_USERDATABASE_H
