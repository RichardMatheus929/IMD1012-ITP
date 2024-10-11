#include <stdio.h>

int main()
{
    float renda;

    float imposto = 0;

    scanf("%f", &renda);

    if (renda > 2000.01) {

        if (renda > 3000) {
            imposto = (1000 * 0.08) + imposto;
        }
        else {
            imposto = (renda * 0.08) + imposto;            
        }
    }

    if (renda > 3000.01) {
        if (renda > 4500) {
            imposto = (1500 * 0.18) + imposto;
        }
        else {
            imposto = ((renda - 3000) * 0.18) + imposto;
        }
    }

    if (renda > 4500) {
        imposto = (renda - 4500) * 0.28 + imposto;
    }

    if (imposto > 0) {
        printf("R$ %.2f\n", imposto);
    }

    else {
        printf("Isento\n");
    }

    return 0;
}
