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
  
  string tostring() {
    return "[" + to_string(getX()) + "," + to_string(getY()) + "]"; 
  };
};

// Horizontally sitting regular hexagon shape class.
class CHexagonH {
  private:
  CVector2D center;
  
  public:
  CVector2D getCenter() {
  return center;
  };
  
  float getDistance() {
  return center.getLength(); 
  };
  
  string tostring(){
    std::ostringstream os ;
    os << "Hex position is: " << getCenter().tostring() << endl;
    os << "Hex distance from origin is: " << getDistance() << endl;
    return os.str() ;
  };
};



int main(int argc,char* args[]) {
  CHexagonH myHex;
  
  cout << "Hexrune kickoff" <<endl<< "==============="<<endl;
  cout << myHex.tostring();  
  return 0;
}