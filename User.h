//
// Created by Ethan L. Kerr on 1/2/23.
//

#include <string>

#ifndef AUTHENTICATION_USER_H
#define AUTHENTICATION_USER_H

class User {
private:
    std::string username;
    std::string password;
    std::string firstName;
    std::string lastName;
public:
    User(std::string& username, std::string& password, std::string& firstName,
         std::string& lastName){
        this->username = username;
        this->password = password;
        this->firstName = firstName;
        this->lastName = lastName;
    };

    std::string getUsername(){
        return username;
    }

    std::string getPassword(){
        return password;
    }

    std::string getFirstName(){
        return firstName;
    }

    std::string getLastName(){
        return lastName;
    }
};

#endif //AUTHENTICATION_USER_H
