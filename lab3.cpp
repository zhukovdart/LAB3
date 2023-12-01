#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;
float x, y;
int c;
string s;
double z(double x)
{
	double y;
	if (x<=-6)
		{
			y = 1 ;
		}
		else if (x>-6 && x<=-4)
		{
			y = -0.5*x-2;
		}
		else if (x>-4 && x<=0)
		{
			y = sqrt(4-pow((x+2),2));
		}
		else if (x>0 && x<2)
		{
			y = -sqrt(1-pow((x-1),2));
		}
		else if (x>=2)
		{
			y = -x+2;
		}
	return y;
};

int main()
{
   
    ofstream prout("text2.txt");

    x = -7;
    c = 3;
    for (x; x < 10; x++)
    {
        prout << c << " ";
        c++;
        y = z(x);
        prout << y << "\n";
    }
    prout.close();
    ifstream prin("text2.txt");
    while (getline(prin, s))
    {
        cout << s;
        cout << "\n";
    };
    prin.close();
}
