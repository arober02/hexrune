#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;


template <typename T>
std::string to_string(T value)
{
    std::ostringstream os ;
    os << value ;
    return os.str() ;
}

// 2-dimensional vector class
class CVector2D {
  private:
  float x=0;
  float y=0;
  
  public:
  float getX() {
    return x;
  }
  
  float getY() {
    return y;
  }
  
  float getLength() {
    return sqrt(x*x + y*y);
  };
};

// Horizontally sitting regular hexagon shape class.
class CHexagonH {
  private:
  CVector2D center;
  
  public:
  string getCenter() {
  return "(" + to_string(center.getX()) + "," + to_string(center.getY()) + ")"; 
  };
  
  string getDistance() {
  return to_string(center.getLength()); 
  };
  
  string writeProperties(){
    return 
  };
};



int main(int argc,char* args[]) {
  CHexagonH myHex;
  
  cout << "Hexrune kickoff" <<endl<< "==============="<<endl;
  
  cout << "Hex position is: " << myHex.getCenter() << endl;
  cout << "Hex distance from origin is: " << myHex.getDistance() << endl;
  
  return 0;
}