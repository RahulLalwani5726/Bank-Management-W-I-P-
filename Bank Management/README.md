# Bank Management System

## Overview

This project is a simple console-based Bank Management System implemented in C++. It allows users to create, manage, and delete bank accounts. It also provides functionalities for depositing and withdrawing money, and modifying account details. Additionally, it includes an administrative interface for managing all accounts.

## Features

1. **Account Creation**
    - Current Account
    - Savings Account

2. **Account Management**
    - Show Account Details
    - Deposit Money
    - Withdraw Money
    - Modify Account Details
    - Delete Account

3. **Administrative Management**
    - Show All Accounts
    - Show Deleted Accounts
    - Find Account by Name
    - Modify Account by Key

## Classes and Methods

### `bank` Class

#### Protected Members
- `string Account_sta`: Stores the account type (Current or Savings).
- `string name`: Stores the name of the account holder.
- `static int total_acc`: Static member to keep track of the total number of accounts.
- `long long int A_no`: Stores the account number.
- `string pass`: Stores the password for the account.
- `long double ammount`: Stores the balance in the account.

#### Friend Functions
- `void find(bank a[], int len)`: Finds an account by the account holder's name.
- `void del_show(bank ar[], int del[], int len)`: Shows deleted accounts.
- `void modi(bank &o, string p)`: Modifies an account.
- `class manage`: A friend class to manage bank accounts.

#### Public Methods
- `void create()`: Creates a new account.
- `void show(string p)`: Shows account details.
- `void deposite(string p)`: Deposits money into the account.
- `void withdraw(string p)`: Withdraws money from the account.

### `manage` Class

#### Private Methods
- `void show_o(bank arr[], int o_len, int del[], int d_len)`: Shows all open accounts.
- `void show_o_k(bank &o)`: Shows account details by key.
- `void show_d_k(bank &o)`: Shows deleted account details by key.
- `void find(bank a[], int len)`: Finds an account by the account holder's name.
- `void modify(bank arr[], int o_len, int del[], int d_len)`: Modifies account details.

#### Public Methods
- `void entr(bank arr[], int d_u[], int d_len, int o_len)`: Entry point for the administrative interface.

### Other Functions
- `int ch_del(int key, int d_u[], int d)`: Checks if an account is deleted.

## Usage

To use the Bank Management System, compile and run the `main` function. The system will prompt you to enter commands to perform various operations.

### Commands in Main Menu

1. **Create Account**
2. **Show Account Details**
3. **Deposit Money**
4. **Withdraw Money**
5. **Modify Account**
6. **Delete Account**
7. **Administrative Management** (enter `5726` to access)

### Administrative Commands

1. **Operation on Open Accounts**
2. **Operation on Deleted Accounts**
3. **Find Account**
4. **Modify Account**

## Compilation

To compile the program, use a C++ compiler such as `g++`:

```sh
g++ -o bank_management_system main.cpp
```

Then, run the compiled program:

```sh
./bank_management_system
```

## Dependencies

The program uses standard C++ libraries, including `<iostream>`, `<fstream>`, `<limits>`, and `<cstdlib>`. Ensure that your development environment has these standard libraries available.

## Note

- This is a console-based application. It does not include a graphical user interface.
- Error handling and input validation are minimal. For a production system, consider enhancing these aspects.
- The system uses `system("cls")` for clearing the console, which is platform-dependent. Modify this for your specific platform if necessary.





To access the administrative management interface, you need to enter a specific command in the main menu. The command for accessing this interface is `5726`. Below is a detailed reference for entering the administrative management section:

## How to Enter Administrative Management

1. **Run the Program**: Start the Bank Management System by running the compiled executable.

2. **Main Menu**: When the program starts, you will be presented with the main menu. It will look like this:

    ```
    Welcome to bank manage
    ===================================================================================================
                            Main Meniu
    ===================================================================================================
    Press Enter to Continue...
    ```

3. **Enter the Main Menu**: Press `Enter` to proceed to the main menu options.

4. **Main Menu Options**: The main menu provides several options for account operations:

    ```
    Enter Your Command : 

    1. Create Account           |       2. Show Detail
    3. Deposite Money           |       4. Withdraw Money
    5. Modify Account           |       6. Delete Account
    ```

5. **Administrative Management Command**: To access the administrative management interface, enter `5726` as the command:

    ```
    Enter Your Command : 
    5726
    ```

6. **Administrative Interface**: Upon entering the command `5726`, you will enter the administrative management interface, which looks like this:

    ```
    ===================================================================================================
                            Your Enter Bank Manage Account

                            Main Meniu

    ===================================================================================================
    Press Enter to Continue...
    ```

7. **Administrative Commands**: Press `Enter` to proceed to the administrative commands menu. Here you can manage open and deleted accounts, find accounts, and modify account details. The options are:

    ```
    Enter Your Command :->

    1. Operation on Open Account      |       2. Operation on Delete Account 
    3. Find Account                   |       4. Modify Account
    ```

## Summary

- **Access Administrative Interface**: Enter `5726` in the main menu to access the administrative management.
- **Navigate Administrative Menu**: Use the options provided to manage and modify accounts, both active and deleted.

This guide helps you understand how to navigate and access the administrative functions within the Bank Management System.
