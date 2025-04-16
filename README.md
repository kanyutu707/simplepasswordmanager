---

# 🔐 Simple Password Manager (C++)

This is a basic command-line password manager written in C++. It allows users to:

- Save passwords associated with websites
- View saved passwords
- Exit the application

All saved passwords are stored in a local file named `passwords.txt`.

---

## 🧱 Features

- Add and store passwords securely (no encryption, just plain text)
- View saved passwords
- Simple text file storage
- User-friendly CLI interface

---

## ⚙️ Build Instructions (Using CMake)

### Prerequisites

Make sure you have the following installed:
- [CMake](https://cmake.org/download/)
- A C++ compiler (e.g., g++, clang++, MSVC)

### Build Steps

1. Clone or download this repository.

2. Navigate to the project directory:

```bash
cd your-project-directory
```

3. Create a `build` directory and compile the project:

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

4. Run the program:

```bash
./PasswordManager
```

_Note: The actual name of the executable may vary depending on your platform or compiler._

---

## 📄 Usage

When you run the program, you'll see a menu like this:

```
 Password manager
 1. Add Password
 2. View Passwords
 3. Exit
Enter your choice:
```

Follow the prompts to add or view passwords.

---


## 🛑 Disclaimer

This is a **basic** password manager for educational purposes only. It **does not** encrypt or hash passwords, and stores them in **plain text**. Do not use this for storing real or sensitive data.

---

## 📬 Feedback & Contributions

Feel free to fork the project, open issues, or submit pull requests!

---
