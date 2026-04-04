#include <iostream>
using namespace std;

class Box 
{
    private:
    int width;
    
    public:
    Box(int w)
    {
        width = w;
    }

    // Declare a global function as a friend
    friend void printWidth(Box box); 
};



void printWidth(Box box)
{
    cout << "Width of box: " << box.width << endl;
}


int main()
{
     Box myBox =Box(10);
     printWidth(myBox);    
    return 0;
}