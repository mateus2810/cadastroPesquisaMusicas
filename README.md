# cadastroPesquisaMusicas
Sistema em C++ com cadastro, pesquisa de musicas dentro de um arquivo

Nome: Mateus Amaral de Almeida Souza


DETALHE DE FUNCIONAMENTO DO ALGORITMO:

Cen�rio de Teste:

Cadastrar �lbum e suas respectivas M�sicas: �testar se aceita nome e n�mero�
�testar se aceita nome e sobrenome�
�depois de cadastrado verificar se foi salvo no arquivo�

Pesquisar por �lbum:

�testar se o ano de lan�amento aceita n�meros e letras�
�testar se ao digitar os dados do album cadastrados, ele condiz com os dados da pesquisa e se os dados salvos na pasta est�o certos�

Pesquisar por cole��o de m�sica:

�testar se os dados cadastrados condiz com os dados pesquisados�

Gerar Playlist de m�sicas aleat�rias:

�testar se a playlist respeita o tempo de 1hr e se as m�sicas geradas s�o metade aleat�rias e metade favoritas � - Inv�lido
�testar se as m�sicas est�o inseridas de forma aleat�ria conforme quantidade estipulada de m�sicas�

Cadastrar m�sicas em um �lbum:

�testar se as m�sicas novas cadastradas n�o sobrescrevem as anteriores�
�testar se ao cadastrar as m�sicas, os dados fornecidos iram pro �lbum desejado�

Premissas assumidas:
Com base nas instru��es Gerais fornecidas, onde a interface do sistema deve ser do tipo console e o c�digo deve ser execut�vel eu escolhi a linguagem C++ devido essa facilidade com tipo console e gerar c�digo execut�vel.

Decis�es de projeto, incluindo modelagem:

Partindo do pressuposto que Billie Joe, personagem do nosso sistema, tinha como problema a falta de armazenamento de suas m�sicas, sendo assim eu parti para cria��o de um sistema que tivesse persist�ncia nos dados, ou seja, os dados sejam armazenado de alguma forma para recupera��es futuras. Utilizei de  armazenamento em arquivo.


D iagrama de Caso de Uso:


 

C adastro de �lbum e M�sica : O Usu�rio consegue cadastrar o �lbum que
desejar, inserindo nome do �lbum, ano de lan�amento e nome da banda. Dentro desse mesmo �lbum o usu�rio insere informa��es a respeito da m�sica:Nome da m�sica, dura��o dessa m�sica e se � uma m�sica favorita ou n�o.

C onsulta por M�sica: O usu�rio consegue pesquisar por: t�tulo da m�sica ou
banda.

C onsulta por �lbum : O usu�rio consegue pesquisar por: Ano de lan�amento,
T�tulo do �lbum e Nome da banda.

G erar Playlist M�sicas: O usu�rio � capaz de solicitar a quantidade de
m�sicas que deseja fazer a playlist e em seguida descrever quais s�o as m�sicas que ser�o feitas a playlist aleat�ria.

C adastrar M�sicas em um �lbum: O Usu�rio consegue cadastrar mais
m�sicas dentro de um �lbum j� cadastrado. O usu�rio ir� escrever o �lbum que deseja adicionar m�sicas e em seguida adicionar informa��es das m�sicas: T�tulo da m�sica, dura��o e se a m�sica � favorita.

Instru��es para executar o sistema no Windowns:

Bem simples:

Abrir Arquivo �sistemaProvaDti�, dar um duplo clique sobre �main.exe� e o sistema j� ir� funcionar.

Se o usu�rio desejar compilar o c�digo, ou desejar fazer qualquer altera��o sugiro que instale um compilador para o c++. (Ex: Code Blocks, Netbeans, Dev C++). Foi utilizado para criar a aplica��o Dev C++. Ap�s instala��o entrar no arquivo �main.cpp�, ter� todo acesso ao c�digo.

