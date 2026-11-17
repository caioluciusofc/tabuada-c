# Tabuada em C

Programa de terminal que exibe a tabuada de multiplicação de um número inteiro, de 1 a 10. Após cada cálculo, é possível gerar outra tabuada.

Como executar no Windows

Com o GCC instalado, abra o terminal na pasta que contém o arquivo [`tabuada.c`](tabuada.c) e execute:

```powershell
gcc -std=c11 -Wall -Wextra tabuada.c -o tabuada.exe
.\tabuada.exe
```

Digite um número inteiro entre `-1000` e `1000`. Se digitar `7`, a última linha da tabuada será `7 x 10 = 70`. Digite `s` para calcular outra ou `n` para sair.

Conceitos praticados

- Leitura e validação de entrada com `scanf`.
- Laço `for` para exibir as multiplicações.
- Laço `do...while` para repetir o programa.
