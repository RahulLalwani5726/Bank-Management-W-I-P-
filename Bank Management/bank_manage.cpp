#include <bits/stdc++.h>
using namespace std;
class bank
{
protected:
    string name;
    static int total_acc;
    long long int A_no = 0;
    string pass = "";
    long double ammount = 0;
    friend void find(bank a[], int len);
    friend void del_show(bank ar[], int del[], int len);
    friend void modi(bank &o, string p);
    // void manage(bank *arr[] , int del[] , int d_len , int o_len);
    friend class manage;

public:
    // ------------------------- Creating---------------------------------
    void create()
    {
        system("cls");
        cout << "Enter Your name: ";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std ::getline(std ::cin, name);
        cout << "\nEnter Your password: ";
        cin >> pass;
        A_no = rand() % 9999999999;
        total_acc++;
        show(pass);
        getchar();
    }
    // ----------------- showing--------------------------------------
    void show(string p)
    {
        if (p != pass)
        {
            cout << "Invalid Password !!";
            getchar();
            return;
        }
        system("cls");
        cout << "Account Holder name : " << name;
        cout << "\nYour Account NUMBER is :-> " << A_no << endl;
        cout << "Your Total ammount is :-> " << ammount << endl;
        cout << "Your Password is :-> " << pass << endl;
        cout << "YOUR KEY IS : " << total_acc - 1 << endl;
        getchar();
    }
    // ------------------------Depositing--------------------------------------
    void deposite(string p)
    {
        if (p != pass)
        {
            cout << "Invalid Password !!";
            return;
        }
        system("cls");
        long double am, temp;
        cout << "\nenter Your ammount total ammount: \n";
        cin >> am;
        temp = ammount;
        ammount = am;
        cout << "\nYour previous ammount is " << temp << endl;
        cout << "\nYour current ammount is " << ammount << endl;
        getchar();
        getchar();
    }
    // -----------------------Withdraw-------------------------------------
    void withdraw(string p)
    {
        if (p != pass)
        {
            cout << "Invalid Password !!";
            return;
        }
        system("cls");
        cout << "Your Total Balance is : " << ammount << endl;
    l:
        long double with;
        cout << "Enter your Withdraw ammount: \n";
        cin >> with;
        if (0 >= ammount - with)
        {
            cout << "Unsifint ammount !!\nRe-enter your ammount:  \n";
            goto l;
        }
        ammount = ammount - with;
    }
};
int bank ::total_acc = 0;
// ------------------------------ DELETING And Chaking -----------------------------
int ch_del(int key, int d_u[], int d)
{
    for (int j = 0; j < d; j++)
    {
        if (d_u[j] == key)
        {
            cout << "The account is not found OR Might be Deleted.\n";
            getchar();
            return 0;
        }
    }
    return 1;
}
// --------------- Modify Account-------------------------------------------
void modi(bank &o, string p)
{
    system("cls");
    if (o.pass != p)
    {
        cout << "Invalid Password !!";
        getchar();
        return;
    }
    while (true)
    {
        int a;
        cout << "What You Modify :\n";
        cout << "1. Name    \t|\t 2. Password\n";
        cout << "0. Exit\n";
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "Enter Name: ";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            getline(cin, o.name);
            break;

        case 2:
            cout << "Enter Password: \n";
            cin >> o.pass;
            break;
        case 0:
            return;
            break;

        default:
            break;
        }
    }
}

// ------------------ Secret-----------------------------
class manage
{
    // -------------- show all account--------------------------------------

    void show_o(bank arr[], int o_len, int del[], int d_len)
    {
        for (int i = 0; i < o_len; i++)
        {
            for (int j = 0; j < d_len; j++)
            {
                if (del[j] == i)
                {
                    continue;
                }
                else
                {
                    arr[i].show(arr[i].pass);
                    getchar();
                }
            }
        }
    }
    // ------------------ by Key---------------------------------------
    void show_o_k(bank &o)
    {
        o.show(o.pass);
    }
    // -------------------- Show Deleted Account-------------------------------
    void del_show(bank ar[], int del[], int len)
    {
        for (int i = 0; i < len; i++)
        {

            ar[del[i]].show(ar[del[i]].pass);
            getchar();
        }
    }
    // ------------------------ by Key -------------------------------------
    void show_d_k(bank &o)
    {
        o.show(o.pass);
    }
    // ---------------- FRND FUN FIND----------------------------------------
    void find(bank a[], int len)
    {
        string s;
        cout << "Enter user name for Find :";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        getline(cin, s);
        for (int j = 0; j < len; j++)
        {
            if (s == a[j].name)
            {
                cout << "User was found: ";
                a[j].show(a->pass);
                getchar();
                return;
            }
        }
        cout << "\nUser Not Found !!\n";
        return;
    }
    void modify(bank arr[], int o_len, int del[], int d_len)
    {
        int a;
        cout << "1. By Name \t|\t 2. By Account Key\n";
        cin >> a;
        if (a == 1)
        {
            string s;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Enter User Name: ";
            getline(cin, s);
            for (int i = 0; i < o_len; i++)
            {
                for (int j = 0; j < d_len; j++)
                {
                    if (del[j] == i)
                    {
                        continue;
                    }
                    else if (arr[i].name == s)
                    {
                        while (true)
                        {
                            int a;
                            cout << "What You Modify :\n";
                            cout << "1. Name    \t|\t 2. Password\n";
                            cout << "3. Ammount \t|\t 4. Account NO\n";
                            cout << "0. Exit\n";
                            cin >> a;
                            switch (a)
                            {
                            case 1:
                                cout << "Enter Name: ";
                                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                                getline(cin, arr[i].name);
                                break;

                            case 2:
                                cout << "Enter Password: \n";
                                cin >> arr[i].pass;
                                break;

                            case 3:
                                cout << "Enter Ammount:\n";
                                cin >> arr[i].ammount;
                                break;

                            case 4:
                                cout << "Enter A/C NO: ";
                                cin >> arr[i].A_no;
                                break;

                            case 0:
                                return;
                                break;

                            default:
                                break;
                            }
                        }
                    }
                }
            }
        }
        else if (a == 2)
        {
            int k;
            cout << "Enter Account Key: ";
            cin >> k;
            while (true)
            {
                int a;
                cout << "What You Modify :\n";
                cout << "1. Name    \t|\t 2. Password\n";
                cout << "3. Ammount \t|\t 4. Account NO\n";
                cout << "0. Exit\n";
                cin >> a;
                switch (a)
                {
                case 1:
                    cout << "Enter Name: ";
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    getline(cin, arr[k].name);
                    break;

                case 2:
                    cout << "Enter Password: \n";
                    cin >> arr[k].pass;
                    break;

                case 3:
                    cout << "Enter Ammount:\n";
                    cin >> arr[k].ammount;
                    break;

                case 4:
                    cout << "Enter A/C NO: ";
                    cin >> arr[k].A_no;
                    break;

                case 0:
                    return;
                    break;

                default:
                    break;
                }
            }
        }
    }

public:
    void entr(bank arr[], int d_u[], int d_len, int o_len)
    {
        system("cls");
        cout << "===================================================================================================\n"
             << "\t\t\t\tYour Enter Bank Manage Account\n\n"
             << "\t\t\t\t         Main Meniu\n\n"
             << "\n===================================================================================================\n";
        while (true)
        {
            getchar();
            getchar();
            system("cls");
            cout << "Enter Your Command :->\n";
            cout << "1. Operation on Open Account " << "\t|\t2. Operatin on Delete Account \n";
            cout << "3. Find Account              " << "\t|\t4. Modify Account \n";
            int a;
            cin >> a;
            system("cls");
            if (a == 1)
            {
                cout << "1. Show All Account \t|\t 2. Show Key Account\n";
                cin >> a;
                if (a == 1)
                {
                    show_o(arr, o_len, d_u, d_len);
                }
                else if (a == 2)
                {
                    cout << "Enter Key: ";
                    int k;
                    cin >> k;
                    show_o_k(arr[k]);
                }
            }
            else if (a == 2)
            {
                cout << "1. Show All Account \t|\t 2. Show Key Account\n";
                cin >> a;
                if(a == 1){
                del_show(arr, d_u, d_len);
                }
                else if(a == 2){
                    cout << "Enter Key: ";
                    int k;
                    cin >> k;
                    show_d_k(arr[k]);
                }
            }
            else if (a == 3)
            {
                find(arr, o_len);
            }
            else if (a == 4)
            {
                modify(arr, o_len, d_u, d_len);
            }
            else if (a == 5726)
            {
                cout << "\nExiting ...\n 100%\n Press Enter \n";
                getchar();
                // getchar();
                return;
            }
        }
    }
};
int main()
{
    cout << "\t\t\t\t  Welcome to bank manage\n"
         << "===================================================================================================\n"
         << "\t\t\t\t       Main Meniu"
         << "\n===================================================================================================\n";
    static int i;
    static int d = 0;
    bank arr[999];
    int d_u[999];
    while (true)
    {
        getchar();
        system("cls");
        cout << "\nEnter Your Command : \n\n";
        cout << "1. Create Account " << "\t|\t2. Show Detail    \n";
        cout << "3. Deposite Money " << "\t|\t4. Withdraw Money \n";
        cout << "5. Modify Account " << "\t|\t6. Delete Account \n";
        // cout<<"7. Create Account "<<"\t|\t2. Show Detail ";
        int a;
        cin >> a;
        if (a == 1)
        {
            for (; i < 999;)
            {
                arr[i].create();
                i++;
                break;
            }
        }
        else if (a == 3)
        {
            string p;
            int key;
            cout << "\nEnter your Key: ";
            cin >> key;
            cout << "Enter Your Password: ";
            cin >> p;
            system("cls");
            if (ch_del(key, d_u, d) == 0)
            {
                continue;
            }
            arr[key].deposite(p);
        }
        else if (a == 2)
        {
            string p;
            int key;
            cout << "\nEnter your Key: ";
            cin >> key;
            cout << "Enter Your Password: ";
            cin >> p;
            system("cls");
            if (ch_del(key, d_u, d) == 0)
            {
                continue;
            }
            arr[key].show(p);
        }
        else if (a == 4)
        {
            string p;
            int key;
            cout << "\nEnter your Key: ";
            cin >> key;
            cout << "Enter Your Password: ";
            cin >> p;
            system("cls");
            if (ch_del(key, d_u, d) == 0)
            {
                continue;
            }
            arr[key].withdraw(p);
        }
        else if (a == 5726)
        {
            manage m;
            m.entr(arr, d_u, d, i);
        }
        else if (a == 6)
        {
            string p;
            int key;
            cout << "\nEnter your Key: ";
            cin >> key;
            cout << "Enter Your Password: ";
            cin >> p;
            system("cls");
            if (ch_del(key, d_u, d) == 0)
            {
                continue;
            }
            d_u[d] = key;
            d++;
            cout << "The Account is deleted.";
        }
        else if (a == 5)
        {
            string p;
            int key;
            cout << "\nEnter your Key: ";
            cin >> key;
            cout << "Enter Your Password: ";
            cin >> p;
            modi(arr[key], p);
        }
    }
}
