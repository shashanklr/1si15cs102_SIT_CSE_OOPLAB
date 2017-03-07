#include <iostream>
using namespace std;
class Parabola
{
	private:
		double a,b,c;
	public:
		void read_coeffs(void);
		double calc_area(double,double);
};

void Parabola :: read_coeffs(void)
{
    cout << "enter a,b,c" << endl;
    cin >> a >> b >> c;
}

double Parabola :: calc_area(double x1, double x2)
{
    double integral_result;

    integral_result = (a*x2*x2*x2/3 + b*x2*x2/2 +c*x2) - (a*x1*x1*x1/3 + b*x1*x1/2 +c*x1);
    return integral_result;
}

int main(void)
{
    double left_limit, right_limit, area;

    Parabola p1, p2;

    p1.read_coeffs();

    cout << "Enter the right and left limits for integration" << endl;
    cin >> left_limit >> right_limit;

    area = p1.calc_area(left_limit, right_limit);

    cout << "Area under the parabola is " << area << endl << endl;

    return 0;
}
