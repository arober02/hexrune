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
class Vector2D {
  private:
  float v[2];
  
  public:
  Vector2D() {
    v[0]=0;
    v[1]=0;
  }
  
  Vector2D(float x,float y) {
    v[0] = x;
    v[1] = y;
  }

  Vector2D(float vector[]) {
    v[0]=vector[0];
    v[1]=vector[1];
  }
  
  
  float getX() {
    return v[0];
  }
  
  void setX(float value) {
    v[0]=value;
  }
  
  float getY() {
    return v[1];
  }

  void setY(float value) {
    v[1]=value;
  }
  
  float* getCoordinates() {
    return v;
  }
  
  void setCoordinates(float vector[]) {
    v[0] = vector[0];
    v[1] = vector[1];
  }
  
  Vector2D operator+(Vector2D& vector) {
    Vector2D vectorResult(vector.getCoordinates());
    
    vectorResult.setX(vectorResult.getX() + this->v[0]);
    vectorResult.setY(vectorResult.getY() + this->v[1]);
    return vectorResult;
  }
  
  float getLength() {
    return sqrt(getX()*getX() + getY()*getY());
  };
  
  string tostring() {
    return "[" + to_string(getX()) + "," + to_string(getY()) + "] : length " + to_string(getLength()); 
  };
};

// Horizontally sitting regular hexagon shape class.
class HexagonH {
  private:
  Vector2D center(0,0);
  static float vOffset = 0.86602540378443864676372317075294; // Sqrt(3)/2
  static float hOffset = 0.5;

  public:
  Vector2D getCenter() {
  return center;
  };
  
  Vector2D getVertex(int i) {
	  Vector2D vi([2 * hOffset, vOffset]);
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
  HexagonH myHex;
  float v1[2];
  v1[0]=1;
  v1[1]=2;
  Vector2D myVector1(v1), myVector2;
  
  cout << "Hexrune kickoff" <<endl<< "==============="<<endl;
  cout << myHex.tostring();
  
  cout << myVector1.tostring();
  return 0;
}