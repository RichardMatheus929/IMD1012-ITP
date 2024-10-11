#include <stdio.h>

int main() {
    float renda;
    float imposto = 0;

    scanf("%f", &renda);

    if (renda <= 2000) {
        printf("Isento\n");
    } 
    else {
        if (renda > 2000 && renda <= 3000) {
            imposto += (renda - 2000) * 0.08;
        } 
        else {
            imposto += 1000 * 0.08;
            
            if (renda > 3000 && renda <= 4500) {
                imposto += (renda - 3000) * 0.18;
            } 
            else {
                imposto += 1500 * 0.18;
                
                if (renda > 4500) {
                    imposto += (renda - 4500) * 0.28;
                }
            }
        }
        
        printf("R$ %.2f\n", imposto);
    }

    return 0;
}
