#include <iostream>
#include <string>
using namespace std;




//abstract base class

class Shape
{

protected:

	string name;
	string color;

public:

	Shape(string s, string c) { name = s; color = c; }
	
	void setName(string s) { name = s; }

	string getName() { return name; }

	//pure virtual function
	virtual double getArea() = 0;

};



//first child class

class Circle :public Shape
{

	double radius;

public:

	Circle(string n,string c, double r) : Shape(n,c)
	{
		radius = r;
	}

	void setRadius(double r) { radius = r; }
	double getRadius() { return radius; }

	virtual double getArea()
	{
		return 3.1416 * radius * radius;
	}
	virtual int getperimeter()
	{
		int d = 20;
		return radius + d;
	}

};


//second child class

class Rectangle : public Shape
{
private:
	double length, width;

public:
	Rectangle(string n,string c, double l, double w) :Shape(n,c)
	{
		length = l;
		width = w;
	}


	void setLength(double l) { length = l; }
	void setWidth(double w) { width = w; }
	double getLength() { return length; }
	double getWidth() { return width; }

	virtual double getArea()
	{
		return length * width;
	}
	virtual int getperimeter()
	{
		return 2 * (length * width);
	}



};

//Third Child class
class Triangle : public Shape
{

private:
	double base, height;


public:


	Triangle(string n,string c, double b, double h) :Shape(n,c)
	{
		base = b;
		height = h;
	}

	void setBase(double b) { base = b; }
	void setHeight(double h) { height = h; }
	double getBase() { return base; }
	double getHeight() { return height; }

	virtual double getArea()
	{
		return (base*height) / 2;
	}
	virtual int getperimeter()
	{
		return 2 * (base * height);
	}

};

//Fourth Child class
class Trapezoid : public Shape
{
private:
	double base, base1, height;

	Trapezoid(string n, string c, double b, double b1, double h) :Shape(n,c)
	{
		base = b;
		base1 = b1;
		height = h;
	}
	void setbase(double b) { base = b; }
	void setbase1(double b1) { base1 = b1; }
	void setheight(double h) { height = h; }
	double getbase() { return base; }
	double getbase1() { return base1; }
	double getheight() { return height; }

	virtual double getArea()
	{
		return (base + base1) / 2 * height;
	}
	

};





int main()
{


	//Shape s("Square");
	//cout << s.getName()<<endl;


	Circle c("Circle","purple", 3.1);
	c.setName("Circle Two");
	cout << c.getName() << endl;
	cout << c.getRadius() << endl;
	cout << c.getArea() << endl;
	cout << c.getperimeter() << endl;


	Rectangle r("Rectangle","green", 4.2, 2.5);
	cout << r.getName() << endl;
	cout << r.getWidth() << endl;
	cout << r.getLength() << endl;
	cout << r.getArea() << endl;
	cout << r.getperimeter() << endl;

	Triangle t("Triangle","red", 4.1, 2.3);
	cout << t.getName() << endl;
	cout << t.getBase() << endl;
	cout << t.getHeight() << endl;
	cout << t.getArea() << endl;
	cout << t.getperimeter() << endl;

	Trapezoid t1("trapezoid","blue", 6.0, 5.5, 2.3);
	cout << t1.getName() << endl;
	cout << t1.getbase() << endl;
	cout << t1.getbase1() << endl;
	cout << t1.getArea() << endl;
	cout << t1.getperimeter() << endl;



	system("pause");
	return 0;
}
