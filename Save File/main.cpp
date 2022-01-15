#include<iostream>
#include "Rectangle.cpp"
#include "Person.cpp"
#include "Student 3.cpp"
#include "Employee.cpp"
#include "Date.cpp"
#include "Time.cpp"
#include "Point.cpp"
#include "Account.cpp"
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
/* Employee.cpp
int main() {
	Employee e(1, "Kien", "Hoang", 1000);
	cout << "Id: " << e.getId() << endl;
	cout << "Name: " << e.getFullName() << endl;
	cout << "Salary: " << e.getSalary() << endl;
	return 0;
}
*/
/* Date.cpp
int main() {
	Date d(1, 1, 1997);
	d.display();
	d.setDate(12, 12, 2004);
	d.display();
	d.setMonth(3);
	d.display();	
	return 0;
}
*/
/* Time.cpp
int main() {
	Time t(12, 1, 1);
	t.display();
	t.setTime(23, 59, 59);
	t.display();
	t.nextSecond();
	t.display();
	t.nextSecond();
	t.display();
	t.setTime(7, 0, 0);
	t.display();
	t.previousSecond();
	t.display();
	return 0;
}
*/
/* Point.cpp
int main() {
	Point p1(1.5, 6.7);
	Point p2(2.8, 3.2);
	cout << p1.distance(p2) << endl;
	cout << p1.distance(2.34, 7.8) << endl;
	return 0; 
}
*/
int main() {
	Account account1(1000, "Tuan", 2000);
	account1.display();
	account1.withdraw(2100);
	account1.deposit(600);
	cout << "Balance: " << account1.getBalance() << endl;
	account1.withdraw(2100);
	cout << "Balance: " << account1.getBalance() << endl;
	return 0;
}