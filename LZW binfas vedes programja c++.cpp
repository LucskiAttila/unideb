#include <iostream>



class LZWBinFa

{

public:

    LZWBinFa (char b = '/'):betu (b), balNulla (NULL), jobbEgy (NULL) {};

    ~LZWBinFa () {};

    LZWBinFa *nullasGyermek () {

        return balNulla;

    }

    LZWBinFa *egyesGyermek ()

    {

        return jobbEgy;

    }

    void ujNullasGyermek (LZWBinFa * gy)

    {

        balNulla = gy;

    }

    void ujEgyesGyermek (LZWBinFa * gy)

    {

        jobbEgy = gy;

    }

    void kiir (void)

    {

        melyseg = 0;

        kiir (this);

    }

    void szabadit (void)

    {

        szabadit (jobbEgy);

        szabadit (balNulla);

    }





private:

    char betu;

    LZWBinFa *balNulla;

    LZWBinFa *jobbEgy;



    LZWBinFa (const LZWBinFa &);

    LZWBinFa & operator=(const LZWBinFa &);



    int melyseg;



    void kiir (LZWBinFa * elem)

    {

        if (elem != NULL)

        {

            ++melyseg;

            kiir (elem->jobbEgy);

            // ez a postorder bejáráshoz képest

            // 1-el nagyobb mélység, ezért -1

            for (int i = 0; i < melyseg; ++i)

                std::cout << "---";

            std::cout << elem->betu << "(" << melyseg - 1 << ")" << std::endl;

            kiir (elem->balNulla);

            --melyseg;

        }

    }

    void szabadit (LZWBinFa * elem)

    {

        if (elem != NULL)

        {

            szabadit (elem->jobbEgy);

            szabadit (elem->balNulla);

            delete elem;

        }

    }



};



int

main ()

{

    char b;

    LZWBinFa gyoker, *fa = &gyoker;

    

    while (std::cin >> b)

    {

        if (b == '0')

        {

            // van '0'-s gyermeke az aktuális csomópontnak?

            if (!fa->nullasGyermek ()) // ha nincs, csinálunk

            {

                LZWBinFa *uj = new LZWBinFa ('0');

                fa->ujNullasGyermek (uj);

                fa = &gyoker;

            }

            else // ha van, arra lépünk

            {

                fa = fa->nullasGyermek ();

            }

        }

        else

        {

            if (!fa->egyesGyermek ())

            {

                LZWBinFa *uj = new LZWBinFa ('1');

                fa->ujEgyesGyermek (uj);

                fa = &gyoker;

            }

            else

            {

                fa = fa->egyesGyermek ();

            }

        }

    }



    gyoker.kiir ();

    gyoker.szabadit ();



    return 0;

}
