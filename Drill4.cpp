#include "std_lib_facilities.h"



int main () 

{

    double bemenet;

    double osszeg=0.0;

    string egyseg;

    vector<double> ertekek;



    while (cin >> bemenet >> egyseg)

    {





        if (egyseg == "m")



            bemenet=bemenet;



        else if (egyseg == "cm")



            bemenet = bemenet/100;



        else if (egyseg== "in")



            bemenet = bemenet*0.3048;



        else if (egyseg == "ft")



            bemenet=bemenet*0.254;



        else {

            cout << "Hibas bemeneti ertek.\n";

            }



        ertekek.push_back(bemenet);

        osszeg +=bemenet;



    }



    double min=0;

    

    for(int i=1; i<ertekek.size();++i)

    {

        if(ertekek[i]<ertekek[min])

        {

            min=i;

        }

    }



    double max=0;



    for(int i=1; i<ertekek.size();++i)

    {

        if(ertekek[i]>ertekek[max])

        {

            max=i;

        }

    }



    sort(ertekek);



    cout << "Az ertekek: ";



    for (int i = 0; i < ertekek.size(); ++i)

        cout << ertekek[i] << "m, ";

    cout << "\n";

    cout<<"Az osszeg: "<<osszeg<<" m\n";

    cout<<"A legnagyobb ertek: "<<ertekek[max]<<" m\n";

    cout<<"A legkisebb ertek: "<<ertekek[min]<<" m\n";

    

    return 0;

}
