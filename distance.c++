// Calculating the distance of two points given the latitude and longitude
#include <iostream>
# include <cmath>
using namespace std;
// class to define the values of longitude and latitude of the two points in the map
class Distance
{
public:
    // Enter the two value of the two places on the map
    void point_A()
    {
        cout << "Enter the latitude of Point A: " << endl;
        cin >> latitude_A;
        cout << "Enter the Longitude of Point A: " << endl;
        cin >> longitude_A;
        cout << "Enter the latitude of Point B: " << endl;
        cin >> latitude_B;
        cout << "Enter the longitude of Point B: " << endl;
        cin >> longitude_B ;

    }
    // function to display the answer
    void displayAnswer()
    {
        cout << "The Distance between the two points is: " << getDistance() << " Kilometers";
    }
// function to calculate the distance using trigonometry
private:
    double longitude_A, latitude_A, longitude_B, latitude_B;
    double getDistance() const
    {
        return 6371.01 * acos(sin(latitude_A) * sin(latitude_B) +
                              cos(latitude_A) * cos(latitude_B)
                              * cos(longitude_B - longitude_A));
    }

};
// main function that calls the class function
int main() {

    // instantiate the class with an object
    Distance points_distance;
    // call the first method in the class
    points_distance.point_A();
    // call the second method in the class
    points_distance.displayAnswer();
    cin.get();

    return 0;
}
