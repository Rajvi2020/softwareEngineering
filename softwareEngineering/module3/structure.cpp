#include <iostream>
using namespace std;

struct Rectangle
{
    int width,height;
    
    Rectangle(int w, int h)      
    {      
        width = w;      
        height = h;      
    }   
};


int main()
{
    struct Rectangle 
    rec=Rectangle(8,5);
   
     cout<<"Area of Rectangle is: "<<(rec.width * rec.height)<<endl;    
    return 0;
}