#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // Alsó vonal hiánya
    std::cout << '1-100 ertekek duplazasa' // Itt aposztrof helyett idézőjel kell
    for (int i = 0;) // itt hiányos a ciklusfeltétel
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // Hibás ciklusfelvétel
    {
        std::cout << "Ertek:" // Pontos vessző hiánya
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
        for (int i = 0; i < N_ELEMENTS, i++) // Vessző helyett pontos vessző
    {
        atlag += b[i] //Itt hiányzik egy pontosvessző
    }
     atlag /= N_ELEMENTS; //a változó int lesz, viszont átlagnak double vagy float kellene
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}

