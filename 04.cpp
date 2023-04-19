#include <iostream>
#include <string>

class TPen {
   private:
   std::string FColor;
   public:
   std::string getColor();
   void setColor(std::string newColor);
};


void TPen::setColor(std::string newColor) {
   FColor = newColor;
}

std::string TPen::getColor() {
   return FColor;
}

int main() {
   using namespace std;
   string redColor = "FF0000";
   TPen pen;
   pen.setColor(redColor);
  //cout << std::pen.FColor << endl;
  cout << "Color of pen is " << pen.getColor() << endl;
}
