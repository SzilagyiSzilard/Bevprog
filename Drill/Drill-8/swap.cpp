#include "std_lib_facilities.h"

void feladat1();
void feladat2();
void feladat3();
void swap_r();
void swap_v();
//void swap_cr();

int main()
{
	feladat1();	

	feladat2();

	feladat3();

	return 0;
}

//nem jó , x és y értékeit használja , nem ad vissza nekik értéket , nem változik semmi . 
void swap_v(int a, int b)
{
	int temp;
	temp = a,
	a = b;
	b = temp;
}

//x és y referenciaként van beolvasva , így értékük változik , müködik. 
void swap_r(int& a, int& b)
{
	int temp;
	temp = a,
	a = b;
	b = temp;
}

//Nem jó x és y read-only-ba van beolvasva
/*
void swap_cr(const int& a, const int& b)
{
	int temp;
	temp = a,
	a = b;
	b = temp;
}
*/

void feladat1()
{
	int x = 7;
	int y = 9;
	cout << "x: " << x << '\n';
	cout << "y: " << y << '\n';

	//swap_r(x, y); 
	//swap_v(x, y); 
	//swap_cr(x, y); 

	//swap_r(7, 9); //swap_r-nek változók kellenek értékekel nem müködik nem tud mire hivatkozni a referencia
	//swap_v(7, 9); //még mindig semmi .
	//swap_cr(7, 9); //nem megy ez se konstans változót nem modosíthatunk 

	cout << "x: " << x << '\n';
	cout << "y: " << y << '\n';
}

void feladat2()
{
	const int cx = 7;
	const int cy = 9;
	cout << "cx: " << cx << '\n';
	cout << "cy: " << cy << '\n';

	//swap_r(cx,cy); // "error: binding reference of type ‘int&’ to ‘const int’ discards qualifiers".
	//swap_v(cx,cy); //nem megy mert konstansak a változók 
	//swap_cr(cx,cy); // konstans

	//swap_r(7.7,9.9); //nincs változó
	//swap_v(7.7,9.9); //továbra se történik semmi , de lefordul 
	//swap_cr(7.7,9.9); // nem ... továbra sem..

	cout << "cx: " << cx << '\n';
	cout << "cy: " << cy << '\n';
}

void feladat3()
{
	double dx = 7.7;
	double dy = 9.9;
	cout << "dx: " << dx << '\n';
	cout << "dy: " << dy << '\n';

	//swap_r(dx, dy);
	//swap_v(dx, dy);
	//swap_cr(dx, dy);
		//double - int nem keveredik :) 
	//swap_r(7.7, 9.9); //ugyan az mint 1-el fentebb
	//swap_v(7.7, 9.9); //ugyan az mint 1-el fentebb
	//swap_cr(7.7, 9.9); //ugyan az mint 1-el fentebb

	cout << "dx: " << dx << '\n';
	cout << "dy: " << dy << '\n';
}
