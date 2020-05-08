#include <stdio.h>
#include <stdlib.h>
int main(){
    system("cls");
    int n, numFunc;
    float consultaSalario;
    float matriz[10][3];
    int linha, coluna;

    printf("Informe a quantidade de funcionarios( Max 10 func.):  " );
    scanf("%d", &n);

    numFunc = n;
    printf("\n");

    //Carrega os 3 vetores
    for(linha = 0 ; linha < numFunc ; linha++){
        printf("Informe o codigo do funcionario: ");
        scanf("%f", &matriz[linha][0]);
        printf("Informe o salario do funcionario (R$): ");
        scanf("%f", &matriz[linha][1]);
        printf("Tempo de serviуo do Funcionario: ");
        scanf("%f", &matriz[linha][2]);
        //system("cls");
        printf("\n");
    }
    system("cls"); 

    printf("cod.|sal.|temp ser\n\n");
    for(linha = 0 ; linha < numFunc ; linha++){
        for(coluna = 0 ; coluna < 3 ; coluna++)
            printf("%.2f ", matriz[linha][coluna]);
            printf("\n"); //apзs cada linha ser impressa, um salto de linha
    }
    system("Pause");
    system("cls");
    // Item A
    printf("Item A\n");
    printf("\n\nConsultar Salario (R$): ");
    scanf("%f", &consultaSalario);
    printf("\n");

    //Relatorio 1
    float minimoSal, maximoSal;
    float minSalario[2];
    float maxSalario[2];
    minSalario[1] = (0);
    maxSalario[1] = (0);

    printf("Relatorio 1\n\n");
    printf("Salarios abaixo de R$ %.2f \n\n", consultaSalario);

    for(linha = 0 ; linha < numFunc ; linha++){
        if(matriz[linha][1] <=  consultaSalario ){
            minSalario[0] = matriz[linha][0];
            minSalario[1] = matriz[linha][1];
            printf("\n%.1f %.2f", minSalario[0], minSalario[1]);
            printf("\n\n\n"); //apзs cada linha ser impressa, um salto de linha
        }
        minimoSal = minSalario[1] ;
        if(minimoSal == 0 &&  linha == numFunc-1){
            printf("Nao existe funcionario com salario menor que o consultado. \n\n\n");
            break;//forуa a saьda imediata do loop
        }
    }
    system("Pause");
    system("cls");
    //Relatorio 2
    printf("\nRelatorio 2\n");
    printf("\nSalarios acima de R$ %.2f \n", consultaSalario);
    for(linha = 0 ; linha < numFunc ; linha++){
        if(matriz[linha][1] >  consultaSalario ){
            maxSalario[0] = matriz[linha][0];
            maxSalario[1] = matriz[linha][1];
            printf("\n%.1f %.2f", maxSalario[0], maxSalario[1]);
            printf("\n\n\n"); //apзs cada linha ser impressa, um salto de linha
        }      
        maximoSal = maxSalario[1] ;
        if(maximoSal == 0 &&  linha == numFunc-1){
            printf("Nao existe funcionario com salario maior que o consultado. \n\n\n");
            break;//forуa a saьda imediata do loop
        }
    }
    system("Pause");

    // Item B
    system("cls");
    float menor;
    int i, count;
    count = 0;
    menor = matriz[0][1];
    for(i = 0; i < numFunc; i++){
        if(matriz[i][1] < menor){
            menor = matriz[i][1];
            //printf("\nQuantidade de Pessoas com o Menor Salario: %d\n", count);
            //pos_i = i; //atualizando as posiушes
            //pos_j = j;
        }
    }
    printf("\nItem B\n\n");
    printf("Menor Salario Pago: R$ %.2f\n\n", menor);

    //Contar quantos recebem o menor salarios
    for(i = 0; i < numFunc; i++){
        if(matriz[i][1] == menor){
            count++;
        }
    }
    printf("Quantos Funcionarios Recebem o menor Salario: %d\n\n\n", count);

    //imprimir todos com menor salario igual
    printf("Funcionarios com Menor Salario\n\n");
    for(i = 0; i < numFunc; i++){
        if(matriz[i][1] == menor){
            //imprimir todos com menor salario igual
            printf("%.1f %.2f", matriz[i][0], matriz[i][1]);
            count++;
            printf("\n\n\n"); //apзs cada linha ser impressa, um salto de linh
        }
    }
    system("pause");
    system("cls");

    //Item C
    printf("\nItem C\n\n");
    float tempServico;
    float tempoServico[3];
    tempoServico[2] = (0);

     //imprimir todos os funcionarios isentos de imposto
    printf("Funcionarios Isentos de Imposto\n\n");

    for(linha = 0 ; linha < numFunc ; linha++){
        if(matriz[linha][2] >=  2 && matriz[linha][2] <= 4 && matriz[linha][1] < 1500){
            tempoServico[0] = matriz[linha][0];
            tempoServico[1] = matriz[linha][1];
            tempoServico[2] = matriz[linha][2];
            printf("\n%.1f %.2f %.1f ",tempoServico[0],tempoServico[1],tempoServico[2]);
            printf("\n\n\n"); //apзs cada linha ser impressa, um salto de linha
        }
        tempServico = tempoServico[2] ;
        if(tempServico == 0 &&  linha == numFunc-1){
            printf("Nao existe nenhum Funcionario Isento de Imposto. \n\n\n");
            break;//forуa a saьda imediata do loop
        }
    }
    system("pause");
    system("cls");
}