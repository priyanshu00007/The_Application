#include <iostream>
#include <cmath> // Use cmath instead of math.h
#include <conio.h>
#include <windows.h>
using namespace std;

class app
{
public:
    void calc();
    void game();
    void stopwatch();
    void tomato();
    void oola();
    void qna();
    void choice();
};

void app::calc()
{
    int choice;
    cout << "Calculator Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Square Root" << endl;
    cout << "6. Exponentiation" << endl;
    cout << "7. Square of a Number" << endl;
    cout << "Enter your choice (1-7): ";
    cin >> choice;

    double num1, num2, result;

    switch (choice)
    {
    case 1:
        cout << "You selected Addition." << endl;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        result = num1 + num2;
        cout << "Result: " << result << endl;
        break;

    case 2:
        cout << "You selected Subtraction." << endl;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        result = num1 - num2;
        cout << "Result: " << result << endl;
        break;

    case 3:
        cout << "You selected Multiplication." << endl;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        result = num1 * num2;
        cout << "Result: " << result << endl;
        break;

    case 4:
        cout << "You selected Division." << endl;
        cout << "Enter the numerator: ";
        cin >> num1;
        cout << "Enter the denominator: ";
        cin >> num2;
        if (num2 == 0)
        {
            cout << "Division by zero is not allowed." << endl;
        }
        else
        {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        }
        break;

    case 5:
        cout << "You selected Square Root." << endl;
        cout << "Enter a number: ";
        cin >> num1;
        if (num1 < 0)
        {
            cout << "Square root of a negative number is not real." << endl;
        }
        else
        {
            result = sqrt(num1);
            cout << "Result: " << result << endl;
        }
        break;

    case 6:
        cout << "You selected Exponentiation." << endl;
        cout << "Enter the base: ";
        cin >> num1;
        cout << "Enter the exponent: ";
        cin >> num2;
        result = pow(num1, num2);
        cout << "Result: " << result << endl;
        break;

    case 7:
        cout << "You selected Square of a Number." << endl;
        cout << "Enter a number to find its square: ";
        cin >> num1;
        result = num1 * num1;
        cout << "Square of " << num1 << " is: " << result << endl;
        break;

    default:
        cout << "Invalid choice." << endl;
        break;
    }
}

void app::game()
{
    cout << "This is a game." << endl;
}

void app::stopwatch()
{
    system("CLS");
    int HH = 0, MM = 0, SS = 0;
    cout << " \n\t\t stopwatch";
    cout << " \n\t\t HH: MM: SS";
    cout << " \n\t\t " << HH << " : " << MM << " : " << SS;
    cout << " \n\t\t press any key to start";
    _getch();
    while (!_kbhit())
    {
        SS++;
        Sleep(1000);
        if (SS > 59)
        {
            MM++;
            SS = 0;
        }
        if (MM > 59)
        {
            HH++;
            MM = 0;
        }
        system("CLS");
        cout << " \n\t\t stopwatch";
        cout << " \n\t\t HH: MM: SS";
        cout << " \n\t\t " << HH << " : " << MM << " : " << SS;
        cout << " \n\t\t press any key to stop";
    }
    cout << " \n\t\t the time after pausing is";
    cout << " \n\t\t " << HH << " : " << MM << " : " << SS;
}

void app::tomato()
{
    int n, i;
    char R, r;
    char press[5], rest[50], dish[50], start[50], main[50], unlimit[50], dessert[50];

    cout << "Welcome to tomato \n";
    cout << "From which restaurant you would like to order your food: \n 1->Timpani \n 2->Essence - All Day Dining: \n 3->Adalaj Pavilion \n 4->R Kitchen \n 5->Olive Bistro and Bar: \n 6->Tre-Forni Bar and Restaurant: \n 7->Bidri \n 8->Agashiye \n 9->Vishalla \n 10->Hyaat \n";
    cin >> rest;
    cout << "What would you like to have \n";
    cout << "\n1 -> Breakfast \n2 -> Lunch\n3 -> Dinner\n";
    cin >> i;

    if (i == 1)
    {
        cout << "Enter your dish name : ";
        cin >> dish;
    }
    else if (i == 2 || i == 3)
    {
        cout << "Here is your menu category, choose any:\n";
        cout << "1 -> Starters \n2 -> Main Course \n3 -> Dessert \n4 -> Unlimited Lunch/Dinner\n";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "What would you like to have in Starters\n";
            cout << "enter the name of dish you would like to order";
            cin >> start;
            break;
        case 2:
            cout << "What would you like to have in Main Course\n";
            cout << "enter the name of dish you would like to order";
            break;
        case 3:
            cout << "What would you like to have in Dessert\n";
            cout << "enter the name of dessert you want to order";
            cin >> dessert;
            break;
        case 4:
                       cout << "You have chosen Unlimited Lunch or Dinner\n";
            break;

        default:
            cout << "You had pressed an invalid number, press R or r to order again: ";
            cin >> r;
            if (r == 'R' || r == 'r')
            {
                tomato();
            }
        }
    }
}

void app::qna()
{
    string c_name, c_loc, c_flo, c_to, id, pass, d_no;
    char d_check;

    cout << "Enter your name: ";
    cin >> c_name;
    cout << "Enter your location: ";
    cin >> c_loc;
    cout << "From: ";
    cin >> c_flo;
    cout << "To: ";
    cin >> c_to;
    cout << "Enter your ID: ";
    cin >> id;
    cout << "Enter your password: ";
    cin >> pass;
    cout << "Do you have a driving license (Y or N)? ";
    cin >> d_check;

    if (d_check == 'Y' || d_check == 'y') {
        cout << "Enter your driving license number for verification: ";
        cin >> d_no;
    }
    else {
        cout << "You are not allowed to drive. Sorry, but try another way.";
        cout << "Press R for restart: ";
        char restart;
        cin >> restart;
        if (restart == 'R' || restart == 'r')
        {
            qna();
        }

    }
}

void app::choice()
{
    int _no, l, proceed, pay;
    string d_name, d_loc, d_flo, d_to, _veh;

    cout << "Enter your name: ";
    cin >> d_name;
    cout << "Enter your location: ";
    cin >> d_loc;
    cout << "From: ";
    cin >> d_flo;
    cout << "To: ";
    cin >> d_to;
    cout << "No of people with you: ";
    cin >> _no;
    cout << "Which vehicle do you want: ";
    cin >> _veh;
    cout << "How would you like to proceed with payment: \n 1->cash or 2->online payment: ";
    cin >> l;

    switch (l)
    {
    case 1:
        cout << "We will take payment after the drop." << endl;
        break;

    case 2:
        cout << "1-> phone pay \n 2->google pay \n 3->QR SCANNER \n press 1 , 2 or 3 " << endl;
        cin >> pay;
        if (pay == 1 || pay == 2 || pay == 3)
        {
            cout << "Here is our QR SCANNER. You can scan and proceed with your payment.";
        }
        else {
            cout << "You had entered an invalid number. Try again for start press R: ";
            char restart;
            cin >> restart;
            if (restart == 'R' || restart == 'r')
            {
                choice();
            }
        }
        break;

    default:
        cout << "You have entered an invalid key. Please try again." << endl;
        choice();
    }
}

void app::oola()
{
    int choose;
    cout << "Welcome to the Oola app." << endl;
    cout << "What would you like to do:"<<endl<<"1->ride or 2->drive: ";
    cin >> choose;

    switch (choose)
    {
    case 1:
        int p;
        char restart[5];
        cout << "What would you like to drive: \n 1->bike or 2->car: ";
        cin >> p;
        if (p == 1 || p == 2)
        {
            qna();
        }
        else
        {
            cout << "You have entered an invalid key. Please try again. \n for restart press r" << endl;
             if (restart[5] == 'R' || restart[5] == 'r')
            {
                oola();
            }
        }
        break;
    case 2:
        int drive;
        cout << "What would you like to drive: \n 1->bike or 2->car: ";
        cin >> drive;
        if (drive == 1 || drive == 2)
        {
            choice();
        }
        else
        {
            cout << "You have entered an invalid key. Please try again.\n press R for choice" << endl;
            if (restart[5] == 'R' || restart[5] == 'r')
            {
                choice();
            }
        }
        break;
    }
}

int main()
{
    app a;
    int choice;

    cout << "Select an app to launch:" << endl;
    cout << "1. Calculator" << endl;
    cout << "2. Game" << endl;
    cout << "3. Stopwatch" << endl;
    cout << "4. Tomato  food app" << endl;
    cout << "5. Oola travelling app" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        a.calc();
        break;
    case 2:
        a.game();
        break;
    case 3:
        a.stopwatch();
        break;
    case 4:
        a.tomato();
        break;
    case 5:
        a.oola();
        break;
    default:
        cout << "Invalid choice." << endl;
        break;
    }

    return 0;
}

