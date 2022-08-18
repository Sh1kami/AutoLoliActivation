#include <iostream>
using namespace std;

void Windows()
{
act:
    system("color 09");
    system("cls");
    int ver, type;
    cout << endl << '\t' << "Windows activation menu" << endl << endl;
    cout << '\t' << "Select version Windows" << endl;
    cout << '\t' << "[1] = Win 10/11" << endl;
    cout << '\t' << "[0] = Back to menu" << endl << endl;
    cout << '\t' << "[X] = ";
    cin >> ver;
ver:
    if (ver == 1)
    {
        goto win10type;
    }
    if (ver == 0)
    {
        goto leave;
    }
    else
    {
        system("color 0c");
        system("cls");
        cout << "Error!" << endl;
        cout << "Please select another type." << endl << endl;
        system("pause");
        goto act;
    }
win10type:
    {
        system("cls");
        cout << endl << '\t' << "Windows activation menu" << endl;
        cout << endl << '\t' << "Select type Windows" << endl;
        cout << '\t' << "[1] = Pro" << endl;
        cout << '\t' << "[2] = Home" << endl;
        cout << '\t' << "[3] = Home Single Language" << endl;
        cout << '\t' << "[4] = Enterprise" << endl;
        cout << '\t' << "[0] = Back to version select" << endl << endl;
        cout << '\t' << "[X] = ";
        cin >> type;
    type10:
        {
            if (type == 1)
            {
                goto act10pro;
            }
            if (type == 2)
            {
                goto act10home;
            }
            if (type == 3)
            {
                goto act10homes;
            }
            if (type == 4)
            {
                goto act10ent;
            }
            if (type == 0)
            {
                goto act;
            }
            else
            {
                system("color 0c");
                system("cls");
                cout << "Error!" << endl;
                cout << "Please select another type." << endl << endl;
                system("pause");
                goto win10type;
            }
        }
    act10pro:
        {
            system("color 0c");
            system("cls");
            cout << endl << '\t' << "Windows activation menu" << endl;
            cout << '\t' << "Windows 10/11 Pro activation" << endl;
            cout << endl << '\t' << "Warning! Do not turn off your PC or program during activation!" << endl;
            system("slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
            system("slmgr /skms kms.loli.beer");
            system("slmgr /ato");
            cout << '\t' << "Activation done." << endl << endl;
            system("pause");
            goto leave;
        }
    act10home:
        {
            system("color 0c");
            system("cls");
            cout << endl << '\t' << "Windows activation menu" << endl;
            cout << endl << '\t' << "Windows 10/11 Home activation" << endl;
            cout << endl << '\t' << "Warning! Do not turn off your PC or program during activation!" << endl;
            system("slmgr /ipk TX9XD-98N7V-6WMQ6-BX7FG-H8Q99");
            system("slmgr /skms kms.loli.beer");
            system("slmgr /ato");
            cout << '\t' << "Activation done." << endl << endl;
            system("pause");
            goto leave;
        }
    act10homes:
        {
            system("color 0c");
            system("cls");
            cout << endl << '\t' << "Windows activation menu" << endl;
            cout << endl << '\t' << "Windows 10/11 Home single language activation" << endl;
            cout << endl << '\t' << "Warning! Do not turn off your PC or program during activation!" << endl;
            system("slmgr /ipk 7HNRX-D7KGG-3K4RQ-4WPJ4-YTDFH");
            system("slmgr /skms kms.loli.beer");
            system("slmgr /ato");
            cout << '\t' << "Activation done." << endl << endl;
            system("pause");
            goto leave;
        }
    act10ent:
        {
            system("color 0c");
            system("cls");
            cout << endl << '\t' << "Windows activation menu" << endl;
            cout << endl << '\t' << "Windows 10/11 Enterprise activation" << endl;
            cout << endl << '\t' << "Warning! Do not turn off your PC or program during activation!" << endl;
            system("slmgr /ipk NPPR9-FWDCX-D2C8J-H872K-2YT43");
            system("slmgr /skms kms.loli.beer");
            system("slmgr /ato");
            cout << '\t' << "Activation done." << endl << endl;
            system("pause");
            goto leave;
        }
    }
leave:
    return;
}

void main()
{
    system("title AutoLoliActivation");
    setlocale(0, "");
    string key;
    int var;
menu:
    {
        system("cls");
        system("color 0d");
        cout << endl << '\t' << "AutoLoliActivation menu" << endl << endl << endl;
        cout << '\t' << "Select what to activate" << endl;
        cout << '\t' << "[1] = Windows" << endl;
        cout << '\t' << "[0] = Creator" << endl << endl;
        cout << '\t' << "[X] = ";
        cin >> var;
        if (var >= 0 || var <= 1)
        {
            goto select;
        }
        else
        {
            goto menu;
        }
    }
select:
    {
        if (var == 1)
        {
            goto windows;
        }
        if (var == 0)
        {
            goto creator;
        }
        else
        {
            system("color 0c");
            system("cls");
            cout << "Error!" << endl;
            cout << "Please select another type." << endl << endl;
            system("pause");
            goto menu;
        }
    }
windows:
    {
        Windows();
    }
    goto menu;
creator:
    {
        system("color 0b");
        system("cls");
        cout << endl << '\t' << "Creator: Shikami" << endl << endl;
        cout << '\t' << "Links:" << endl;
        cout << '\t' << "Gihub: @Sh1kami" << endl;
        cout << '\t' << "Telegram: @Sh1kami" << endl;
        cout << '\t' << "Gmail: ShikamiGod@gmail.com" << endl << endl;
        system("pause");
        goto menu;
    }
}