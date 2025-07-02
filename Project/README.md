# Student Report Card Management System

A comprehensive C++ console application for managing student records with full CRUD (Create, Read, Update, Delete) functionality.

## 🌟 Features

- ✅ **Add Student Records** - Input roll number, name, and marks for 3 subjects
- ✅ **View All Students** - Display all student records in a formatted table
- ✅ **Search Students** - Find student by roll number
- ✅ **Modify Records** - Update existing student information
- ✅ **Delete Records** - Remove student records with confirmation
- ✅ **Auto Grade Calculation** - Automatic average and grade computation
- ✅ **File Persistence** - Data saved to `student.txt` file

## 📋 Grade System

| Average Score | Grade |
|---------------|-------|
| 90-100        | A     |
| 80-89         | B     |
| 70-79         | C     |
| 60-69         | D     |
| Below 60      | F     |

## 🛠️ Technologies Used

- **Language**: C++
- **File I/O**: fstream
- **Data Structures**: struct, vector
- **Storage**: Text file (student.txt)

## 🚀 How to Run

1. **Compile the program**:
   ```bash
   g++ Report_card_management.cpp -o report_card
   ```

2. **Run the executable**:
   ```bash
   ./report_card
   ```

## 📂 Project Structure

```
Project/
├── Report_card_management.cpp    # Main source code
├── student.txt                   # Data storage file (auto-created)
└── README.md                     # Project documentation
```

## 🎯 Menu Options

```
==============================================
         STUDENT REPORT CARD SYSTEM           
==============================================
1.  Add Student Record
2.  View All Student Records
3.  Search Student by Roll Number
4.  Modify Student Record
5.  Delete Student Record
6.  Exit
```

## 💻 Sample Usage

### Adding a Student
```
Enter Roll Number : 101
Enter Name        : John Doe
Enter Marks in Subject 1 : 85
Enter Marks in Subject 2 : 90
Enter Marks in Subject 3 : 78
```

### Output
```
Average: 84.33
Grade: B
Student record added successfully!
```

## 🔧 Requirements

- C++ Compiler (GCC, Clang, or MSVC)
- Standard C++ Library
- File system write permissions

## 🤝 Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📝 License

This project is open source and available under the [MIT License](LICENSE).

## 🎯 Future Enhancements

- [ ] Web-based interface
- [ ] Database integration
- [ ] Student photo upload
- [ ] Report generation (PDF)
- [ ] Multiple subject categories
- [ ] Teacher login system

## 👨‍💻 Author

Created with ❤️ by [Your Name]

---

⭐ **Star this repository if you found it helpful!**
