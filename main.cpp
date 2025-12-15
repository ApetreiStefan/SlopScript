// main.cpp
#include <iostream>
#include <cstdio> // Pentru yyin

// Declaratiile externe pentru functiile Flex/Bison
extern int yyparse();
extern FILE *yyin;

int main(int argc, char *argv[]) {
    if (argc > 1) {
        // Deschide fisierul de intrare
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            std::cerr << "Eroare: Nu s-a putut deschide fisierul " << argv[1] << std::endl;
            return 1;
        }
        yyin = file;
    } else {
        // Citeste de la stdin (tastatura)
        yyin = stdin;
    }

    std::cout << "Incep analiza sintactica..." << std::endl;

    // Apeleaza functia generata de Bison pentru a incepe analiza
    int result = yyparse();

    if (result == 0) {
        std::cout << "Analiza sintactica s-a finalizat cu succes." << std::endl;
        // Aici ar urma faza de generare de cod sau interpretare
    } else {
        std::cout << "Analiza sintactica a esuat." << std::endl;
    }

    if (argc > 1) {
        fclose(yyin);
    }

    return result;
}