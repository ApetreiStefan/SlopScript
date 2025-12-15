#include <iostream>
#include <cstdio> 

extern int yyparse();
extern FILE *yyin;

int main(int argc, char *argv[]) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        yyin = file;
    } else {
        yyin = stdin;
    }

    std::cout << "Incep analiza sintactica..." << std::endl;
    int result = yyparse();

    if (result == 0) {
        std::cout << "Analiza sintactica s-a finalizat cu succes." << std::endl;
    } else {
        std::cout << "Analiza sintactica a esuat." << std::endl;
    }
    if (argc > 1) {
        fclose(yyin);
    }

    return result;
}