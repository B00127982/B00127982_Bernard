#include <iostream>

#define pi 3.14159265358979323846264338327950

using namespace std;

int getCircleArea(int a);

// Base class
class Shape
{
public:
   // pure virtual function providing interface framework.
   virtual int getArea() = 0;
   void setWidth(int w)
   {
      width = w;
   }
   void setHeight(int h)
   {
      height = h;
   }
protected:
   int width;
   int height;
};

class Triangle: public Shape
{
public:
   int getArea()
   {
      return (width * height)/2;
   }

};

int main(void)
{
   Triangle  Tri;

   int userinput = 0;

   Tri.setWidth(5);
   Tri.setHeight(7);
   // Print the area of the object.
   cout << "Total Triangle area: " << Tri.getArea() << endl;
   
   cout << "Input the radius of the circle" << endl;

   cin >> userinput;
   
   cout << "The area is " <<getCircleArea(userinput) << endl;

   system("pause");

   return 0;
}

int getCircleArea(int userinput)
{
	int radius = userinput;
	return (pi * (radius*radius));
};
