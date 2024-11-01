# ponderada_sem3
### Funcionamento do Código

Link do vídeo de funcionamento: https://youtu.be/mfRVQKrpuJo

### Detalhamento da Montagem

A protoboard é alimentada por um Arduino UNO conectado à porta do computador. O terminal negativo (GND) do Arduino é conectado a protoboard por um jumper, que alimenta uma coluna de entradas responsáveis pela conexão negativa dos resistores (todos com resistência de 330 Ohms) ao terminal cátodo (-) dos LEDs. Os terminais ânodos (+) dos LEDs, por sua vez recebem corrente de jumpers macho-macho conectados nas portas positivas 11,12 e 13. Dessa forma, a corrente passa por um fluxo que permite ligar e desligar os LEDs conforme especificados no código 'semaforo.ino'. Entretanto, foi adicionado um potenciômetro conectado ao GND, A0 e 5V.

### Tabela de componentes utilizados

|Componente |Quantidade |Valor/ Modelo |
|-|-|-|
|Jumper macho-macho | 7 | -|
|Arduino | 1 | Arduino UNO|
|Resistor | 3 | 330Ω  5% (1/4W) |
|LED | 3 | - |
|Suporte de MDF | 1 |- |
|potenciômetro| 1 | - |

### Tabela de Avaliação entre Pares

#### Avaliador: Felipe Elgenneni
#### Avaliado: Fernanda Correia

|Critério|	Contempla (Pontos)|	Contempla Parcialmente (Pontos)	|Não Contempla (Pontos)	|Observações do Avaliador|
|-|-|-|-|-|
|Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores	|Até 3	|Até 1,5	|0 | A motagem fisica está perfeita, os fios estão separados por cores que facilitam o entendimento Nota: 3|	
|Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo	|Até 3	|Até 1,5	|0 | o timer esta como pedido, mas utilizando de delay Nota: 3 |	
|Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) |	Até 3|	Até 1,5 |	0 | o codigo esta bem implementado e facil de entender. Um ponto muito positivo, pois está be organizado e comentado Nota: 3|	
|Ir além: Implementou um componente de extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código |	Até 1 |	Até 0,5 |	0 | Infelizmente não implementou nada extra, mas ouve uma tentativa de colocar um som quando o sinal estava vermelho, algo que achei muito criativo e bem pensado, pois trazendo para a realidade pode ajudar com a mobilidade urbana de pessoas com deficiencia visual Nota: 0,3 |	
| | | | |Pontuação Total: 9,3|

### Tabela de Avaliação entre Pares

#### Avaliador: Fernanda Correia Nascimento
#### Avaliado: Felipe Elgenneni

|Critério|	Contempla (Pontos)|	Contempla Parcialmente (Pontos)	|Não Contempla (Pontos)	|Observações do Avaliador|
|-|-|-|-|-|
|Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores	|Até 3	|Até 1,5	|0 | Ótima montagem física, as cores dos fios auxilia bastante no entendimento do fluxo do circuito, que funciona exatamente como esperado. Nota: 3 |	
|Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo	|Até 3	|Até 1,5	|0 | Temporização adequada, seguindo todos os valores estabelecidos e criando um loop de funcionamento. Nota: 3 |	
|Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) |	Até 3|	Até 1,5 |	0 | Ótima estruturação do código, com comentários relevantes e variáveis que auxiliam no entendimento. Nota: 3 |	
|Ir além: Implementou um componente de extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código |	Até 1 |	Até 0,5 |	0 | Foi implementada uma função de mudança de ritmo das fases do semáforo conforme ajustes no potenciometro. Nota: 1 |	
| | | | |Pontuação Total: 10|
