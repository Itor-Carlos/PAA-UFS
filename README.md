
• Descrição do problema: 
    Um grupo de 5 amigos decidiu que Aracajú seria seu próximo destino de viagem devido a sua fama por ser um lugar com excelentes atividades relaxantes. Estando na cidade os mesmos decidiram participar de algumas atividades que eram de interesse para o conjunto inteiro. 
    Cada uma dessas atividades tem um tempo de início, um tempo de fim e uma quantidade de pontos de diversão para o grupo referente ao quão a atividade é atrativa para os membros do conjunto. Entretanto, infelizmente o grupo não reparou que algumas atividades tinham tempo de início ou fim no que ocorriam ao mesmo tempo, mas com pontos de diversão distintos. 
    Com a preocupação por parte do grupo em não ter diversão o suficiente, os mesmos decidiram pedir ajuda aos estudantes da Ciência da Computação da UFS para que fosse criado um algoritmo que, dada uma lista de atividades, seleciona as atividades que irão resultar na maior quantidade de diversão possível entre as atividades do grupo.
• Entrada: 
    A primeira linha de cada caso de testes consiste de um número T e que descreve o número de atividades. A seguir são apresentadas T linhas contendo o início, fim e a quantidade de pontos de diversão para cada atividade da entrada.
    O número T, número de atividades é um número inteiro entre 1 e 20. O tempo de início é entre 0 e 23. O tempo de fim é entre tempo de início + 1 e 24. Os pontos de diversão estão entre 1 e 10.
• Saída: 
    A saída é dada por um único número inteiro indicando a quantidade de pontos de diversão acumulados, seguido por uma quebra de linha. 
• Tempo Máximo para Cada Caso de Teste: 1 segundo 
• Entrada Exemplo 1: 
    4
    3 18 9
    13 16 9
    13 16 6
    20 22 10
• Saída Exemplo 1: 
    19 
• Entrada Exemplo 2: 
    3
    18 19 7
    3 9 4
    20 21 5
• Saída Exemplo 2: 
    16
• Objetivos: 
    Avaliar a capacidade de desenvolver algoritmos para problemas relacionados a problemas de otimização utilizando técnicas como algoritmos gulosos.
• Técnicas/Algoritmos Válidos: 
    Deve ser possíıvel resolver o problema através de algoritmos construídos com técnicas como algoritmos gulosos e com uma complexidade de ordem O(n log n). 

• Técnicas/Algoritmos Inválidos: 
    Algoritmos que tenham complexidade ω(n log n) não devem ser aceitos. 

