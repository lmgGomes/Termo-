 📝 Jogo Termo em C++

Este é um projeto simples de um jogo de adivinhação de palavras inspirado no famoso **Termo** (ou Wordle), desenvolvido inteiramente em **C++**.

## 🎮 Como o jogo funciona
O programa sorteia uma palavra secreta de 5 letras de um banco de dados interno. Você tem **6 tentativas** para descobrir qual é a palavra.

### Regras de Feedback:
* **[T]**: Letra correta na posição correta.
* **(?)**: A letra existe na palavra, mas está na posição errada.
* **[X]**: A letra não existe na palavra secreta.

1. Clone o repositório ou baixe o arquivo `main.cpp`.
2. Compile o código:
   ```bash
   g++ main.cpp -o termo
