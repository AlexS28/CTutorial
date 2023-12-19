//
// Created by schperberg on 12/18/23.
//
#include <iostream>
#include <string>

int addNumbers(int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

void tutorial3(){
    int first_number {3}; //Statement
    int second_number {1};
    std::cout<<"First number: " << first_number << std::endl;
    std::cout<<"Second number: " << second_number << std::endl;
    int sum = addNumbers(first_number, second_number);
    std::cout<<"Sum: " << sum << std::endl;

    //Data with spaces
    std::string full_name;
    int age3;

    std::cout << "Please type in your full name and age " << std::endl;

    //std::cin >> full_name;

    std::getline(std::cin,full_name);

    std::cin >> age3;

    std::cout << "Hello " << full_name
              << " you are " << age3 << " years old!" << std::endl;

    //error message
    std::cerr << "Error message : Something is wrong" << std::endl;
    std::clog << "Log message : Something happened" << std::endl;

    std::string name;

}