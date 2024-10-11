#include <stdio.h>

int main(int argc, char const *argv[])
{

    int coelhos = 0, ratos = 0, sapos = 0;

    int quantia;
    scanf("%d", &quantia);

    for (int i = 0; i < quantia; i++) {
        
        int cobaias;
        char cobaia;

        scanf("%d %c", &cobaias, &cobaia);

        if (cobaia == 'c') {
            coelhos = coelhos + cobaias;
        }
        else if (cobaia == 'r') {
            ratos = ratos + cobaias;
        }
        else if (cobaia == 's') {
            sapos = sapos + cobaias;
        }
        
    }

    int total = coelhos + ratos + sapos;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);

    float percentualCoelhos = (coelhos * 100) / total;
    float percentualRatos = (ratos * 100) / total;
    float percentualSapos = (sapos * 100) / total;

    printf("Percentual de coelhos: %.2f\n", percentualCoelhos);
    printf("Percentual de ratos: %.2f\n", percentualRatos);
    printf("Percentual de sapos: %.2f\n", percentualSapos);

    return 0;
}
