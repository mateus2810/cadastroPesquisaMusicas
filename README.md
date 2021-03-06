# cadastroPesquisaMusicas
Sistema em C++ com cadastro, pesquisa de musicas dentro de um arquivo

**Desenvolvedor**: Mateus Amaral de Almeida Souza


## DETALHE DE FUNCIONAMENTO DO ALGORITMO:

### 1. Cenário de Testes (seção 1 ate 1.4):

* “testar se aceita nome e número”

* “testar se aceita nome e sobrenome”

* “depois de cadastrado verificar se foi salvo no arquivo”


### 1.1 Pesquisar por Álbum:

* “testar se o ano de lançamento aceita números e letras”

* “testar se ao digitar os dados do album cadastrados, ele condiz com os dados da pesquisa e se os dados salvos na pasta estão certos”

### 1.2. Pesquisar por coleção de música:

* “testar se os dados cadastrados condiz com os dados pesquisados”

### 1.3. Gerar Playlist de músicas aleatórias:

* “testar se a playlist respeita o tempo de 1hr e se as músicas geradas são metade aleatórias e metade favoritas ” - Inválido

* “testar se as músicas estão inseridas de forma aleatória conforme quantidade estipulada de músicas”

### 1.4. Cadastrar músicas em um álbum:

* “testar se as músicas novas cadastradas não sobrescrevem as anteriores”
*  “testar se ao cadastrar as músicas, os dados fornecidos iram pro álbum desejado”

### 2. Premissas assumidas:

  Com base nas instruções Gerais fornecidas, onde a interface do sistema deve ser do tipo console e o código deve ser executável eu escolhi a linguagem C++ devido essa facilidade com tipo console e gerar código executável.

### 3. Decisões de projeto, incluindo modelagem:

  Partindo do pressuposto que Billie Joe, personagem do nosso sistema, tinha como problema a falta de armazenamento de suas músicas, sendo assim eu parti para criação de um sistema que tivesse persistência nos dados, ou seja, os dados sejam armazenado de alguma forma para recuperações futuras. Utilizei de  armazenamento em arquivo.


### 4. Diagrama de Caso de Uso:
![alt text](https://github.com/mateus2810/cadastroPesquisaMusicas/blob/master/Documenta%C3%A7%C3%A3o/casoDeUso.png)


* Cadastro de Álbum e Música : O Usuário consegue cadastrar o álbum que desejar, inserindo nome do álbum, ano de lançamento e nome da banda.Dentro desse mesmo álbum o usuário insere informações a respeito da música:Nome da música, duração dessa música e se é uma música favorita ou não.

* Consulta por Música: O usuário consegue pesquisar por: título da música ou
banda.

* Consulta por Álbum : O usuário consegue pesquisar por: Ano de lançamento,
Título do Álbum e Nome da banda.

* Gerar Playlist Músicas: O usuário é capaz de solicitar a quantidade de
músicas que deseja fazer a playlist e em seguida descrever quais são as músicas que serão feitas a playlist aleatória.

* Cadastrar Músicas em um álbum: O Usuário consegue cadastrar mais
músicas dentro de um álbum já cadastrado. O usuário irá escrever o álbum que deseja adicionar músicas e em seguida adicionar informações das músicas: Título da música, duração e se a música é favorita.

### 5. Instruções para executar o sistema no Windowns:


Abrir pasta “cadastroPesquisaMusica”, dar um duplo clique sobre “codigo.exe” e o sistema já irá funcionar.

Se o usuário desejar compilar o código, ou desejar fazer qualquer alteração sugiro que instale um compilador para o c++. (Ex: Code Blocks, Netbeans, Dev C++). Foi utilizado para criar a aplicação Dev C++. Após instalação entrar no arquivo “codigo.cpp”, terá todo acesso ao código.

