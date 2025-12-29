#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Lista mista (o código vai filtrar apenas as de 5 letras)
    vector<string> todasPalavras = {"TERMO", "CASA", "LIVRO", "PORTA", "SOL", "MENTE", "BANANA", "AMIGO"};
    vector<string> palavrasValidas;

    // FILTRO: Só coloca na lista de jogo as palavras com exatamente 5 letras
    for (string p : todasPalavras) {
        if (p.length() == 5) {
            palavrasValidas.push_back(p);
        }
    }

    srand(time(0)); 
    // Sorteia apenas entre as válidas
    string palavraSecreta = palavrasValidas[rand() % palavrasValidas.size()];

    string tentativa;
    int maxTentativas = 6;
    int tentativasFeitas = 0;

    cout << "--- JOGO TERMO (APENAS 5 LETRAS) ---" << endl;

    while (tentativasFeitas < maxTentativas) {
        cout << "\nTentativa " << tentativasFeitas + 1 << ": ";
        cin >> tentativa;

        // Transformar em maiúsculo
        for (auto & c: tentativa) c = toupper(c);

        // VALIDAÇÃO: Não deixa o usuário jogar se não tiver 5 letras
        if (tentativa.length() != 5) {
            cout << "[ERRO] Digite uma palavra de EXATAMENTE 5 letras!";
            continue; // Pula o resto e volta para o início do loop
        }

        if (tentativa == palavraSecreta) {
            cout << "PARABENS! Voce acertou!" << endl;
            return 0; 
        } else {
            // Lógica de cores/feedback
            for (int i = 0; i < 5; i++) {
                if (tentativa[i] == palavraSecreta[i]) cout << "[" << tentativa[i] << "]"; 
                else if (palavraSecreta.find(tentativa[i]) != string::npos) cout << "(?)";
                else cout << "[X]";
            }
            cout << endl;
            tentativasFeitas++;
        }
    }

    cout << "\nFim de jogo! A palavra era: " << palavraSecreta << endl;
    return 0;
}
