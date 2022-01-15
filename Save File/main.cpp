#include<iostream>
#include "Rectangle.cpp"
#include "Person.cpp"
#include "Student 3.cpp"
#include "Employee.cpp"
using namespace std;
/* Rectangle.cpp
int main() {
	Rectangle r(4, 5);
	cout << "Area: " << r.getArea() << endl;
	cout << "Perimeter: " << r.getPerimeter() << endl;
	r.setLength(2);
	r.setWidth(3);
	cout << "Area: " << r.getArea() << endl;
	cout << "Perimeter: " << r.getPerimeter() << endl;
	return 0;
}
*/

/* Person.cpp
int main() {
	Person p;
	p.setId(1001);
	p.setName("Quynh");
	p.setAge(24);
	p.setAddress("Ha Noi");
	cout << "Id: " << p.getId() << endl;
	cout << "Name: " << p.getName() << endl;
	cout << "Age: " << p.getAge() << endl;
	cout << "Address: " << p.getAddress() << endl;
	return 0;
}
*/
/* Student 3.cpp
int main() {
	Student s(1001, "Trung", 24, "Ha Noi", 5);
	cout << s.getId() << endl;;
	cout << s.getName() << endl;;
	cout << s.getAge() << endl;;
	cout << s.getAddress() << endl;;
	cout << s.getScore() << endl;;
	s.setScore(-7);
	cout << s.getScore() << endl;;
	s.setScore(15);
	cout << s.getScore() << endl;;
	return 0;
}
*/
int main() {
	Employee e(1, "Kien", "Hoang", 1000);
	cout << "Id: " << e.getId() << endl;
	cout << "Name: " << e.getFullName() << endl;
	cout << "Salary: " << e.getSalary() << endl;
	return 0;
}