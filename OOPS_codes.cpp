//OOPS

//Constructor (default, parameterised, copy constructor)
//Method Overloading
//Method Overriding
//Inheritance
//Abstract Class


#include <iostream>
using namespace std;

void print(int i) {
cout << " Here is int " << i << endl;
}
void print(double f) {
cout << " Here is float " << f << endl;
}
void print(char const *c) {
cout << " Here is char* " << c << endl;
}

int main() {
print(10);
print(10.10);
print("ten");
return 0;
}



#include<iostream>
using namespace std;

class Complex {
private:
	int real, imag;
public:
	Complex(int r = 0, int i =0) {real = r; imag = i;}
	
	// This is automatically called when '+' is used with
	// between two Complex objects
	Complex operator + (Complex const &obj) {
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	void print() { cout << real << " + i" << imag << endl; }
};

int main()
{
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 + c2; // An example call to "operator+"
	c3.print();
}







// Cpp program to illustrate the
// concept of Constructors
#include <iostream>
using namespace std;

class construct
{
public:
	int a, b;

	// Default Constructor
	construct()
	{
		a = 10;
		b = 20;
	}
};

int main()
{
	// Default constructor called automatically
	// when the object is created
	construct c;
	cout << "a: " << c.a << endl
		<< "b: " << c.b;
	return 1;
}



// CPP program to illustrate
// parameterized constructors
#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;

public:
	// Parameterized Constructor
	Point(int x1, int y1)
	{
		x = x1;
		y = y1;
	}

	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
};

int main()
{
	// Constructor called
	Point p1(10, 15);

	// Access values assigned by constructor
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();

	return 0;
}



#include<iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int x1, int y1) { x = x1; y = y1; }

	// Copy constructor
	Point(const Point &p1) {x = p1.x; y = p1.y; }

	int getX()		 { return x; }
	int getY()		 { return y; }
};

int main()
{
	Point p1(10, 15); // Normal constructor is called here
	Point p2 = p1; // Copy constructor is called here

	// Let us access values assigned by constructors
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
	cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();

	return 0;
}





//Object and class
#include<iostream>
using namespace std;
class demo
{
private:
int cx,cy;
public :
void input_data(int x,int y)
{
cx=x;
cy=y;
}
void show_data( )
{
 cout<<"cx="<<cx<<"cy="<<cy<<endl;

};
int main( )
{
demo d1;
d1.input_data(10,20);
d1.show_data( );
return 0;
}




#include <iostream>
using namespace std;
// class definition
class Circle
{
public:
double radius;
double compute_area()
{
return 3.14*radius*radius;
}
};
// main function
int main()
{
Circle obj;
// accessing public data member outside class
obj.radius = 5.5;
cout <<"Radius is:"<<obj.radius<<endl;
cout <<"Area is:"<<obj.compute_area();
return 0;
}



// C++ program to demonstrate private access modifier
#include <iostream>
using namespace std;
class Circle
{
// private data member
private:
double radius;
// public member function
public:
void compute_area(double r)
{
// member function can access private data member radius
radius = r;
double area = 3.14*radius*radius;
cout<< "Radius is: "<< radius <<endl;
cout << "Area is: "<<area;
}
};
int main()
{
// creating object of the class
Circle obj;
// trying to access private data member directly outside the class
obj.compute_area(1.5);
return 0;
}



//Friend function
#include <iostream>
using namespace std;
class demo
{
int fx;
public:
void inputf(int x)
{
fx=x;
}
friend int findsqr(demo);
};
int findsqr(demo d)
{
return d.fx * d.fx;
}
int main( )
{
demo F;
F.inputf(30);
cout<<"Square is="<<findsqr(F);
}



//Static Member:- We can define class members static using static keyword. When we declare a
//member of a class as static it means no matter how many objects of the class are created, there is only
//one copy of the static member.
//A static member is shared by all objects of the class.






//Operator Overloading
//The first word operator is a keyword and must be specified. The second word operator represents the
//operator which we want to overload i.e., to give a new meaning.

#include <iostream>
using namespace std;
class demo_op1
{
private:
int num;
public:
void input( )
{
cout<<"Enter the number"<<endl;
cin>>num;
}
void operator + (int x)
{
num=num+x;
}
void show( )
{
cout<<"The num is "<< num << endl;
}
};
int main( )
{
demo_op1 d1;
d1.input( );
d1.show( );
int x;
cout <<"Enter the value you want to add\n"<<endl;
cin >>x;
d1+x;
d1.show( );
}



//Method Overriding
// CPP program to illustrate
// Function Overriding
#include<iostream>
using namespace std;

class BaseClass
{
public:
	virtual void Display()
	{
		cout << "\nThis is Display() method"
				" of BaseClass";
	}
	void Show()
	{
		cout << "\nThis is Show() method "
			"of BaseClass";
	}
};

class DerivedClass : public BaseClass
{
public:
	// Overriding method - new working of
	// base class's display method
	void Display()
	{
		cout << "\nThis is Display() method"
			" of DerivedClass";
	}
};

// Driver code
int main()
{
	DerivedClass dr;
	BaseClass &bs = dr;
	bs.Display();
	dr.Show();
}
//Output
//This is Display() method of DerivedClass
//This is Show() method of BaseClass



// C++ program to access overridden function using pointer
// of Base type that points to an object of Derived class

#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;

    // pointer of Base type that points to derived1
    Base* ptr = &derived1;

    // call function of Base class using ptr
    ptr->print();

    return 0;
}
//Output:-Base Function
//This is because even though ptr points to a Derived object, 
//it is actually of Base type. So, it calls the member function of Base.



//Inheritance
#include <iostream>
using namespace std;
class super
{
 public:
 int sup_a;
 void show( )
 {
 	cout << "sup_a=" << sup_a << endl;
 }
};
class sub:public super
{
};
int main( )
{
 sub o1;
 o1.sup_a=20;
 o1.show( );
}
//Output:
//sup_a=20


#include <iostream>
using namespace std;
class Animal
{
 public:
 void eat()
 {
 cout << "Eating..." << endl;
 }
};
class Dog: public Animal
{
 public:
 void bark()
 {
 cout << "Barking...";
 }
 };
int main(void)
{
 Dog d1;
 d1.eat();
 d1.bark();
 return 0;
}

//Output:
//Eating...
//Barking





#include <iostream>
using namespace std;
class Shape // Declaration of base class.
{
 public:
 int a;
 int b;
 void get_data(int n,int m)
 {
 a= n;
 b = m;
 }
};
class Rectangle : public Shape // inheriting Shape class
{
 public:
 int rect_area()
 {
 int result = a*b;
 return result;
 }
};
class Triangle : public Shape // inheriting Shape class
{
 public:
 int triangle_area()
 {
 float result = 0.5*a*b;
 return result;
 } 
};
class Triangle : public Shape // inheriting Shape class
{
 public:
 int triangle_area()
 {
 float result = 0.5*a*b;
 return result;
 }
};
int main()
{
 Rectangle r;
 Triangle t;
 int length,breadth,base,height;
 cout << "Enter the length and breadth of a rectangle: " << endl;
 cin >> length >> breadth;
 r.get_data(length,breadth);
 int m = r.rect_area();
 cout << "Area of the rectangle is : " << m << endl;
 cout << "Enter the base and height of the triangle: " << endl;
 cin >> base >> height;
 t.get_data(base,height);
 float n = t.triangle_area();
 cout << "Area of the triangle is : " << n << endl;
 return 0;
}
//Output:
//	Enter the length and breadth of a rectangle:
//23
//20
//Area of the rectangle is: 460
//Enter the base and height of the triangle:
//	2
//5
//Area of the triangle is: 5 
//




#include <iostream>
using namespace std;
// Base class
class Shape
{
 public:
 void setWidth(int w)
 {
 width = w;
 }
 void setHeight(int h)
 {
 height = h;
 }
 protected:
 int width;
 int height;
};
// Derived class
class Rectangle: public Shape
{
 public:
 int getArea()
 {
 return (width * height);
 }
};
int main(void)
{
 Rectangle Rect;
 Rect.setWidth(5);
 Rect.setHeight(7);
 // Print the area of the object.
 cout << "Total area: " << Rect.getArea() << endl;
 return 0;
}
//When the above code is compiled and executed, it produces the following result -
//Total area: 35







// C++ program to show the order of constructor call in single inheritance
#include <iostream>
using namespace std;
// base class
class Parent
{
public:
// base class constructor
Parent()
{
cout << "Inside base class" << endl;
}
};
// sub class
class Child : public Parent
{
public:
//sub class constructor
Child()
{
cout << "Inside sub class" << endl;
}
};
// main function
int main()
{
// creating object of sub class
Child obj;
return 0;
}
//Output:
//Inside base class
//Inside sub class




#include <iostream>
using namespace std;
class Base
{
 int x;
 public:
 // default constructor
 Base()
 {
 cout << "Base default constructor\n";
 }
};
class Derived : public Base
{
 int y;
 public:
 // default constructor
 Derived()
 {
 cout << "Derived default constructor\n";
 }
 // parameterized constructor
 Derived(int i)
 {
 cout << "Derived parameterized constructor\n";
 }
};
int main()
{
 Base b;
 Derived d1;
 Derived d2(10);
}
//Output:
//Base default constructor
//Base default constructor
//Derived default constructor
//Base default constructor
//Derived parameterized constructor



Virtual base class
//Consider the situation where we have one class A. This class A is inherited
//by two other classes B and C. Both these classes are inherited in a new class D.



//As can be seen from the figure that data members/ functions of class A are inherited twice to class D.
//One through class B and second through class C. When any data/ function members of class A is
//accessed by an object of class D, ambiguity arises as to which data/function members would be called?
//One inherited through B or the other inherited through C. This confuses compiler and it flashes error
//message. To resolve this ambiguity when class A is inherited in both class B and class C, it is declared
//as virtual base class by placing the keyword virtual as:



//Now only one copy of data/function member
//will be copied to class C and class B and class A becomes virtual base class. Virtual base classes offer
//a way to save space and avoid ambiguities in class hierarchies that uses multiple inheritances. When a
//base class is specified as a virtual base, it can act as an indirect base more than once without
//duplication of its data members. A single copy of its members is shared by all the base classes that use
//it as a virtual base.




//The class A has just one data member a which is public. This class is
//virtually inherited in class B and class C. Now class B and class C becomes virtual base
//class and no duplication of data member a is done. 


#include <iostream>
using namespace std;
class A
{
public:
void show()
{
cout << "Hello from A \n";
}
};
class B : public virtual A
{
};
class C : public virtual A
{
};
class D : public B, public C
{
};
int main()
{
D object;
object.show();
}
//Output:
//Hello from A



	
	
//Virtual Function: A virtual function is a function in a base class that is declared using the
//keyword virtual. Defining in a base class a virtual function, with another version in a derived class, it
//signals to the compiler that we don't want static linkage for this function. What we do want is the
//selection of the function to be called at any given point in the program to be based on the kind of
//object for which it is called. This sort of operation is referred to as dynamic linkage, or late binding.	
	
	
	
	
//Polymorphism:
//In C++, polymorphism causes a member function to behave differently based on
//the object that calls/invokes it. 
//It occurs when you have a hierarchy of classes related through inheritance. For example, suppose we
//have the function makeSound(). When a cat calls this function, it will produce the meow sound. When
//a cow invokes the same function, it will provide the moow sound	
	



//Compile Time Polymorphism: You invoke the overloaded functions by matching the number and
//type of arguments. The information is present during compile-time. This means the C++ compiler will
//select the right function at compile time. Compile-time polymorphism is achieved through function
//overloading and operator overloading

//Function Overloading: Function overloading occurs when we have many functions with similar
//names but different arguments. The arguments may differ in terms of number or type.



//Operator Overloading: In Operator Overloading, we define a new meaning for a C++ operator. It
//also changes how the operator works. For example, we can define the + operator to concatenate two
//strings. We know it as the addition operator for adding numerical values. After our definition, when
//placed between integers, it will add them. When placed between strings, it will concatenate them.


#include<iostream>
using namespace std;
class ComplexNum
{
 private:
 int real, over;
 public:
 ComplexNum(int rl = 0, int ov = 0)
 {
 real = rl;
 over = ov;
 }
 ComplexNum operator + (ComplexNum const &obj)
 {
 ComplexNum result;
 result.real = real + obj.real;
 result.over = over + obj.over;
 return result;
 }
 void print()
 {
 cout << real << " + i" << over << endl;
 }
};
int main()
{
ComplexNum c1(10, 2), c2(3, 7);
ComplexNum c3 = c1+c2;
c3.print();
}

//Output: 13 + i9


//Runtime Polymorphism: This happens when an object's method is invoked/called during runtime
//rather than during compile time. Runtime polymorphism is achieved through function overriding. The
//function to be called/invoked is established during runtime.

//Function Overriding: Function overriding occurs when a function of the base class is given a new
//definition in a derived class. At that time, we can say the base function has been overridden.


//this pointer: 
//
//To understand ‘this’ pointer, it is important to know how objects look at functions
//and data members of a class. a) Each object gets its own copy of the data member. b) All-access the same function definition as present in the code segment. Meaning each object gets its own copy of data members and all objects share a single copy of
//member functions. Then now question is that if only one copy of each member function exists and is used by multiple
//objects, how are the proper data members are accessed and updated? The compiler supplies an
//implicit pointer along with the names of the functions as ‘this’. The ‘this’ pointer is passed as a
//hidden argument to all non-static member function calls and is available as a local variable within
//the body of all non-static functions.


//The this pointer holds the address of current object, in simple words you can say that
//this pointer points to the current object of the class. Here you can see that we have two data members
//num and ch. In member function setMyValues() we have two local variables having same name as
//data members name. In such case if you want to assign the local variable value to the data members
//then you won’t be able to do until unless you use this pointer, because the compiler won’t know that
//you are referring to object’s data members unless you use this pointer. This is one of the example
//where you must use this pointer.







//A virtual function is another way of implementing run-time polymorphism in
//C++. It is a special function defined in a base class and redefined in the derived class. To declare a
//virtual function, you should use the virtual keyword



#include <iostream>
using namespace std;
class ClassA
{
public:
virtual void show()
{
cout << "The show() function in base class invoked..." << endl;
}
};
class ClassB :public ClassA
{
public:
void show()
{
cout << "The show() function in derived class invoked...";
}
};
int main()
{
 ClassA* a;
ClassB b;
a = &b;
a->show();
}
//Output:
//The show() function in derived class invoked...


//pure virtual functions and abstract class: A pure virtual function is a virtual function in C++ for
//which we need not to write any function definition and only we have to declare it. It is declared by
//assigning 0 in the declaration.



//Abstract class: An abstract class is a class in C++ which have at least one pure virtual function. ? Abstract class can have normal functions and variables along with a pure virtual function. ? Abstract class cannot be instantiated, but pointers and references of Abstract class type can be
//created.
//If an Abstract Class has derived class, they must implement all pure virtual functions, or else they
//will become Abstract too.




//Pure virtual functions are used if a function doesn't have any use in the base class but the function
//must be implemented by all its derived classes



// creating a pure virtual function
//virtual void calculateArea() = 0;

// C++ program to calculate the area of a square and a circle

#include <iostream>
using namespace std;

// Abstract class
class Shape {
   protected:
    float dimension;

   public:
    void getDimension() {
        cin >> dimension;
    }

    // pure virtual Function
    virtual float calculateArea() = 0;
};

// Derived class
class Square : public Shape {
   public:
    float calculateArea() {
        return dimension * dimension;
    }
};

// Derived class
class Circle : public Shape {
   public:
    float calculateArea() {
        return 3.14 * dimension * dimension;
    }
};

int main() {
    Square square;
    Circle circle;

    cout << "Enter the length of the square: ";
    square.getDimension();
    cout << "Area of square: " << square.calculateArea() << endl;

    cout << "\nEnter radius of the circle: ";
    circle.getDimension();
    cout << "Area of circle: " << circle.calculateArea() << endl;

    return 0;
}





//virtual destructor: Deleting a derived class object using a pointer of base class type that
//has a non-virtual destructor results in undefined behaviour. To correct this situation, the
//base class should be defined with a virtual destructor.

//Making base class destructor virtual guarantees that the object of derived class is destructed
//properly, i.e., both base class and derived class destructors are called.


