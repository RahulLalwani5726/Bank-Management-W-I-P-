#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream f;
    string s = "test";
    cout << "Enter Custmer Name: ";
    cin >> s;
    s += " ";
    s += __DATE__;
    s += ".txt";
    f.open(s, _S_noreplace);
    string n;
    cout << "Enter Shop Name: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, n);
    f << "\n          " << n << "\n";
    f << "\n"
      << __DATE__ << endl;
    f << "Product Name" << " | " << "Price" << " | " << "Quintity" << " |" << "Total \n";
    float sum = 0;
    while (true)
    {
        system("cls");
        cout << "\n1. Sell Item \t|\t 2. Genrate Bill\n\n";
        cout << "Enter Your Command: ";
        int n;
        cin >> n;
        if (n == 1)
        {
            string s;
            int contity = 1;
            float price = 0, total = 0;
            cout << "Enter Product Name: ";
            cin >> s;
            cout << "Enter Product Quintinty: ";
            cin >> contity;
            cout << "Enter Per Product Price: ";
            cin >> price;
            total = price * contity;
            sum += total;
            string p = to_string(price);
            string c = to_string(contity);
            f << s << setw(2 + 13 - s.length()) << " | " << price << setw(15 - p.length()) << " | " << contity << setw(11 - c.length()) << " | " << total << endl;
        }
        else if (n == 2)
        {
            float d, gst;
            int g;
            cout << "Enter Discount: ";
            cin >> d;
            cout << "Enter GST(%): ";
            cin >> g;
            gst = (sum * g) / 100;
            float total = ((sum + gst) - d);
            string d1, gst1, sum1, total1;
            f << "______________________________________\n";
            /*13+20 = 33*/ f << "Total Ammount" << setw(20 - sum1.length()) << sum << endl;
            /*6+20* = 26*/ f << "GST(+" << g << ")" << setw(6 + 20 - gst1.length()) << gst << endl;
            /*11+20 = 31+2*/ f << "Discount(-" << d << ")" << setw(20 - d1.length()) << d << endl;
            f << "______________________________________\n";
            f << setw(33 - sum1.length()) << total << endl;
            f << "______________________________________\n";
            break;
        }
    }
    f << "\n        * Thanks For Shoping *";
}