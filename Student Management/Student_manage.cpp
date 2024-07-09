#include <bits/stdc++.h>
using namespace std;
int ch_del(int key, vector<int> d_u, int d)
{
    for (int j = 0; j < d; j++)
    {
        if (d_u[j] == key)
        {

            return 0;
        }
    }
    return 1;
}
class student
{
    friend int show(string s, vector<student> st, vector<int> del, int dele);
    friend int ch_del(int key, vector<int> d_u, int d);
    friend int update(string s, vector<student> st, vector<int> del, int dele);
    friend void update(student &o);

protected:
    int Key_no;
    static int stdu_no;
    long int fee;
    string Father, mother;
    string M_no;
    string Address, course;
    string add_date;
    string dob;

public:
    string name;
    // ------------------------ Enter Detail----------------------
    void nw_stdu()
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Enter Student Name: ";
        getline(cin, name);
        cout << "Enter Father Name: ";
        getline(cin, Father);
        cout << "Enter Mother Name: ";
        getline(cin, mother);
        cout << "Enter Mobile No : ";
        getline(cin, M_no);
        cout << "Enter Address: ";
        getline(cin, Address);
        cout << "Enter Course Name: ";
        getline(cin, course);
        cout << "Enter Addimission Date: ";
        getline(cin, add_date);
        cout << "Enter D-O-B: ";
        getline(cin, dob);
        system("cls");
        system("cls");
        cout << "Student Detail Enterd Seccusfully \n";
    }
    // ---------------------- show by roll ------------------------
    void sh()
    {
        system("cls");
        cout << "Student Key: " << Key_no << endl;
        cout << "Student Name: " << name << endl;
        cout << "D-O-B: " << dob << endl;
        cout << "Father Name: " << Father << endl;
        cout << "Mother Name: " << mother << endl;
        cout << "Mobile No: " << M_no << endl;
        cout << "Address: " << Address << endl;
        cout << "Course: " << course << endl;
        cout << "Addmission Date: " << add_date << endl;
        getchar();
        getchar();
        cout << "Enter 1 for get Resipt: ";
        char c;
        c = getchar();
        string s = name;
        if (c == '1')
        {
            ofstream f;
            s.append("_");
            s += __DATE__;
            f.open(s, std::fstream::__noreplace);
            f << "-----------------------------------------------------------\nStuent Details :-->\n---------------------------------------------------------------\n";
            f << "Student Key: " << Key_no << endl;
            f << "Student Name: " << name << endl;
            f << "D-O-B: " << dob << endl;
            f << "Father Name: " << Father << endl;
            f << "Mother Name: " << mother << endl;
            f << "Mobile No: " << M_no << endl;
            f << "Address: " << Address << endl;
            f << "Course: " << course << endl;
            f << "Addmission Date: " << add_date << endl;
        }
    }
    student(int a)
    {
        Key_no = a;
        nw_stdu();
    }
};
// ------------------------ show---------------------------------
int show(string s, vector<student> st, vector<int> del, int dele)
{
    system("cls");
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i].name != s)
        {
            continue;
        }
        else if (ch_del(i, del, dele))
        {
            cout << "Student Key: " << st[i].Key_no << endl;
            cout << "Student Name: " << st[i].name << endl;
            cout << "D-O-B: " << st[i].dob << endl;
            cout << "Father Name: " << st[i].Father << endl;
            cout << "Course: " << st[i].course << endl;
            cout << "\n--------------------------------\n";
        }
    }
    cout << "Enter Student Key To Show Full Detail: \n";
    int n;
    cin >> n;
    return n;
}
// ------------------ ch delete-------------------------
int student ::stdu_no = 0;

// --------------- update Details----------------------------

// ------------------- by roll No ------------------------------
void update(student &o)
{
    while (true)
    {
        int a;
        cout << "1. Course      || 2. Student Name\n";
        cout << "3. Father Name || 4. Mother Name\n";
        cout << "5. Mobile No   || 6. Address\n";
        cout << "7. D-O-B       || 8. Exit\n";
        cout << "What You Want To Update: \n";
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "Previous Course: " << o.course << endl;
            cout << "Enter Course: ";
            cin >> o.course;
            break;
        case 2:
            cout << "Previous Name: " << o.name << endl;
            cout << "Enter Name: ";
            cin >> o.name;
            break;
        case 3:
            cout << "Previous Father Name: " << o.Father << endl;
            cout << "Enter Father Name: ";
            cin >> o.Father;
            break;
        case 4:
            cout << "Previous Mother Name: " << o.mother << endl;
            cout << "Enter Mother Name: ";
            cin >> o.mother;
            break;
        case 5:
            cout << "Previous Mobile No: " << o.M_no << endl;
            cout << "Enter Mobile No: ";
            cin >> o.M_no;
            break;
        case 6:
            cout << "Previous Address: " << o.Address << endl;
            cout << "Enter Address: ";
            cin >> o.Address;
            break;
        case 7:
            cout << "Previous D-O-B: " << o.dob << endl;
            cout << "Enter D-O-B: ";
            cin >> o.dob;
            break;
        case 8:
            system("cls");
            cout << "Student Detail Update Seccusfully \n";
            return;
            break;

        default:
            break;
        }
        system("cls");
        cout << "Student Key: " << o.Key_no << endl;
        cout << "New Student Name: " << o.name << endl;
        cout << "D-O-B: " << o.dob << endl;
        cout << "New Father Name: " << o.Father << endl;
        cout << "New Mother Name: " << o.mother << endl;
        cout << "New Mobile No: " << o.M_no << endl;
        cout << "New Address: " << o.Address << endl;
        cout << "New Course: " << o.course << endl;
        getchar();
        getchar();
        system("cls");
    }
}
// ----------------- By Name----------------------------------
int update(string s, vector<student> st, vector<int> del, int dele)
{
    system("cls");
    int roll;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i].name != s)
        {
            continue;
        }
        else if (ch_del(i, del, dele))
        {
            cout << "Student Key: " << st[i].Key_no << endl;
            cout << "Student Name: " << st[i].name << endl;
            cout << "D-O-B: " << st[i].dob << endl;
            cout << "Father Name: " << st[i].Father << endl;
            cout << "Course: " << st[i].course << endl;
            cout << "\n--------------------------------\n";
        }
    }
    cout << "Enter Roll No: ";
    cin >> roll;
    return roll;
}
int main()
{
    static int count = 0;
    static int dele = 0;
    vector<student> s;
    vector<int> del;
    while (true)
    {
        int a;
        cout << "============================================================================================\n";
        cout << "1. Enter New Student Data    |\t| 2. Get Student Details\n";
        cout << "3. Delete Whole Student Data |\t| 4. Delete Particular Student Data\n";
        cout << "5. Update Student Data       |\t| \n";
        cout << "============================================================================================\n";
        cout << "Enter Commend: ";
        cin >> a;
        if (a == 1)
        {
            for (int i = 0; i < 1; i++)
            {
                s.emplace_back(count);
                count++;
            }
        }
        else if (s.size() == 0)
        {
            system("cls");
            cout << "Student Data is Empty !\n";
            getchar();
            getchar();
            system("cls");
            continue;
        }
        else if (a == 2)
        {
            cout << "Witch Type You Want Get Details: \n1. Name \t||\t2. Student Key\n";
            int n;
            cin >> n;
            if (n == 1)
            {
                string name;
                cout << "Enter Student Name For Find: ";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                getline(cin, name);
                int n;
                n = show(name, s, del, dele);
                if (ch_del(n, del, dele) == 1)
                {
                    if (n > count)
                    {
                        cout << "Student Not Found !";
                        getchar();
                        getchar();
                        continue;
                    }
                    s[n].sh();
                }
                else
                {
                    cout << "The Student is not found OR Might be Deleted.\n";
                    cout << "Press Enter to Continue...";
                    getchar();
                    getchar();
                }
            }
            else if (n == 2)
            {
                cout << "Enter Student Key: ";
                cin >> n;
                if (ch_del(n, del, dele) == 1)
                {
                    if (n > count)
                    {
                        cout << "Student Not Found !";
                        getchar();
                        getchar();
                        continue;
                    }
                    s[n].sh();
                }
                else
                {
                    cout << "The Student is not found OR Might be Deleted.\n";
                    cout << "Press Enter to Continue...";
                    getchar();
                    getchar();
                }
            }
        }
        else if (a == 3)
        {
            cout << "Are You Shure To Delete Whole Data !\npress 1";
            getchar();
            char c = getchar();
            if (c == '1')
            {
                s.clear();
                count = 0;
                del.clear();
                dele = 0;
            }
        }
        else if (a == 4)
        {
            int n;
            cout << "Enter Student Key to Delete: ";
            cin >> n;
            if (ch_del(n, del, dele) == 1)
            {
                del.emplace_back(n);
                dele++;
                system("cls");
                cout << "Student Detail Deleted Seccusfully \n";
            }
            else
            {
                cout << "The Student is not found OR Might be Deleted.\n";
                cout << "Press Enter to Continue...";
                getchar();
                getchar();
            }
        }
        if (a == 5)
        {
            cout << "Witch Type You Want Get Details & Update: \n1. Name \t||\t2. Student Key\n";
            int n;
            cin >> n;
            if (n == 1)
            {
                string name;
                cout << "Enter Student Name For Find: ";
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                getline(cin, name);
                int n = update(name, s, del, dele);
                if (ch_del(n, del, dele) == 1)
                {
                    if (n > count)
                    {
                        cout << "Student Not Found !";
                        getchar();
                        getchar();
                        continue;
                    }
                    update(s[n]);
                }
                else if (n == 2)
                {
                    cout << "Enter Student Key: ";
                    cin >> n;
                    if (ch_del(n, del, dele) == 1)
                    {
                        if (n > count)
                        {
                            cout << "Student Not Found !";
                            getchar();
                            getchar();
                            continue;
                        }
                        update(s[n]);
                    }
                    else
                    {
                        cout << "The Student is not found OR Might be Deleted.\n";
                        cout << "Press Enter to Continue...";
                        getchar();
                        getchar();
                    }
                }
            }
        }
        getchar();
        getchar();
        system("cls");
    }
}
