# Jogo de Adivinhação em C 🎮

Este é um jogo interativo de terminal desenvolvido em Linguagem C, onde o jogador deve tentar adivinhar um número secreto gerado aleatoriamente pelo sistema entre 1 e 100.

O projeto foi criado para explorar conceitos de funções matemáticas pseudoaleatórias e controle de fluxo interativo.

## ⚙️ Características do Projeto
* **Geração Dinâmica:** Utiliza a biblioteca `time.h` para que a semente do número aleatório mude a cada execução do programa.
* **Níveis de Dificuldade:** Sistema de escolha que altera o limite máximo de tentativas (Fácil: 15, Médio: 10, Difícil: 5).
* **Dicas em Tempo Real:** O programa dá feedback instantâneo dizendo se o número secreto é maior ou menor que o palpite atual.
* **Validação de Entrada:** Proteção para que palpites fora do intervalo (1-100) não gastem as tentativas do usuário.

## 💻 Conceitos Praticados
* Funções `rand()` e `srand()` para números pseudoaleatórios.
* Estrutura de repetição condicional (`do-while`) com controles de fluxo `break` e `continue`.
* Condicionais encadeadas e múltiplos escopos.
* Desenvolvido no ambiente Code::Blocks.
