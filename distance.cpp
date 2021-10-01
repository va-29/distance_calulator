#include <iostream>
#include <cmath>
using namespace std;
class Distance
{
    private:
    int feet,inches;
    public:
    void setFeet(int feet)
    {
         this->feet=feet;
    }
    void setInches(int inches)
    {
        this->inches=inches;
    }
    int setFeet()
    {
        return this->feet;
    }
    int setInches()
    {
        return this->inches;
    }
    Distance operator+(const Distance &d) {
       Distance temp;
       int x;
       temp.feet=feet+d.feet;
       temp.inches=inches+d.inches;
       if(temp.inches>=12)
       {
           x=temp.inches/12;
           temp.feet=temp.feet+x;
           temp.inches=temp.inches-12;
       }
       return temp;
      }
      void display()
      {
           cout<<"The sum of two Distance is";
           cout<<endl<<"Feet:"<<feet;
           cout<<endl<<"Inches:"<<inches;
      }
};
 int main()
{
    int feet,inches;
    Distance d,d1,d2;
    cout<<"Enter feet and inches of distance 1:"<<endl;
    cin>>feet;
    cin>>inches;
    d1.setFeet(feet);
    d1.setInches(inches);
    cout<<"Enter feet and inches of distance 2:"<<endl;
    cin>>feet;
    cin>>inches;
    d2.setFeet(feet);
    d2.setInches(inches);
    d=d1+d2;
    d.display();
    return 0;
}     





