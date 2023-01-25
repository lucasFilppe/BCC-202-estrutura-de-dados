# BCC-202-estrutura-de-dados

## OBJETIVOS:

O aluno deverá conhecer conceitos associados a tipos abstratos de dados e métodos de pesquisa e
ordenação de interesse teórico e prático.
Deverá também adquirir a capacidade de utilizar esses recursos pra desenvolvimento de programas,
utilizando conceitos de modularização e abstração de dados.
Deverá ainda ser capaz de comparar estratégias de implementação do ponto de vista da
complexidade dos algoritmos envolvidos, usando a notação O.

### Uso de memória por um programa

Informalmente, podemos dizer que existem três maneira des reservar memória para o armazenamento de informações.

- Uso de variáveis globais e estáticas o espaço existe enquanto o programa estiver sendo executado.
- Variáveis locais(Pilha): o espaço esxiste enquanto a função que declarou a variável estiver sendo executado, sendo liberado para outros usos quando a execução da função termina.
- Requisitando ao sistema em tempo de execução um espaço de memória de determinado tamanho, o espaço alocado dinamicamente permanece reservado até que seja explicitamnete liberado

### Ponteiros de variáveis

- A linguagem em C permite o armazenamento e a manipulação de valores de endereço de memória.
- Para cada tipo existente há um tipo ponteiro que pode armazenar endereços de memória onde existem valores do tipo correspondente armazenado
- Uma variável do tipo ponteiro tem a seguinte sintaxe geral: tipo_de_varivel>* nome_variavel

### Passsagem por referência

Os ponteiros oferecem meios de alterarmos valores de variáveis acessando-as indiretamente

- As funções não podem alterar diretamente valores de variáveis da função que fez a chamada
- Podemos passar para a função os valores dos endereçoes de memória onde suas variáveis estão armazenadas

