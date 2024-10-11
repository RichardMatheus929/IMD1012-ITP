#include <stdio.h>

float valorCompra(int codProduto, int qtdProduto) {

    float precoProduto = 0;

    if (codProduto == 1001) {
        precoProduto = 1.50 * qtdProduto;
    }  
    else if (codProduto == 1002) {
        precoProduto = 2.50 * qtdProduto;
    }
    else if (codProduto == 1003) {
        precoProduto = 3.50 * qtdProduto;
    }
    else if (codProduto == 1004) {
        precoProduto = 4.50 * qtdProduto;
    }
    else if (codProduto == 1005) {
        precoProduto = 5.50 * qtdProduto;
    }

    return precoProduto;
}
 
int main() {

    int produtosComprados;

    float precoTotal;

    scanf("%d", &produtosComprados);

    for (int i = 0; i < produtosComprados; i++) {

        int codProduto, qtdProdutos;
        
        scanf("%d %d", &codProduto, &qtdProdutos);

        precoTotal = valorCompra(codProduto, qtdProdutos) + precoTotal;

    }

    printf("%.2f\n",precoTotal);
    
    return 0;

}
