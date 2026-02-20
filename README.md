# Digital Attendance System

## 📌 Project Overview

The Digital Attendance System is a C++ console-based application designed to manage student records and lecture attendance sessions.  

This project was developed as part of the Mid-Semester Capstone Project and demonstrates the use of:

- Object-Oriented Programming (OOP)
- File handling in C++
- Menu-driven program structure
- Data persistence using file storage
- Version control using Git and GitHub

---

## 🎯 Objectives

The system is designed to:

1. Register and manage student records
2. Create lecture sessions
3. Record attendance (Present, Absent, Late)
4. Generate attendance reports
5. Store and retrieve data from files
6. Maintain persistent data between program executions

---

## ⚙️ Functional Requirements

### 5.1 Student Management
- Register students
- View all registered students
- Search students by index number

### 5.2 Attendance Session Management
- Create lecture session (course code, date, start time, duration)
- Mark attendance as Present, Absent, or Late
- Update attendance records

### 5.3 Reports and Summary
- Display attendance list for a session
- Display summary counts of attendance status

### 5.4 File Storage
- Save student records to file
- Save attendance sessions to file
- Load saved data when program starts
- Data persists between executions

---

## 🗂 File Structure
Digital-Attendance-System/
│
├── main.cpp
├── students.txt
├── session_<course>_<date>.txt
└── README.md

---

## 🛠 Technologies Used

- C++
- Standard Template Library (vector)
- File streams (fstream)
- Git & GitHub

---

## 🚀 How to Run the Program

1. Open the project in a C++ IDE (e.g., CodeBlocks, Dev C++, VS Code)
2. Compile the program
3. Run the executable
4. Use the menu options to interact with the system

---

## 📊 Weekly Development Plan

| Week | Features Implemented |
|------|----------------------|
| Week 1 | Student registration & file storage |
| Week 2 | Lecture session creation |
| Week 3 | Attendance marking & reporting |
| Week 4 | Data persistence & system finalization |

---

## 👨‍💻 Author

Name: Abdul Nasir Suleman  
Course: [Introduction To Computer Technology]  
Project: Mid-Semester Capstone Project  

---

## 📌 Notes

- All data is stored locally using text files.
- Each attendance session generates a separate file.
- The project follows incremental development over four weeks.
