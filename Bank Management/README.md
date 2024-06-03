# Bank Management System

This project is a simple bank management system implemented in C++. It allows users to create accounts, deposit and withdraw money, modify account details, and manage accounts using a command-line interface.

## Features

- **Create Account**: Users can create a new bank account by providing their name and password. Each account is assigned a unique account number.
- **Show Account Details**: Users can view their account details by entering their account key and password.
- **Deposit Money**: Users can deposit money into their account by entering their account key, password, and the amount to deposit.
- **Withdraw Money**: Users can withdraw money from their account by entering their account key, password, and the amount to withdraw.
- **Modify Account**: Users can modify their account details, such as name and password, by entering their account key and password.
- **Delete Account**: Users can delete their account by entering their account key and password. Deleted accounts are tracked separately.
- **Manage Accounts**: An admin can manage all accounts, including viewing all accounts, finding accounts by name, and modifying account details.

## Class Structure

### `bank` Class

This class represents a bank account and provides the following functionalities:
- **create**: Creates a new account.
- **show**: Displays account details.
- **deposite**: Deposits money into the account.
- **withdraw**: Withdraws money from the account.
- **modi**: Modifies account details.

### `manage` Class

This class provides functionalities to manage multiple accounts:
- **show_o**: Displays all open accounts.
- **show_o_k**: Displays details of a specific account by key.
- **del_show**: Displays all deleted accounts.
- **show_d_k**: Displays details of a deleted account by key.
- **find**: Finds an account by name.
- **modify**: Modifies account details.

## Friend Functions

- **find**: Finds an account by name.
- **del_show**: Displays deleted accounts.
- **modi**: Modifies account details.
- **ch_del**: Checks if an account is deleted.

## Usage

To use the bank management system, compile and run the program. Follow the on-screen instructions to create and manage accounts. The main menu provides options to create accounts, show account details, deposit and withdraw money, modify accounts, delete accounts, and manage accounts.

### Main Menu

1. **Create Account**: Create a new bank account.
2. **Show Detail**: Show account details by entering the account key and password.
3. **Deposite Money**: Deposit money into an account by entering the account key, password, and amount.
4. **Withdraw Money**: Withdraw money from an account by entering the account key, password, and amount.
5. **Modify Account**: Modify account details by entering the account key and password.
6. **Delete Account**: Delete an account by entering the account key and password.
7. **Manage Accounts**: Access the account management menu (admin only).

### Management Menu

** To GO TO Management Menu ENTER 5726 

1. **Operation on Open Account**: View and manage open accounts.
2. **Operation on Delete Account**: View and manage deleted accounts.
3. **Find Account**: Find an account by name.
4. **Modify Account**: Modify account details by name or key.

## Compilation

To compile the program, use the following command:

```sh
g++ -o bank_management_system bank_management_system.cpp
```

To run the compiled program:

```sh
./bank_management_system
```

## Dependencies

- C++ standard library

## Author

This project was created by Rahul Lalwani.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.