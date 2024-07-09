#include <bits/stdc++.h>
using namespace std;
static int i;
class inventory
{
    string product;
    string product_type;
    long long int Quantity = 0;
    long double Purchase_price = 0;
    long long int Purchase_itme = 0;
    long long int sell_itme = 0;
    long double Sell_price = 0;
    int product_key = 0;
    long double p_l = 0;
    // ------------------------------------- Friends-----------------
    friend void update(inventory &o);
    friend void update(vector<inventory> o, string name, string type, int len);
    friend void Purchase(vector<inventory> o, string name, string type, int len);
    friend void sell(vector<inventory> o, string name, string type, int len);
    friend void al_show(vector<inventory> o, int len);
    friend void sh(vector<inventory> o, string t, string n, int l);

public:
    inventory(int a) {}
    void store_product()
    {
        system("cls");
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Enter Product Type : ";
        getline(cin, product_type);
        cout << "Enter Product Name: ";
        getline(cin, product);
        cout << "Enter Purchase Price: ";
        cin >> Purchase_price;
        cout << "Enter Purchase Quantity: ";
        cin >> Purchase_itme;
        cout << "Enter Sell Price: ";
        cin >> Sell_price;
        Quantity = Purchase_itme;
        product_key = i;
        Show_item();
    }
    void Show_item()
    {
        system("cls");
        cout << "TIME: " << __TIME__ << endl
             << "DATE: " << __DATE__ << endl;
        cout << "Product KEY : " << product_key << endl;
        cout << "Product Type: " << product_type << endl;
        cout << "Product Name: " << product << endl;
        cout << "Product Available Quantity: " << Quantity << endl;
        cout << "Product Purchase Price: " << Purchase_price << endl;
        cout << "Product Sell price: " << Sell_price << endl;
        cout << "Total Purchase Quantity: " << Purchase_itme << endl;
        cout << "Total sell Quantity: " << sell_itme << endl;
        cout << "Total Profit/Loss by This product : " << p_l << " RS" << endl;
        cout << "Press Enter to continue...\n\n";
        string s = product;
        s += "_";
        s += __DATE__;
        s += "_Detail.txt";
        char a;
        getchar();
        cout << "Press 1 For Get DETAIL in TEXT: ";
        a = getchar();
        if (a == '1')
        {
            cout << "Genrating Respit \n \t 100%\n ";
            ofstream f;
            f.open(s, std::fstream::__noreplace);
            f << "\t||\t\t\tProduct Detail\t\t\t||\n"
              << "=================================================================\n\n";
            f << "TIME: " << __TIME__ << endl
              << "DATE: " << __DATE__ << endl
              << endl;
            f << "Product KEY: " << product_key << endl;
            f << "Product Type: " << product_type << endl;
            f << "Product Name: " << product << endl;
            f << "Purchase Price: " << Purchase_price << endl;
            f << "Purchased item: " << Purchase_itme << endl;
            f << "Selling Price: " << Sell_price << endl;
            f << "Total Selling: " << sell_itme << endl;
            f << "Total Quantity: " << Quantity << endl
              << endl;
            f << "PROFIT / LOSS: " << p_l << endl;
        }
        getchar();
        getchar();
    }
};
// ----------------- update Product-----------------------------------
void update(inventory &o)
{
    system("cls");
    int a;
    o.Show_item();
    cout << "What you want to update: \n";
    while (true)
    {
        cout << "1. Quantity       \t|\t2. Sell Price  \n";
        cout << "3. Product Name   \t|\t4. Product Type\n";
        cout << "5. Purchase Price \t|\t0. Exit        \n";
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "Enter Product Quantity: ";
            cin >> o.Quantity;
            break;

        case 2:
            cout << "Enter Product Sell Price: ";
            cin >> o.Sell_price;
            break;

        case 3:
            cout << "Enter Product Name : ";
            cin >> o.product;
            break;
        case 4:
            cout << "Enter Product Type: ";
            cin >> o.product_type;
            break;

        case 5:
            cout << "Enter Product Purchase Price: ";
            cin >> o.Purchase_price;
            break;

        case 0:
            cout << "Exiting..\n";
            return;
            break;
        default:
            break;
        }
    }
    cout << "The Product Not Found !\n";
    cout << "Press Enter to continue...\n\n";
    getchar();
    system("cls");
}
// --------------------2. Name------------------------------------
void update(vector<inventory> o, string name, string type, int len)
{
    system("cls");
    for (int i = 0; i < len; i++)
    {
        if (o[i].product_type == type && o[i].product == name)
        {
            int a;
            cout << "What you want to update: \n";
            while (true)
            {
                system("cls");
                cout << "1. Quantity           \t|\t2. Sell Price  \n";
                cout << "3. Product Name       \t|\t4. Product Type\n";
                cout << "5. Purchase Price     \t|\t0. Exit        \n";
                cin >> a;
                switch (a)
                {
                case 1:
                    cout << "Enter Product Quantity: ";
                    cin >> o[i].Quantity;
                    break;

                case 2:
                    cout << "Enter Product Sell Price: ";
                    cin >> o[i].Sell_price;
                    break;

                case 3:
                    cout << "Enter Product Name: ";
                    cin >> o[i].product;
                    break;
                case 4:
                    cout << "Enter Product Type: ";
                    cin >> o[i].product_type;
                    break;

                case 5:
                    cout << "Enter Product Purchase Price: ";
                    cin >> o[i].Purchase_price;
                    break;
                case 0:
                    cout << "Exiting..\n";
                    return;
                    break;
                default:
                    break;
                }
            }
        }
    }
    cout << "The Product Not Found !\n";
    cout << "Press Enter to continue...\n\n";
    getchar();
    system("cls");
}
// ---------------- Purchase Availabe Product----------------------------
long long int jf = 0;
void Purchase(vector<inventory> o, string name, string type, int len)
{
    system("cls");
    for (int i = 0; i < len; i++)
    {
        if (o[i].product_type == type && o[i].product == name)
        {
            int Purchase;
            float p = o[i].Purchase_price;
            cout << "Enter Purchase Quantity: ";
            cin >> Purchase;
            o[i].Purchase_itme += Purchase;
            cout << "\nOld Purchase Price is :" << o[i].Purchase_price << endl;
            cout << "Enter New Purchase Price: ";
            cin >> o[i].Purchase_price;
            o[i].Quantity += Purchase;
            system("cls");
            cout << "TIME: " << __TIME__ << endl
                 << "DATE: " << __DATE__ << endl
                 << endl;
            cout << "Product KEY: " << o[i].product_key << endl;
            cout << "Product Type: " << o[i].product_type << endl;
            cout << "Product Name: " << o[i].product << endl;
            cout << "OLD PURCHASE PRICE: " << p << endl;
            cout << "NEW Purchase Price: " << o[i].Purchase_price << endl;
            cout << "Purchased item: " << o[i].Purchase_itme << endl;
            cout << "Total Quantity: " << o[i].Quantity << endl;
            string s = o[i].product;
            s += "_";
            s += __DATE__;
            s += "_";
            s += to_string(jf);
            jf++;
            s += "_Purchase.txt";
            char a;
            a = getchar();
            a = getchar();
            cout << "Press 1 For Get DETAIL in TEXT: ";
            a = getchar();
            if (a == '1')
            {
                cout << "Genrating Respit \n \t 100%\n ";
                ofstream f;
                f.open(s, std::fstream::__noreplace);
                f << "\t||\t\t\tProduct Purchase Detail\t\t\t||\n"
                  << "=================================================================\n\n";
                f << "TIME: " << __TIME__ << endl
                  << "DATE: " << __DATE__ << endl
                  << endl;
                f << "Product KEY: " << o[i].product_key << endl;
                f << "Product Type: " << o[i].product_type << endl;
                f << "Product Name: " << o[i].product << endl;
                f << "OLD PURCHASE PRICE: " << p << endl;
                f << "NEW Purchase Price: " << o[i].Purchase_price << endl;
                f << "Purchased item: " << o[i].Purchase_itme << endl;
                f << "Total Quantity: " << o[i].Quantity << endl;
            }
            return;
        }
    }
    cout << "The Product Not Found !\n";
    cout << "Press Enter to continue...\n\n";
    getchar();
    system("cls");
}
// --------------- Sell Product ----------------------------------
long long int ifile = 0;
void sell(vector<inventory> o, string name, string type, int len)
{
    system("cls");
    for (int i = 0; i < len; i++)
    {
        if (o[i].product_type == type && o[i].product == name)
        {
            int sel;
        l:
            cout << "Enter Sell Quantity: ";
            cin >> sel;
            long long int se_price;
            if (sel > o[i].Quantity)
            {
                cout << "The disparity between the quantity available for sale and the quantity demanded is considerable. It is imperative to rectify this imbalance by ensuring that the available quantity aligns with the demand.\n";
                goto l;
            }
            o[i].sell_itme += sel;
            o[i].Quantity -= sel;
            cout << "Enter Sell Price: ";
            cin >> se_price;
            o[i].p_l += (se_price - (o[i].Purchase_price / o[i].Purchase_itme)) * sel;
            system("cls");
            cout << "TIME: " << __TIME__ << endl
                 << "DATE: " << __DATE__ << endl
                 << endl;
            cout << "Product KEY: " << o[i].product_key << endl;
            cout << "Product Type: " << o[i].product_type << endl;
            cout << "Product Name: " << o[i].product << endl;
            cout << "Purchase Price: " << o[i].Purchase_price << endl;
            cout << "Selling Price: " << o[i].Sell_price << endl;
            cout << "Current Selling Price: " << se_price << endl;
            if (o[i].Sell_price < se_price)
            {
                cout << "PROFIT: " << (se_price - o[i].Sell_price) * sel << endl;
            }
            else if (o[i].Sell_price > se_price)
            {
                cout << "DISCOUNT: " << (o[i].Sell_price - se_price) * sel << endl;
            }
            cout << "Total Selling: " << o[i].sell_itme << endl;
            cout << "Total Quantity: " << o[i].Quantity << endl

                 << endl;
            cout << "Total PROFIT / LOSS of This Product(According to Purcahse And Sell Price): " << o[i].p_l << endl;
            string s = o[i].product;
            s += "_";
            s += __DATE__;
            s += "_";
            s += to_string(ifile);
            ifile++;
            s += "_Sell.txt";
            char a;
            getchar();
            getchar();
            cout << "Press 1 For Get DETAIL in TEXT: ";
            a = getchar();
            if (a == '1')
            {
                cout << "Genrating Respit \n \t 100%\n ";
                ofstream f;
                f.open(s, std::fstream::__noreplace);
                f << "\t||\t\t\tProduct Detail\t\t\t||\n"
                  << "=================================================================\n\n";
                f << "TIME: " << __TIME__ << endl
                  << "DATE: " << __DATE__ << endl
                  << endl;
                f << "Product KEY: " << o[i].product_key << endl;
                f << "Product Type: " << o[i].product_type << endl;
                f << "Product Name: " << o[i].product << endl;
                f << "Purchase Price: " << o[i].Purchase_price << endl;
                f << "Selling Price: " << o[i].Sell_price << endl;
                f << "Current Selling Price: " << se_price << endl;
                if (o[i].Sell_price < se_price)
                {
                    f << "PROFIT: " << (se_price - o[i].Sell_price) * sel << endl;
                }
                else if (o[i].Sell_price > se_price)
                {
                    f << "DISCOUNT: " << (o[i].Sell_price - se_price) * sel << endl;
                }
                f << "Total Selling: " << o[i].sell_itme << endl;
                f << "Total Quantity: " << o[i].Quantity << endl
                  << endl;
                f << "Total PROFIT / LOSS of This Product(According to Purcahse And Sell Price): " << o[i].p_l << endl
                  << endl;
                f << "Total Ammount Recived: " << se_price * sel;
                return;
            }
        }
        cout << "The Product Not Found !\n";
        cout << "Press Enter to continue...\n\n";
        getchar();
        system("cls");
    }
}
// ----------------------- Show all -----------------------------------
long long int df = 0;
void al_show(vector<inventory> o, int len)
{
    int n = 0, j = 0;
    for (int i = 0; i < len; i++)
    {
        if (n < o[i].product.length())
        {
            n = o[i].product.length();
        }
        if (j < o[i].product_type.length())
        {
            j = o[i].product_type.length();
        }
    }

    system("cls");
    long long t_stock = 0;
    long double t_sell_i = 0, t_purchase_i = 0, t_sell_p = 0, t_purchase_p = 0;
    cout << "1. k = Key \n2. T = Product Type\n3. N = Product Name \n4. S_P = Sell Price\n5. S_I = Sell Item \n6. P_P = Purchase Price \n7. P_i = Purchase Item \n8. Q = Quantity\n\n";
    cout << "K" << setw(5) << " | " << "T" << setw(j + 2) << " | " << "N" << setw(n + 2) << " | " << "S_P" << setw(5) << " | " << "S_I" << setw(5) << " | " << "P_P" << setw(5) << " | " << "P_i" << setw(5) << " | " << "Q\n\n";
    for (int i = 0; i < len; i++)
    {
        int k = n - o[i].product.length();
        if (k > 0)
        {
            k += 2;
        }
        int h = j - o[i].product_type.length(); 
        if (h > 0)
        {
            h += 2;
        }
        cout << o[i].product_key << setw(5) << " | " << o[i].product_type << setw(h) << " | " << o[i].product << setw(k) << " | " << o[i].Sell_price << setw(5) << " | " << o[i].sell_itme << setw(5) << " | " << o[i].Purchase_price << setw(5) << " | " << o[i].Purchase_itme << setw(5) << " | " << o[i].Quantity << "\n\n\n";
        t_stock += o[i].Quantity;
        t_sell_i += o[i].sell_itme;
        t_sell_p += o[i].Sell_price;
        t_purchase_i += o[i].Purchase_itme;
        t_purchase_p += o[i].Purchase_price;
    }
    cout << "===============================================================================================\n";
    cout << "The Total Stock is: " << t_stock << "\nThe Total Stock Purchase Price: " << t_purchase_p << " RS " << "\nTotal Stock Purchase item: " << t_purchase_i
         << "\nThe Total Stock Sell Price: " << t_sell_p << " RS " << "\nTotal Stock Sell item: " << t_sell_i;
    getchar();
    getchar();
    string s = "";
    s += "_";
    s += __DATE__;
    s += "_";
    s += to_string(df);
    s += "_All Detail.txt";
    char a;
    a = getchar();
    a = getchar();
    cout << "Press 1 For Get ALL DETAIL in TEXT: ";
    a = getchar();
    ofstream f;
    if (a == '1')
    {
        f.open(s, std::fstream::__noreplace);
        f << "1. k = Key \n2. T = Product Type\n3. N = Product Name \n4. S_P = Sell Price\n5. S_I = Sell Item \n6. P_P = Purchase Price \n7. P_i = Purchase Item \n8. Q = Quantity\n\n";
        f << " K " << setw(8) << " | " << setw(10) << " T " << setw(10) << " | " << setw(8) << " N " << setw(8) << " | " << setw(8) << " S_P " << setw(8) << " | " << setw(8) << " S_I " << setw(8) << " | " << setw(8) << " P_P " << setw(8) << " | " << setw(8) << " P_i " << setw(8) << " | " << setw(8) << " Q \n\n";
        for (int i = 0; i < len; i++)
        {
            f << o[i].product_key << setw(5) << " | " << setw(5) << o[i].product_type << setw(5) << " | " << setw(5) << o[i].product << setw(5) << " | " << setw(5) << o[i].Sell_price << setw(5) << " | " << setw(5) << o[i].sell_itme << setw(5) << " | " << setw(5) << o[i].Purchase_price << setw(5) << " | " << setw(5) << o[i].Purchase_itme << setw(5) << " | " << setw(5) << o[i].Quantity << "\n\n\n";
        }
    }
    f << "===============================================================================================\n";
    f << "The Total Stock is: " << t_stock << "\nThe Total Stock Purchase Price: " << t_purchase_p << " RS " << "\nTotal Stock Purchase item: " << t_purchase_i
      << "\nThe Total Stock Sell Price: " << t_sell_p << " RS " << "\nTotal Stock Sell item: " << t_sell_i;
    df++;
    cout << "Press Enter to continue...\n\n";
    getchar();
    getchar();
}
// ------------------ show by name ---------------------------------------------
void sh(vector<inventory> o, string t, string n, int l)
{
    for (int i = 0; i < l; i++)
    {
        if (o[i].product == n && o[i].product_type == t)
        {
            o[i].Show_item();
            return;
        }
    }
    cout << "The Product Not Found !\n";
    cout << "Press Enter to continue...\n\n";
    getchar();
    system("cls");
}
int main()
{
    vector<inventory> item;
    while (true)
    {
        cout << "===================================================================================================\n";
        cout << "\t\t\t\t" << "Welcome to Inventory Management \n";
        cout << "===================================================================================================\n";
        cout << "Press Enter to continue...\n";
        getchar();
        system("cls");
        cout << "Enter Your Command:- \n";
        cout << "1. Purchase New Product         \t|\t 2. Show Product Detail         \n";
        cout << "3. Sell Availabe Product        \t|\t 4. Purchase Available Product  \n";
        cout << "5. Update product               \t|\t 6. Show All Stock Detail       \n";
        int a;
        cin >> a;
        if (a == 1)
        {
            system("cls");
            item.emplace_back(i);
            item[i].store_product();
            i++;
        }
        else if (a == 2)
        {
            cout << "1. key \t|\t 2. Name\n";
            cin >> a;
            if (a == 1)
            {
                cout << "Enter Product Key: ";
                int k;
                cin >> k;
                system("cls");
                item[k].Show_item();
            }
            else if (a == 2)
            {
                string name, type;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "Enter Product type: ";
                getline(cin, type);
                cout << "Enter Product Name: ";
                getline(cin, name);
                system("cls");
                sh(item, type, name, i);
            }
        }
        else if (a == 5)
        {
            a;
            cout << "Update Product\n1. KEY \t|\t2. Name\n";
            cin >> a;
            if (a == 1)
            {
                int k;
                cout << "Enter Product Key: ";
                cin >> k;
                system("cls");
                update(item[k]);
            }
            else if (a == 2)
            {
                string name, type;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "Enter Product type: ";
                getline(cin, type);
                cout << "Enter Product Name: ";
                getline(cin, name);
                system("cls");
                update(item, name, type, i);
            }
        }
        else if (a == 4)
        {
            string name, type;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Enter Product type: ";
            getline(cin, type);
            cout << "Enter Product Name: ";
            getline(cin, name);
            system("cls");
            Purchase(item, name, type, i);
        }
        else if (a == 3)
        {
            string name, type;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Enter Product type: ";
            getline(cin, type);
            cout << "Enter Product Name: ";
            getline(cin, name);
            system("cls");
            sell(item, name, type, i);
        }
        else if (a == 6)
        {
            al_show(item, i);
        }
    }
}