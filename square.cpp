#include <iostream>
using namespace std;

// Beatrix House

// FILL IN THE CODE TO DECLARE A CLASS CALLED Square.  TO DO THIS SEE
// THE IMPLEMENTATION SECTION.
class Square
{
    
private:
	float side;

public:
    // Constructors
    Square ();
    Square (float length);
   
   // Destructor
   ~Square();
   
    void setSide(float length);
    float findArea() const;
    float findPerimeter() const;
    
    Square::Square(float side)
    {
        side = 1;
        
    }
    
    Square::Square(float theSide)
    {
        theSide = side;
        
    }
    
    Square::~Square(){}
	
};

int main()
{
    Square box;          // box is defined as an object of the Square class
    Square box1(9);
    
    float size;         // size contains the length of a side of the square  

   // FILL IN THE CLIENT CODE THAT WILL ASK THE USER FOR THE LENGTH OF THE SIDE 
   // OF THE SQUARE.  (This is stored in size)
   cout << "What is the length of the side of the square?" << endl;
   cin >> size;
	
   // FILL IN THE CODE THAT CALLS SetSide.
   box.setSide(size);
   
   // Box Info
   cout << "The area of the square is " << box.findArea() << "." << endl;
   cout << "The perimeter of the square is " << box.findPerimeter() << "." << endl;
   
   // Box1 Info
   box1.setSide(size);
   cout << "The area of box1 is " << box1.findArea() << "." << endl;
   cout << "The perimeter of box1 is " << box1.findPerimeter() << "." << endl;

	return 0;
};

//__________________________________________________________________
//Implementation section     Member function implementation

// void Square::Square()
// {
//     side = 1;
// };

// void Square::Square(float theSide)
// {
//     theSide = side;
// };

// void Square::~Square() {}

//**************************************************
//                  setSide
//
// task:    This procedure takes the length of a side and
//          places it in the appropriate member data
// data in: length of a side
//***************************************************

void Square::setSide(float length)
 
{
   side = length;	
};
//**************************************************
//                 findArea
//
// task:    This finds the area of a square
// data in: none (uses value of data member side)
// data returned:  area of square
//***************************************************

float Square::findArea() const
{
   return side * side;
};
//**************************************************
//                 findPerimeter
//
// task:    This finds the perimeter of a square
// data in: none (uses value of data member side)
// data returned:  perimeter of square
//***************************************************	
float Square::findPerimeter() const
{
   return 4 * side;
};
