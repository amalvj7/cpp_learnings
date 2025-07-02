#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;

// Global variable
string want_to_more_forward;

// Student structure
struct Student{
    string name;
    int roll;
    float mark1 , mark2 , mark3;
    float average;
    char grade;
};

// Forward declarations (without Student parameter for now)
void add_student();
void view();
void search();
void modify();
void delete_student();
void menu();
string main_fn();
void display_from_file();



string main_fn(){ 
    cout << "Do you want to perform another operation? (Y/N): " << endl;
    cin >> want_to_more_forward ;

    if (want_to_more_forward == "Y"){
        menu();
        return main_fn();  // Recursive call for continuous operation
    }
    else{
         exit(0);  // Exit the program
    }
    return want_to_more_forward;  // This line will never be reached, but satisfies compiler
};



void menu(){
    cout << "==============================================" << endl;
    cout << "         STUDENT REPORT CARD SYSTEM           " << endl;
    cout << "==============================================" << endl;
    cout << "1.  Add Student Record" << endl;
    cout << "2.  View All Student Records" << endl;
    cout << "3.  Search Student by Roll Number" << endl;
    cout << "4.  Modify Student Record" << endl;
    cout << "5.  Delete Student Record" << endl;
    cout << "6.  Exit" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "Enter your choice: ";

    int choice; 
    cin >> choice;

    switch(choice){
        case 1:
            add_student();
            break;

        case 2:
            view();
            break;

        case 3:
            search();
            break;

        case 4:
            modify();
            break;

        case 5:
            delete_student();
            break;

        case 6:
            exit(0);
            break;
    }
};


void add_student(){
    Student s;

    cout << "\n-----------------------------------------------";
    cout << "\n        ADD STUDENT DETAILS";
    cout << "\n-----------------------------------------------";

    // Get input from user
    cout << "\nEnter Roll Number : ";
    cin >> s.roll;
    cin.ignore();  // To ignore newline character after int input
    cout << "Enter Name        : ";
    getline(cin, s.name);
    cout << "Enter Marks in Subject 1 : ";
    cin >> s.mark1;
    cout << "Enter Marks in Subject 2 : ";
    cin >> s.mark2;
    cout << "Enter Marks in Subject 3 : ";
    cin >> s.mark3;

    s.average = (s.mark1 + s.mark2 + s.mark3) / 3;
    
    // Calculate grade based on average
    if (s.average >= 90) s.grade = 'A';
    else if (s.average >= 80) s.grade = 'B';
    else if (s.average >= 70) s.grade = 'C';
    else if (s.average >= 60) s.grade = 'D';
    else s.grade = 'F';

    // Save student data to file
    ofstream myfile("student.txt", ios::app);
    if (myfile.is_open()) {
        myfile << s.roll << " " << s.name << " " << s.mark1 << " " 
               << s.mark2 << " " << s.mark3 << " " << s.average << " " 
               << s.grade << endl;
        myfile.close();
        cout << "\nStudent record added successfully!" << endl;
    } else {
        cout << "\nError: Unable to open file!" << endl;
    }
};

void view(){
    cout << "\n==============================================" << endl;
    cout << "           ALL STUDENT RECORDS" << endl;
    cout << "==============================================" << endl;
    display_from_file();
};


void search(){
    int search_rollno;
    bool found = false;

    cout << "\n-----------------------------------------------";
    cout << "\n        SEARCH STUDENT BY ROLL NUMBER";
    cout << "\n-----------------------------------------------";
    cout << "\nEnter Roll Number to search: ";
    cin >> search_rollno;

    ifstream myfile("student.txt");
    if (myfile.is_open()) {
        Student s;  // Local variable for this function
        
        while (myfile >> s.roll >> s.name >> s.mark1 >> s.mark2 >> s.mark3 >> s.average >> s.grade) {
            if (s.roll == search_rollno) {
                found = true;
                cout << "\n=============== STUDENT FOUND ===============" << endl;
                cout << "Roll Number : " << s.roll << endl;
                cout << "Name        : " << s.name << endl;
                cout << "Subject 1   : " << s.mark1 << endl;
                cout << "Subject 2   : " << s.mark2 << endl;
                cout << "Subject 3   : " << s.mark3 << endl;
                cout << "Average     : " << s.average << endl;
                cout << "Grade       : " << s.grade << endl;
                cout << "=============================================" << endl;
                break;  // Student found, exit loop
            }
        }
        myfile.close();
        
        if (!found) {
            cout << "\nStudent with Roll Number " << search_rollno << " not found!" << endl;
        }
    } else {
        cout << "\nError: Unable to open file!" << endl;
    }
};

void modify(){
    int modify_rollno;
    bool found = false;
    vector<Student> students;  // To store all students temporarily

    cout << "\n-----------------------------------------------";
    cout << "\n        MODIFY STUDENT RECORD";
    cout << "\n-----------------------------------------------";
    cout << "\nEnter Roll Number to modify: ";
    cin >> modify_rollno;

    // Read all students from file
    ifstream infile("student.txt");
    if (infile.is_open()) {
        Student s;
        while (infile >> s.roll >> s.name >> s.mark1 >> s.mark2 >> s.mark3 >> s.average >> s.grade) {
            if (s.roll == modify_rollno) {
                found = true;
                cout << "\n=== CURRENT RECORD ===" << endl;
                cout << "Name: " << s.name << ", Marks: " << s.mark1 << " " << s.mark2 << " " << s.mark3 << endl;
                
                // Get new data
                cin.ignore();
                cout << "\nEnter New Name: ";
                getline(cin, s.name);
                cout << "Enter New Marks in Subject 1: ";
                cin >> s.mark1;
                cout << "Enter New Marks in Subject 2: ";
                cin >> s.mark2;
                cout << "Enter New Marks in Subject 3: ";
                cin >> s.mark3;
                
                // Recalculate average and grade
                s.average = (s.mark1 + s.mark2 + s.mark3) / 3;
                if (s.average >= 90) s.grade = 'A';
                else if (s.average >= 80) s.grade = 'B';
                else if (s.average >= 70) s.grade = 'C';
                else if (s.average >= 60) s.grade = 'D';
                else s.grade = 'F';
            }
            students.push_back(s);  // Add to vector
        }
        infile.close();

        if (found) {
            // Rewrite file with updated data
            ofstream outfile("student.txt");
            for (const Student& student : students) {
                outfile << student.roll << " " << student.name << " " << student.mark1 << " " 
                        << student.mark2 << " " << student.mark3 << " " << student.average << " " 
                        << student.grade << endl;
            }
            outfile.close();
            cout << "\nStudent record modified successfully!" << endl;
        } else {
            cout << "\nStudent with Roll Number " << modify_rollno << " not found!" << endl;
        }
    } else {
        cout << "\nError: Unable to open file!" << endl;
    }
};

void delete_student(){
    int delete_rollno;
    bool found = false;
    vector<Student> students;  // To store all students except the one to delete

    cout << "\n-----------------------------------------------";
    cout << "\n        DELETE STUDENT RECORD";
    cout << "\n-----------------------------------------------";
    cout << "\nEnter Roll Number to delete: ";
    cin >> delete_rollno;

    // Read all students from file
    ifstream infile("student.txt");
    if (infile.is_open()) {
        Student s;
        while (infile >> s.roll >> s.name >> s.mark1 >> s.mark2 >> s.mark3 >> s.average >> s.grade) {
            if (s.roll == delete_rollno) {
                found = true;
                cout << "\n=== RECORD TO BE DELETED ===" << endl;
                cout << "Roll: " << s.roll << ", Name: " << s.name << endl;
                cout << "Are you sure you want to delete this record? (Y/N): ";
                char confirm;
                cin >> confirm;
                if (confirm == 'Y' || confirm == 'y') {
                    // Don't add this student to the vector (effectively deleting)
                    cout << "\nStudent record deleted successfully!" << endl;
                } else {
                    students.push_back(s);  // Keep the student
                    cout << "\nDeletion cancelled!" << endl;
                    found = false;  // Reset found flag
                }
            } else {
                students.push_back(s);  // Keep all other students
            }
        }
        infile.close();

        if (found) {
            // Rewrite file without the deleted student
            ofstream outfile("student.txt");
            for (const Student& student : students) {
                outfile << student.roll << " " << student.name << " " << student.mark1 << " " 
                        << student.mark2 << " " << student.mark3 << " " << student.average << " " 
                        << student.grade << endl;
            }
            outfile.close();
        } else {
            cout << "\nStudent with Roll Number " << delete_rollno << " not found!" << endl;
        }
    } else {
        cout << "\nError: Unable to open file!" << endl;
    }
};

// Function to display all student data from file
void display_from_file(){
    ifstream myfile("student.txt");
    if (myfile.is_open()) {
        Student s;
        cout << "Roll\tName\t\tMark1\tMark2\tMark3\tAverage\tGrade" << endl;
        cout << "----------------------------------------------------------------" << endl;
        
        while (myfile >> s.roll >> s.name >> s.mark1 >> s.mark2 >> s.mark3 >> s.average >> s.grade) {
            cout << s.roll << "\t" << s.name << "\t\t" << s.mark1 << "\t" 
                 << s.mark2 << "\t" << s.mark3 << "\t" << s.average << "\t" 
                 << s.grade << endl;
        }
        myfile.close();
    } else {
        cout << "\nNo student records found or unable to open file!" << endl;
    }
}


int main(){
    menu();  // Start with menu first
    main_fn();  // Then ask for continuation
    return 0;
};