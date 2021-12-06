/*Projeto - Easy site: O programa faz a listagem completa de todos os projetos que est�o
sendo trabalhados, depois lista de acordo com a localidade dos funcion�rios desse projeto
e a sua determinada fun��o*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{
    int cont;
    cont = 2;
    while(cont > 1)
    {
        setlocale(LC_ALL, "Portuguese");
        int escolha_user, numero_estado, cod_funcionario, cod_equipe;
        printf("\t***********************************************************\n");
        printf("\t*                                                         *\n");
        printf("\t*                       Easy site                         *\n");
        printf("\t*                                                         *\n");
        printf("\t***********************************************************\n\n");
        printf("Escolha dentre qual dos projetos abaixo:\n\n1 - Projeto Ericsson\n\n2 - Projeto Nokia\n\n3 - Projeto Huawei\n\n");
        ///Aqui o usu�rio ir� escolher qual dos projetos est�o sendo realizados
        printf("Digite o n�mero correspondente aos projetos acima: ");
        scanf("%d",&escolha_user);
        ///Depois que o usu�rio escolhe, de acordo com a escolha, ele pode seguir para algumas das estruturas condicionais abaixo, dependendo da resposta dele

        ///Projeto Ericsson
        if (escolha_user == 1)
        {
            system("cls");
            printf("\n\t\t\t Projeto Ericsson\n");
            printf("\nEstados ao qual o projeto est� sendo desenvolvido: \n\n");
            printf("1 - Distrito Federal - DF\n\n");
            printf("Digite o n�mero correspondente ao Estado: ");
            scanf("%d",&numero_estado);
            ///A escolha dos Estados a qual o projeto est� em desenvolvimento
            if (numero_estado == 1)
            {
                system("cls");
                printf("\n\t\t\t Ericsson - Distrito Federal\n");
                printf("\nCoordenador do projeto: Fernando Henrique\n\n");
                printf("Funcion�rios: \n\nNome:\t\t|\tc�digo funcion�rio:\t|\tN�mero da Equipe:\n\nCarlos Feitosa\t|\t\t510\t\t|\t\t2\n\nPaulo Santos\t|\t\t429\t\t|\t\t2\n\nVitor Carvalho\t|\t\t885\t\t|\t\t2\n\n");
                printf("Para ver o funcion�rio em mais detalhes, digite o c�digo do funcion�rio: ");
                scanf("%d",&cod_funcionario);
                if (cod_funcionario == 510)
                {
                    system("cls");
                    printf("\n-------------------------------------------\n");
                    printf("\n     Funcion�rio projeto Ericsson - DF     ");
                    printf("\n-------------------------------------------\n\n");
                    printf("Nome: Carlos Feitosa\n\nN�mero: 510\n\nN�mero da equipe: 2\n\nLocaliza��o: Distrito Federal\n\nFun��o: Contador Financeiro\n\nCoordenador do projeto: Fernando Henrique\n\n-------------------------------------------\n\n");
                    system("pause");
                }
                else
                {
                    if (cod_funcionario == 429)
                    {
                        system("cls");
                        printf("\n-------------------------------------------\n");
                        printf("\n     Funcion�rio projeto Ericsson - DF     ");
                        printf("\n-------------------------------------------\n\n");
                        printf("Nome: Paulo Santos\n\nN�mero: 429\n\nN�mero da equipe: 2\n\nLocaliza��o: Distrito Federal\n\nFun��o: Designer Gr�fico\n\nCoordenador do projeto: Fernando Henrique\n\n-------------------------------------------\n\n");
                        system("pause");
                    }
                    else
                    {
                        if (cod_funcionario == 885)
                        {
                            system("cls");
                            printf("\n-------------------------------------------\n");
                            printf("\n     Funcion�rio projeto Ericsson - DF     ");
                            printf("\n-------------------------------------------\n\n");
                            printf("Nome: Vitor Carvalho\n\nN�mero: 885\n\nN�mero da equipe: 2\n\nLocaliza��o: Distrito Federal\n\nFun��o: Analista de Sistemas\n\nCoordenador do projeto: Fernando Henrique\n\n-------------------------------------------\n\n");
                            system("pause");
                        }
                        else
                        {
                            system("cls");
                            system("color 0C");
                            printf("\nValor digitado incorreto!!!\nVerifique novamente o n�mero correspondente a o c�digo do funcion�rio!\n\n");
                            system("pause");
                        }
                    }
                }
            }
            ///Aqui � em caso de erro, quando o usu�rio digita um valor errado ou diferente daquilo que foi designado
            else
            {
                system("cls");
                system("color 0C");
                printf("\nValor digitado incorreto!!!\nVerifique novamente o n�mero correspondente ao Estado!\n\n");
                system("pause");
            }
            ///E a partir daqui os processos se repetem, o que difere s�o os Projetos, Estados, e os funcion�rios
        }
        else
        {
            ///Projeto Nokia
            if (escolha_user == 2)
            {
                system("cls");
                printf("\n\t\t\t Projeto Nokia\n");
                printf("\nEstados ao qual o projeto est� sendo desenvolvido: \n\n");
                printf("1 - S�o Paulo - SP\n\n");
                printf("2 - Rio de Janeiro - RJ\n\n");
                printf("Digite o n�mero correspondente ao Estado: ");
                scanf("%d",&numero_estado);
                if(numero_estado == 1)
                {
                    system("cls");
                    printf("\n\t\t\t Nokia - S�o Paulo\n");
                    printf("\nCoordenador do projeto: Leandro Barbosa\n\n");
                    printf("Funcion�rios: \n\nNome:\t\t|\tc�digo funcion�rio:\t|\tN�mero da Equipe:\n\nMarcos Souza\t|\t\t876\t\t|\t\t1\n\nMarcelo Aguiar\t|\t\t409\t\t|\t\t1\n\nAna Beatriz\t|\t\t623\t\t|\t\t1\n\n");
                    printf("Para ver o funcion�rio em mais detalhes, digite o c�digo do funcion�rio: ");
                    scanf("%d",&cod_funcionario);
                    if (cod_funcionario == 876)
                    {
                        system("cls");
                        printf("\n-------------------------------------------\n");
                        printf("\n      Funcion�rio projeto Nokia - SP     ");
                        printf("\n-------------------------------------------\n\n");
                        printf("Nome: Marcos Souza\n\nN�mero: 876\n\nN�mero da equipe: 1\n\nLocaliza��o: S�o Paulo\n\nFun��o: Designer Gr�fico\n\nCoordenador do projeto: Leandro Barbosa\n\n-------------------------------------------\n\n");
                        system("pause");
                    }
                    else
                    {
                        if (cod_funcionario == 409)
                        {
                            system("cls");
                            printf("\n-------------------------------------------\n");
                            printf("\n       Funcion�rio projeto Nokia - SP       ");
                            printf("\n-------------------------------------------\n\n");
                            printf("Nome: Marcelo Aguiar\n\nN�mero: 409\n\nN�mero da equipe: 1\n\nLocaliza��o: S�o Paulo\n\nFun��o: Analista de Sistemas\n\nCoordenador do projeto: Leandro Barbosa\n\n-------------------------------------------\n\n");
                            system("pause");
                        }
                        else
                        {
                            if (cod_funcionario == 623)
                            {
                                system("cls");
                                printf("\n-------------------------------------------\n");
                                printf("\n       Funcion�rio projeto Nokia - SP       ");
                                printf("\n-------------------------------------------\n\n");
                                printf("Nome: Ana Beatriz\n\nN�mero: 623\n\nN�mero da equipe: 1\n\nLocaliza��o: S�o Paulo\n\nFun��o: Programadora\n\nCoordenador do projeto: Leandro Barbosa\n\n-------------------------------------------\n\n");
                                system("pause");
                            }
                            else
                            {
                                system("cls");
                                system("color 0C");
                                printf("\nValor digitado incorreto!!!\nVerifique novamente o n�mero correspondente a o c�digo do funcion�rio!\n\n");
                                system("pause");
                            }
                        }
                    }
                }
                else
                {
                    if(numero_estado == 2)
                    {
                        system("cls");
                        printf("\n\t\t\t Nokia - Rio de Janeiro\n");
                        printf("\nCoordenador do projeto: Matheus Andrade\n\n");
                        printf("Funcion�rios: \n\nNome:\t\t|\tc�digo funcion�rio:\t|\tN�mero da Equipe:\n\nVin�cius Lima\t|\t\t698\t\t|\t\t3\n\nLuan Castro\t|\t\t262\t\t|\t\t3\n\nFelipe Cardoso\t|\t\t151\t\t|\t\t3\n\n");
                        printf("Para ver o funcion�rio em mais detalhes, digite o c�digo do funcion�rio: ");
                        scanf("%d",&cod_funcionario);
                        if (cod_funcionario == 698)
                        {
                            system("cls");
                            printf("\n-------------------------------------------\n");
                            printf("\n       Funcion�rio projeto Nokia - RJ       ");
                            printf("\n-------------------------------------------\n\n");
                            printf("Nome: Vin�cius Lima\n\nN�mero: 698\n\nN�mero da equipe: 3\n\nLocaliza��o: Rio de Janeiro\n\nFun��o: Analista de Sistemas\n\nCoordenador do projeto: Matheus Andrade\n\n-------------------------------------------\n\n");
                            system("pause");
                        }
                        else
                        {
                            if (cod_funcionario == 262)
                            {
                                system("cls");
                                printf("\n-------------------------------------------\n");
                                printf("\n       Funcion�rio projeto Nokia - RJ       ");
                                printf("\n-------------------------------------------\n\n");
                                printf("Nome: Luan Castro\n\nN�mero: 262\n\nN�mero da equipe: 3\n\nLocaliza��o: Rio de Janeiro\n\nFun��o: Designer Gr�fico\n\nCoordenador do projeto: Matheus Andrade\n\n-------------------------------------------\n\n");
                                system("pause");
                            }
                            else
                            {
                                if (cod_funcionario == 151)
                                {
                                    system("cls");
                                    printf("\n-------------------------------------------\n");
                                    printf("\n       Funcion�rio projeto Nokia - RJ       ");
                                    printf("\n-------------------------------------------\n\n");
                                    printf("Nome: Felipe Cardoso\n\nN�mero: 151\n\nN�mero da equipe: 3\n\nLocaliza��o: Rio de Janeiro\n\nFun��o: Vendedor Comercial\n\nCoordenador do projeto: Matheus Andrade\n\n-------------------------------------------\n\n");
                                    system("pause");
                                }
                                else
                                {
                                    system("cls");
                                    system("color 0C");
                                    printf("\nValor digitado incorreto!!!\nVerifique novamente o n�mero correspondente a o c�digo do funcion�rio!\n\n");
                                    system("pause");
                                }
                            }
                        }
                    }
                    else
                    {
                        system("cls");
                        system("color 0C");
                        printf("\nValor digitado incorreto!!!\nVerifique novamente o n�mero correspondente ao Estado!\n\n");
                        system("pause");
                    }
                }
            }
            else
            {
                ///Projeto Huawei
                if (escolha_user == 3)
                {
                    system("cls");
                    printf("\n\t\t\t Projeto Huawei\n");
                    printf("\nEstados ao qual o projeto est� sendo desenvolvido: \n\n");
                    printf("1 - Minas Gerais - MG\n\n");
                    printf("Digite o n�mero correspondente ao Estado: ");
                    scanf("%d",&numero_estado);
                    ///A escolha dos Estados ao qual o projeto est� em desenvolvimento
                    if (numero_estado == 1)
                    {
                        system("cls");
                        printf("\n\t\t\t Huawei - Minas Gerais\n");
                        printf("\nCoordenador do projeto: Bernardo Soares\n\n");
                        printf("Funcion�rios: \n\nNome:\t\t|\tc�digo funcion�rio:\t|\tN�mero da Equipe:\n\nDiego Corr�ia\t|\t\t810\t\t|\t\t4\n\nF�bio Gon�alves\t|\t\t120\t\t|\t\t4\n\nDavi Ara�jo\t|\t\t554\t\t|\t\t4\n\n");
                        printf("Para ver o funcion�rio em mais detalhes, digite o c�digo do funcion�rio: ");
                        scanf("%d",&cod_funcionario);
                        if (cod_funcionario == 810)
                        {
                            system("cls");
                            printf("\n-------------------------------------------\n");
                            printf("\n      Funcion�rio projeto Huawei - RJ       ");
                            printf("\n-------------------------------------------\n\n");
                            printf("Nome: Diego Corr�ia\n\nN�mero: 810\n\nN�mero da equipe: 4\n\nLocaliza��o: Minas Gerais\n\nFun��o: Analista de Sistemas\n\nCoordenador do projeto: Bernardo Soares\n\n-------------------------------------------\n\n");
                            system("pause");
                        }
                        else
                        {
                            if (cod_funcionario == 120)
                            {
                                system("cls");
                                printf("\n-------------------------------------------\n");
                                printf("\n      Funcion�rio projeto Huawei - RJ       ");
                                printf("\n-------------------------------------------\n\n");
                                printf("Nome: F�bio Gon�alves\n\nN�mero: 120\n\nN�mero da equipe: 4\n\nLocaliza��o: Minas Gerais\n\nFun��o: Analista Financeiro\n\nCoordenador do projeto: Bernardo Soares\n\n-------------------------------------------\n\n");
                                system("pause");
                            }
                            else
                            {
                                if (cod_funcionario == 554)
                                {
                                    system("cls");
                                    printf("\n-------------------------------------------\n");
                                    printf("\n      Funcion�rio projeto Huawei - RJ       ");
                                    printf("\n-------------------------------------------\n\n");
                                    printf("Nome: Davi Ara�jo\n\nN�mero: 554\n\nN�mero da equipe: 4\n\nLocaliza��o: Minas Gerais\n\nFun��o: Designer Gr�fico\n\nCoordenador do projeto: Bernardo Soares\n\n-------------------------------------------\n\n");
                                    system("pause");
                                }
                                else
                                {
                                    system("cls");
                                    system("color 0C");
                                    printf("\nValor digitado incorreto!!!\nVerifique novamente o n�mero correspondente a o c�digo do funcion�rio!\n\n");
                                    system("pause");
                                }
                            }
                        }
                    }
                    else
                    {
                        system("cls");
                        system("color 0C");
                        printf("\nValor digitado incorreto!!!\nVerifique novamente o n�mero correspondente ao Estado!\n\n");
                        system("pause");
                    }
                }
                else
                {
                    system("cls");
                    system("color 0C");
                    printf("\nValor digitado incorreto!!!\nVerifique novamente o n�mero correspondente ao projeto!\n\n");
                    system("pause");
                }
            }
        }
        cont += 1;
        system("cls");
        system("color 07");
    }
}
