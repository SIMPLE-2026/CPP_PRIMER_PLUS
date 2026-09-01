#include <iostream>
using namespace std;
const float KILOGRAM_TO_POUND = 2.2;
const int FOOT_TO_INCH = 12;
const float INCH_TO_METERS = 0.0254;

int main()
{
	int height_foot, height_inch;
	float weight_pound, height, weight, BMI;
	cout << "Enter your height foot:";
	cin >> height_foot;
	cout << "Enter ypour height inchs:";
	cin >> height_inch;
	cout << "Enter ypour weight in pounds:";
	cin >> weight_pound;
	height = (height_foot * FOOT_TO_INCH + height_inch) * INCH_TO_METERS;
	weight = weight_pound / KILOGRAM_TO_POUND;
	BMI = weight / (height * height);
	cout << "Your BMI is " << BMI << endl;
	return 0;
}