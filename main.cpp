#include<bits/stdc++.h>
using namespace std ;
class Student
{
private :
    string name ;
    string Class ;
    int roll_number ;
    double marks ;
public :
    Student() {}
    Student(string name,string Class,int roll_number,double marks)
    {
        this->name=name;
        this->Class=Class;
        this->roll_number=roll_number;
        this->marks=marks;
    }
    string The_Grade()
    {
        if (marks>=85)
        {
            return "Excellent";
        }
        else if (marks>=60 )
        {
            return "Good";
        }
        else if (marks<=60&marks==50)
        {
            return "Low" ;
        }
        else
        {
            return "Not good";
        }

    }
    void Display ()
    {
        cout <<"the name of student is: "<< name << endl;
        cout <<"the class of student is: "<< Class << endl;
        cout <<"the roll number of student is: " << roll_number<<endl;
        cout <<"the marks of student is: "<< marks<<endl;
        cout <<"the grade is " << The_Grade() << endl;
    }

};
class Date
{
private :
    int day ;
    int month ;
    int year ;
public :
    Date () {}
    void set_Day(int day)
    {
        this->day=day;
    }
    int get_Day()
    {
        return day ;
    }
    void set_Month(int month)
    {
        this->month=month;
    }
    int get_month()
    {
        return month;
    }
    void set_Year(int year)
    {
        this->year=year;
    }
    int get_year()
    {
        return year ;
    }
    void vaildate()
    {
        if (day<=20&&month<=10&&year==2010)
        {
            cout<< "the date is valid" << endl;
        }
        else
        {
            cout << "the date is not valid"<< endl;
        }

    }


};
class Employee
{
private :
    string name;
    int employeeid ;
    double salary ;
public :
    Employee () {}
    Employee(string name,int employeeid,double salary)
    {
        this->name=name;
        this->employeeid=employeeid;
        this->salary=0;

    }

    void set_salary (int performance)
    {
        if (performance==150)
        {
            salary = 1000;

        }
        else if (performance==200)
        {
            salary=3000;


        }
        else
        {
            salary = 4000;


        }

    }

    void display ()
    {
        cout << "the name of employee is: " << name << endl;
        cout << "the employee id is: " << employeeid <<endl ;
        cout << "the salary of employee is: " <<salary<<endl;
    }
};
class Triangle
{
private :
    double firstside ;
    double secondside;
    double thirdside;
public :
    Triangle() {}
    Triangle(double firstside,double secondside,double thirdside)
    {
        this->firstside=firstside;
        this->secondside=secondside;
        this->thirdside=thirdside;
    }
    string type ()
    {
        if (firstside==secondside&&secondside==thirdside)
        {
            return "equilateral";
        }
        else if (firstside==secondside||firstside==thirdside||secondside==thirdside)
        {
            return "isosceles";
        }
        else if (firstside!=secondside!=thirdside)
        {
            return "scalene";
        }

    }

};
class Mother
{
public :
    void dispaly ()
    {
        cout << "the class of mother" << endl;
    }
};
class Daughter:public Mother
{
public :
    void dispaly()
    {
        Mother::dispaly();
        cout << "the class of daughter" << endl;

    }


};
class Shape
{
protected:
    double width;
    double height;
public:
    Shape() {}
    Shape(double width,double height)
    {
        this->width=width;
        this->height=height;
    }
    virtual double area () = 0 ;
};
class triangle : public Shape
{
public :
    triangle():Shape() {}
    triangle(double width,double height):Shape(width,height) {}
    double area()override
    {
        return (width*height)/2;
    }
};
class rectangle : public Shape
{
public :
    rectangle():Shape() {}
    rectangle(double width,double height) : Shape (width,height) {}
    double area()override
    {
        return width*height ;
    }

};
int main ()
{
    cout <<"........................"<<endl;
    cout << "The first class" << endl;
    Student s1("raham","math",22,60) ;
    s1.Display();
    cout <<"........................"<<endl;
    cout << "The second class"<<endl;
    Date d1;
    d1.set_Day(2);
    d1.set_Month(10);
    d1.set_Year(2010);
    d1.vaildate();
    cout <<"...................."<<endl;
    cout <<"The third class" <<endl;
    Employee e1("ahmed mohamed",22223345,0);
    e1.set_salary(200);
    e1.display();
    cout<<"........................."<<endl;
    cout<<"The fourth class"<<endl;
    Triangle t1(4.68,4.68,4.68);
    cout<<"the triangle is: " <<t1.type()<<endl;
    cout << "......................."<< endl;
    cout << "the fifth class" << endl;
    Daughter da1;
    da1.dispaly();
    cout << "......................."<< endl;
    cout << "the sixth class" << endl;
    triangle tra1(4.50,6.78);
    cout<<"the area of triangle is: "<< tra1.area() << endl;
    rectangle r1(8.90,3.45);
    cout<<"the area of rectangle is: "<< r1.area() << endl;








    return 0 ;
}
