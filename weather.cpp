#include <iostream>
using namespace std;

class Weather_station
{
	int wind_speed;

	public:
		Weather_station(int);
		void print_wind_speed();
};

Weather_station :: Weather_station(int wind_speed_var)
                :wind_speed (wind_speed_var)
{
	cout << "Constructor executed" << endl;
}

void Weather_station :: print_wind_speed()
{
	cout << "Wind speed = " << wind_speed << endl;
}

int main()
{
	Weather_station station1(5), station2(20);

	station1.print_wind_speed();
	station2.print_wind_speed();


	return 0;
}

