#include <iostream>

struct Friend
{

    std::string name;
    int days;
    
};

int main(){

    int n;
    Friend friends;
    // generation of a new type of variable called friend made by the fields: name and days
    std::cout << "please insert the number of friends you want to add" << std::endl;
    std::cin >> n;
    Friend* p_friends;
    p_friends = new Friend[n];

    for (int i = 0; i < n; i++){

        std::cout << "insert name of the " << i + 1 << "-th friend" << std::endl;
        std::cin >> p_friends[i].name;
        std::cout << "insert how many days ago you talked to " << p_friends[i].name << std::endl;
        std::cin >> p_friends[i].days;

    }

    enum Order{
        AZ,
        ZA,
        new_first,
        old_first,
    };


    for (int i = 0; i < n; i++){

        std::cout << p_friends[i].name << " was last seen " << p_friends[i].days << " days ago" << std::endl;

    };


}