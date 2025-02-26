Super Trunfo - Comparação de Cartas em C

Este projeto é um jogo de Super Trunfo em C, onde os jogadores cadastram cartas representando cidades e comparam seus atributos para determinar o vencedor.

🚀 Funcionalidades

Cadastro de duas cartas com atributos personalizados.

Escolha de dois atributos diferentes para comparação.

Menus interativos dinâmicos com switch.

Comparação das cartas com soma dos atributos selecionados.

Uso de operador ternário para tornar o código mais elegante.

Tratamento de empates e validação de entrada do usuário.

📜 Regras do Jogo

O jogador cadastra duas cartas com informações sobre cidades.

Escolhe dois atributos distintos para comparar.

Para cada atributo, a cidade com o maior valor vence.

Exceção: se for Densidade Demográfica, vence o menor valor.

A soma dos valores dos atributos escolhidos decide o vencedor final.

Se a soma for igual, o jogo resulta em empate.

🛠️ Como Executar

Pré-requisitos

Compilador GCC instalado.

Ambiente compatível com C (Linux, macOS, Windows com MinGW).

Compilação e Execução

# Compilar o código
gcc super_trunfo.c -o super_trunfo

# Executar o programa
./super_trunfo

🖥️ Exemplo de Entrada e Saída

Cadastro da Carta 1
Digite o estado (A-H): SP
Digite o código da carta (ex: A01): A01
Digite o nome da cidade: São Paulo
Digite a população: 12000000
Digite a área em km²: 1521
Digite o PIB: 700000
Digite o número de pontos turísticos: 15

Cadastro da Carta 2
Digite o estado (A-H): RJ
Digite o código da carta (ex: A02): A02
Digite o nome da cidade: Rio de Janeiro
Digite a população: 6700000
Digite a área em km²: 1200
Digite o PIB: 500000
Digite o número de pontos turísticos: 20

Escolha um atributo para comparar:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
Escolha o primeiro atributo: 3
Escolha o segundo atributo (diferente do primeiro): 4

Comparação:
São Paulo: Rio de Janeiro = 700000.00, Rio de Janeiro = 500000.00
São Paulo: Rio de Janeiro = 15.00, Rio de Janeiro = 20.00

Resultado Final:
Soma dos atributos de São Paulo: 700015.00
Soma dos atributos de Rio de Janeiro: 500020.00
São Paulo venceu!

📌 Melhorias Futuras

Implementar um sistema de rodadas com múltiplas comparações.

Criar um banco de dados para salvar cartas cadastradas.

Adicionar mais atributos para maior variedade na comparação.