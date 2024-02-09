// ########### program no 1####################

// #include<iostream>
// #include<string>
// using namespace std;
// class employee{
//     private:
//         string emp_id;
//         string emp_name;
//         double emp_salary;
//     public:
//         employee(): emp_id(), emp_name(), emp_salary(){}
//         void get_emp_detail(){
//             cout<<"Enter Empolyee ID";
//             cin>>emp_id;
//             cout<<"Enter Empolyee Name";
//             cin>>emp_name;
//             cout<<"Enter Empolyee Salary";
//             cin>>emp_salary;
//         }
//         void show_emp_data(){
//             cout<<"Empolyee Detail"<<endl;
//             cout<<"Empolyee ID"<<emp_id<<endl;
//             cout<<"Empolyee Name"<<emp_name<<endl;
//             cout<<"Empolyee Salary"<<emp_salary<<endl;
//         }
// };
// int main(){
//     employee ali;
//     ali.get_emp_detail();
//     ali.show_emp_data();    
//     return 0;
// }



// ################# program no 2####################

// #include<iostream>
// #include<string>
// using namespace std;
// class student{
// private:
//     char name;
//     float marks;
// public:
//     void enter_detail(){
//        cout<<"Enter Student Name";
//        cin>>name;
//        cout<<"Enter Student MArks"; 
//        cin>>marks;            
//     }
//     float calc_media(){
//         return marks / 2.0;
//     }
//     void disp(){
//         cout<<"Student Name"<<name<<endl;   
//         cin>>name;             
//         cout<<"Student Marks"<<marks<<endl;
//         cin>>marks;
//     }
    
// };
// int main(){
//     student haider;
//     haider.enter_detail();
//     haider.disp();
//     return 0;
// }

// #################### program no 3 #################



#include <iostream>
using namespace std;
class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}
    int getDay() {
        return day;
    }
    int getMonth(){
        return month;
    }
    int getYear() {
        return year;
    }
    void setDay(int d) {
        day = d;
    }
    void setMonth(int m) {
        month = m;
    }
    void setYear(int y) {
        year = y;
    }
    bool isValidDate(){
        if (year < 0 || month < 1 || month > 12 || day < 1 || day > daysInMonth()) {
            return false;
        }
        return true;
    }
    int daysInMonth(){
        switch (month) {
            case 4: case 6: case 9: case 11:
                return 30;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                    return 29;
                else
                    return 28;
            default:
                return 31;
        }
    }
    };
int main() {
    Date myDate(8, 2, 2024);
    cout << "Current date: " << myDate.getDay() << "/" << myDate.getMonth() << "/" << myDate.getYear() <<endl;
    myDate.setDay(10);
    myDate.setMonth(5);
    myDate.setYear(2023);
    cout << "Modified date: " << myDate.getDay() << "/" << myDate.getMonth() << "/" << myDate.getYear() <<endl;
    if (myDate.isValidDate()) {
        cout << "The date is valid." <<endl;
    } else {
        cout << "The date is invalid." <<endl;
    }
    return 0;
}


