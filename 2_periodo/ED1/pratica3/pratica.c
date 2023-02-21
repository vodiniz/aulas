#include <stdio.h>
#include "duende.h"
#include "dtime.h"

int main() {




    //Especifique no main em forma de comentário, qual a ordem de complexidade das funções: escalarTimes eproximoMaisVelho.


    //ordem de complexidade das funções:
    //Ordem proximoMaisVelho => 3n ( 3 comparações no programa )
    //Ordem => 3n ( 3 comparações no programa )





    int qtdDuendes, qtdTimes;
    Duende *duendes;
    Time *times;

    lerQuantidade(&qtdDuendes);
    qtdTimes = qtdDuendes / 3;
    duendes = alocaDuendes(qtdDuendes);
    times = alocaTimes(qtdTimes);
    lerDuendes(duendes, qtdDuendes);
    escalarTimes(duendes, times, qtdDuendes);
    printTimes(times, qtdTimes);
    desalocaDuendes(&duendes);
    desalocaTimes(&times, qtdTimes);

    return 0; //nao remova
}
