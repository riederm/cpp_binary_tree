#ifndef DATA_H
#define DATA_H

#include <memory>   // For std::unique_ptr
#include <iostream> // For std::cout and std::endl

class Data
{
public:
    int key;

    Data(int k) : key(k) {}
    ~Data()
    {

        std::cout << "deleting: " << key << std::endl;
    }
};

#endif // DATA_H