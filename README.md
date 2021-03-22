# Algoritmos - Estruturas de Repetição

Este projeto está estruturado com os assuntos relacionados às estruturas de repetição e os seus respectivos comendos na Linguagem de Programação C.

# Aulas

*[Aula 1 - for ](https://github.com/ifpb-disciplinas-2020-2/controle-algoritmos-repeticao/commit/a89b16cc3ec82532eeb96be67e679f144b026e28)* 
*[Aula 2 - while ](https://github.com/ifpb-disciplinas-2020-2/controle-algoritmos-repeticao/commit/ff7c95eb665641654eca571948530d042204bf5d)* 


## Organização do projeto

Neste repositório iremos manter todos os códigos desenvolvidos nas aulas sobre estruturas de repetição. Dessa forma, é necessário observar que os códigos referem-se a determinada estrutura. Por exemplo, em nossa primeira aula estudamos a estrutura `for` e construimos oito algoritmos (`exemplo-01.c` até o `exemplo-08.c`), todos na pasta [comando-for](/comando-for).

Na pasta [atividades](/atividades) temos a nossa quarta lista de exercício. Desenvolva, para cada item, um algoritmo correspondente.
Os arquivos devem ser compiláveis (sem problemas para compilar) e atenderem ao solicitado em cada questão.

Na pasta [respostas](/respostas) temos três respostas da nossa segunda lista de exercício. As questões a serem respondidas foram escolhidas pelos alunos em nossa turma no Classroom. Iremos disponibilizar uma  [platlist](/respostas) no youtube com as resolução destas questões. 
Para exemplificar, observe o código desenvolvido na Linguagem C para a questão `e04-4`.

```
#include <stdio.h> 
int main(){    
   
    return 0;
}
```

## Metodologia

Esta atividade prática está planejada em um conjunto de algoritmos e para ser desenvolvida individualmente ou coletivamente. 
Cada aluno deve fazer o __fork__ deste projeto e implementar sua própria solução. 

Caso surja alguma dúvida no desenvolvimento, falar de imediato via [Slack](https://ifpb20202algo-ca55489.slack.com/archives/C01R432V3C6). 

> Lembrete: Não guardem dúvidas, elas são como as dívidas. Acumulam-se e nos prejudicam :)

### Compilação

Lembrem-se que após a criação do algotimos, o arquivo `.c` precisa ser compilado.

```
// main.c     -- Linguagem de programação C
// compilação -- compilador (sintaxe, léxico)
// main       -- executável
```

Seguimos os passos:

*1. compilar o código-fonte (gerar um arquivo executável)*

*2. executar o executável (gerado no passo 1)*

Passo 1: `gcc exemplo-01.c -o exemplo-01`.
Passo 2: `./exemplo-01`.