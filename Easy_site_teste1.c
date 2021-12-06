/*Projeto - Easy site: O programa faz a listagem completa de todos os projetos que estão
sendo trabalhados, depois lista de acordo com a localidade dos funcionários desse projeto
e a sua determinada função*/

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
        ///Aqui o usuário irá escolher qual dos projetos estão sendo realizados
        printf("Digite o número correspondente aos projetos acima: ");
        scanf("%d",&escolha_user);
        ///Depois que o usuário escolhe, de acordo com a escolha, ele pode seguir para algumas das estruturas condicionais abaixo, dependendo da resposta dele

        ///Projeto Ericsson
        if (escolha_user == 1)
        {
            system("cls");
            printf("\n\t\t\t Projeto Ericsson\n");
            printf("\nEstados ao qual o projeto está sendo desenvolvido: \n\n");
            printf("1 - Distrito Federal - DF\n\n");
            printf("Digite o número correspondente ao Estado: ");
            scanf("%d",&numero_estado);
            ///A escolha dos Estados a qual o projeto está em desenvolvimento
            if (numero_estado == 1)
            {
                system("cls");
                printf("\n\t\t\t Ericsson - Distrito Federal\n");
                printf("\nCoordenador do projeto: Fernando Henrique\n\n");
                printf("Funcionários: \n\nNome:\t\t|\tcódigo funcionário:\t|\tNúmero da Equipe:\n\nCarlos Feitosa\t|\t\t510\t\t|\t\t2\n\nPaulo Santos\t|\t\t429\t\t|\t\t2\n\nVitor Carvalho\t|\t\t885\t\t|\t\t2\n\n");
                printf("Para ver o funcionário em mais detalhes, digite o código do funcionário: ");
                scanf("%d",&cod_funcionario);
                if (cod_funcionario == 510)
                {
                    system("cls");
                    printf("\n-------------------------------------------\n");
                    printf("\n     Funcionário projeto Ericsson - DF     ");
                    printf("\n-------------------------------------------\n\n");
                    printf("Nome: Carlos Feitosa\n\nNúmero: 510\n\nNúmero da equipe: 2\n\nLocalização: Distrito Federal\n\nFunção: Contador Financeiro\n\nCoordenador do projeto: Fernando Henrique\n\n-------------------------------------------\n\n");
                    system("pause");
                }
                else
                {
                    if (cod_funcionario == 429)
                    {
                        system("cls");
                        printf("\n-------------------------------------------\n");
                        printf("\n     Funcionário projeto Ericsson - DF     ");
                        printf("\n-------------------------------------------\n\n");
                        printf("Nome: Paulo Santos\n\nNúmero: 429\n\nNúmero da equipe: 2\n\nLocalização: Distrito Federal\n\nFunção: Designer Gráfico\n\nCoordenador do projeto: Fernando Henrique\n\n-------------------------------------------\n\n");
                        system("pause");
                    }
                    else
                    {
                        if (cod_funcionario == 885)
                        {
                            system("cls");
                            printf("\n-------------------------------------------\n");
                            printf("\n     Funcionário projeto Ericsson - DF     ");
                            printf("\n-------------------------------------------\n\n");
                            printf("Nome: Vitor Carvalho\n\nNúmero: 885\n\nNúmero da equipe: 2\n\nLocalização: Distrito Federal\n\nFunção: Analista de Sistemas\n\nCoordenador do projeto: Fernando Henrique\n\n-------------------------------------------\n\n");
                            system("pause");
                        }
                        else
                        {
                            system("cls");
                            system("color 0C");
                            printf("\nValor digitado incorreto!!!\nVerifique novamente o número correspondente a o código do funcionário!\n\n");
                            system("pause");
                        }
                    }
                }
            }
            ///Aqui é em caso de erro, quando o usuário digita um valor errado ou diferente daquilo que foi designado
            else
            {
                system("cls");
                system("color 0C");
                printf("\nValor digitado incorreto!!!\nVerifique novamente o número correspondente ao Estado!\n\n");
                system("pause");
            }
            ///E a partir daqui os processos se repetem, o que difere são os Projetos, Estados, e os funcionários
        }
        else
        {
            ///Projeto Nokia
            if (escolha_user == 2)
            {
                system("cls");
                printf("\n\t\t\t Projeto Nokia\n");
                printf("\nEstados ao qual o projeto está sendo desenvolvido: \n\n");
                printf("1 - São Paulo - SP\n\n");
                printf("2 - Rio de Janeiro - RJ\n\n");
                printf("Digite o número correspondente ao Estado: ");
                scanf("%d",&numero_estado);
                if(numero_estado == 1)
                {
                    system("cls");
                    printf("\n\t\t\t Nokia - São Paulo\n");
                    printf("\nCoordenador do projeto: Leandro Barbosa\n\n");
                    printf("Funcionários: \n\nNome:\t\t|\tcódigo funcionário:\t|\tNúmero da Equipe:\n\nMarcos Souza\t|\t\t876\t\t|\t\t1\n\nMarcelo Aguiar\t|\t\t409\t\t|\t\t1\n\nAna Beatriz\t|\t\t623\t\t|\t\t1\n\n");
                    printf("Para ver o funcionário em mais detalhes, digite o código do funcionário: ");
                    scanf("%d",&cod_funcionario);
                    if (cod_funcionario == 876)
                    {
                        system("cls");
                        printf("\n-------------------------------------------\n");
                        printf("\n      Funcionário projeto Nokia - SP     ");
                        printf("\n-------------------------------------------\n\n");
                        printf("Nome: Marcos Souza\n\nNúmero: 876\n\nNúmero da equipe: 1\n\nLocalização: São Paulo\n\nFunção: Designer Gráfico\n\nCoordenador do projeto: Leandro Barbosa\n\n-------------------------------------------\n\n");
                        system("pause");
                    }
                    else
                    {
                        if (cod_funcionario == 409)
                        {
                            system("cls");
                            printf("\n-------------------------------------------\n");
                            printf("\n       Funcionário projeto Nokia - SP       ");
                            printf("\n-------------------------------------------\n\n");
                            printf("Nome: Marcelo Aguiar\n\nNúmero: 409\n\nNúmero da equipe: 1\n\nLocalização: São Paulo\n\nFunção: Analista de Sistemas\n\nCoordenador do projeto: Leandro Barbosa\n\n-------------------------------------------\n\n");
                            system("pause");
                        }
                        else
                        {
                            if (cod_funcionario == 623)
                            {
                                system("cls");
                                printf("\n-------------------------------------------\n");
                                printf("\n       Funcionário projeto Nokia - SP       ");
                                printf("\n-------------------------------------------\n\n");
                                printf("Nome: Ana Beatriz\n\nNúmero: 623\n\nNúmero da equipe: 1\n\nLocalização: São Paulo\n\nFunção: Programadora\n\nCoordenador do projeto: Leandro Barbosa\n\n-------------------------------------------\n\n");
                                system("pause");
                            }
                            else
                            {
                                system("cls");
                                system("color 0C");
                                printf("\nValor digitado incorreto!!!\nVerifique novamente o número correspondente a o código do funcionário!\n\n");
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
                        printf("Funcionários: \n\nNome:\t\t|\tcódigo funcionário:\t|\tNúmero da Equipe:\n\nVinícius Lima\t|\t\t698\t\t|\t\t3\n\nLuan Castro\t|\t\t262\t\t|\t\t3\n\nFelipe Cardoso\t|\t\t151\t\t|\t\t3\n\n");
                        printf("Para ver o funcionário em mais detalhes, digite o código do funcionário: ");
                        scanf("%d",&cod_funcionario);
                        if (cod_funcionario == 698)
                        {
                            system("cls");
                            printf("\n-------------------------------------------\n");
                            printf("\n       Funcionário projeto Nokia - RJ       ");
                            printf("\n-------------------------------------------\n\n");
                            printf("Nome: Vinícius Lima\n\nNúmero: 698\n\nNúmero da equipe: 3\n\nLocalização: Rio de Janeiro\n\nFunção: Analista de Sistemas\n\nCoordenador do projeto: Matheus Andrade\n\n-------------------------------------------\n\n");
                            system("pause");
                        }
                        else
                        {
                            if (cod_funcionario == 262)
                            {
                                system("cls");
                                printf("\n-------------------------------------------\n");
                                printf("\n       Funcionário projeto Nokia - RJ       ");
                                printf("\n-------------------------------------------\n\n");
                                printf("Nome: Luan Castro\n\nNúmero: 262\n\nNúmero da equipe: 3\n\nLocalização: Rio de Janeiro\n\nFunção: Designer Gráfico\n\nCoordenador do projeto: Matheus Andrade\n\n-------------------------------------------\n\n");
                                system("pause");
                            }
                            else
                            {
                                if (cod_funcionario == 151)
                                {
                                    system("cls");
                                    printf("\n-------------------------------------------\n");
                                    printf("\n       Funcionário projeto Nokia - RJ       ");
                                    printf("\n-------------------------------------------\n\n");
                                    printf("Nome: Felipe Cardoso\n\nNúmero: 151\n\nNúmero da equipe: 3\n\nLocalização: Rio de Janeiro\n\nFunção: Vendedor Comercial\n\nCoordenador do projeto: Matheus Andrade\n\n-------------------------------------------\n\n");
                                    system("pause");
                                }
                                else
                                {
                                    system("cls");
                                    system("color 0C");
                                    printf("\nValor digitado incorreto!!!\nVerifique novamente o número correspondente a o código do funcionário!\n\n");
                                    system("pause");
                                }
                            }
                        }
                    }
                    else
                    {
                        system("cls");
                        system("color 0C");
                        printf("\nValor digitado incorreto!!!\nVerifique novamente o número correspondente ao Estado!\n\n");
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
                    printf("\nEstados ao qual o projeto está sendo desenvolvido: \n\n");
                    printf("1 - Minas Gerais - MG\n\n");
                    printf("Digite o número correspondente ao Estado: ");
                    scanf("%d",&numero_estado);
                    ///A escolha dos Estados ao qual o projeto está em desenvolvimento
                    if (numero_estado == 1)
                    {
                        system("cls");
                        printf("\n\t\t\t Huawei - Minas Gerais\n");
                        printf("\nCoordenador do projeto: Bernardo Soares\n\n");
                        printf("Funcionários: \n\nNome:\t\t|\tcódigo funcionário:\t|\tNúmero da Equipe:\n\nDiego Corrêia\t|\t\t810\t\t|\t\t4\n\nFábio Gonçalves\t|\t\t120\t\t|\t\t4\n\nDavi Araújo\t|\t\t554\t\t|\t\t4\n\n");
                        printf("Para ver o funcionário em mais detalhes, digite o código do funcionário: ");
                        scanf("%d",&cod_funcionario);
                        if (cod_funcionario == 810)
                        {
                            system("cls");
                            printf("\n-------------------------------------------\n");
                            printf("\n      Funcionário projeto Huawei - RJ       ");
                            printf("\n-------------------------------------------\n\n");
                            printf("Nome: Diego Corrêia\n\nNúmero: 810\n\nNúmero da equipe: 4\n\nLocalização: Minas Gerais\n\nFunção: Analista de Sistemas\n\nCoordenador do projeto: Bernardo Soares\n\n-------------------------------------------\n\n");
                            system("pause");
                        }
                        else
                        {
                            if (cod_funcionario == 120)
                            {
                                system("cls");
                                printf("\n-------------------------------------------\n");
                                printf("\n      Funcionário projeto Huawei - RJ       ");
                                printf("\n-------------------------------------------\n\n");
                                printf("Nome: Fábio Gonçalves\n\nNúmero: 120\n\nNúmero da equipe: 4\n\nLocalização: Minas Gerais\n\nFunção: Analista Financeiro\n\nCoordenador do projeto: Bernardo Soares\n\n-------------------------------------------\n\n");
                                system("pause");
                            }
                            else
                            {
                                if (cod_funcionario == 554)
                                {
                                    system("cls");
                                    printf("\n-------------------------------------------\n");
                                    printf("\n      Funcionário projeto Huawei - RJ       ");
                                    printf("\n-------------------------------------------\n\n");
                                    printf("Nome: Davi Araújo\n\nNúmero: 554\n\nNúmero da equipe: 4\n\nLocalização: Minas Gerais\n\nFunção: Designer Gráfico\n\nCoordenador do projeto: Bernardo Soares\n\n-------------------------------------------\n\n");
                                    system("pause");
                                }
                                else
                                {
                                    system("cls");
                                    system("color 0C");
                                    printf("\nValor digitado incorreto!!!\nVerifique novamente o número correspondente a o código do funcionário!\n\n");
                                    system("pause");
                                }
                            }
                        }
                    }
                    else
                    {
                        system("cls");
                        system("color 0C");
                        printf("\nValor digitado incorreto!!!\nVerifique novamente o número correspondente ao Estado!\n\n");
                        system("pause");
                    }
                }
                else
                {
                    system("cls");
                    system("color 0C");
                    printf("\nValor digitado incorreto!!!\nVerifique novamente o número correspondente ao projeto!\n\n");
                    system("pause");
                }
            }
        }
        cont += 1;
        system("cls");
        system("color 07");
    }
}
