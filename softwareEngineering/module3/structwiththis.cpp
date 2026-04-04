#include <iostream>
using namespace std;

struct Rectangle
{
    int width,height;
    
    Rectangle(int width, int height)      
    {      
        this->width = width;      
        this->height = height;      
    }   
};


int main()
{
    struct Rectangle rec=Rectangle(8,5);
   
     cout<<"Area of Rectangle is: "<<(rec.width * rec.height)<<endl;    
    return 0;
}