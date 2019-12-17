#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <cstdlib>
using namespace std;



void FecharArquivo(FILE *arquivo){
    fclose(arquivo);
}
//--------------------------------------------------------------------------------------------------//
FILE* AbreArquivo(char modo, char caminho[30]){
    FILE *arquivo;
    switch(modo){
        case 'g':
            arquivo = fopen(caminho,"wt");
            break;
        case 'l':
            arquivo = fopen(caminho,"rt");
            break;
        case 'a':
            arquivo = fopen(caminho,"a");
            break;
    }
    if(arquivo==NULL){      //Se houver algum erro, o ponteiro apontará para NULL
        printf("Nao foi possivel abrir o arquivo/Arquivo nao existe");
            
        exit(0);
    }
    return arquivo;
}


void Playlist(){
	
	srand(41);
	string nomeMusica[100];
	int numero,quantidade;

	cout<<"Digite a quantidade de musicas que deseja gerar playlist"<<endl;
	cin>>quantidade;
	
	
	for(int i=0;i<=quantidade;i++){
	cout<<"digite uma musica"<<endl;
	getline ( cin, nomeMusica[i] );

	}
	cout<<"--------------------"<<endl;
	cout<<"musicas aleatorias"<<endl;
	cout<<"--------------------"<<endl;
	
	for(int x=0;x<quantidade;x++){
		numero = 1+(rand()%quantidade);
				
		cout<<"musicas "<<x+1<<" : "<<nomeMusica[numero]<<endl;
		
	}
}


//--------------------------------------------------------------------------------------------------//
void CadastrarMusica(){
	
	string nomeAlbum,nomeBanda, nomeMusica, duracaoMusica, musicaFavorita, anoLancamento;
	
	cout << "Digite o nome do album que deseja inserir mais musicas: " << endl;
	cout << "Obs:Certifique-se de que o album exista" << endl<<endl;
    cin>>nomeAlbum;
  
	
    cout<<" -------------------------------"<<endl;
    cout<<"AGORA INSIRA INFORMACOES A RESPEITO DAS MUSICAS DESTE ALBUM"<<endl<<endl;
    		cout<<"Digite o nome/titulo da Musica"<<endl<<endl;
    		cin.get();
			getline ( cin, nomeMusica );
			
			cout<<"Duracao musica(segundos):"<<endl<<endl;
			getline ( cin, duracaoMusica );
			
			cout<<"E uma musica favorita?Sim ou nao?"<<endl<<endl;
			getline ( cin, musicaFavorita );
			
			
			//CADASTRO ARQUIVO TITULO DO ALBUM
            //Nome do arquivo é igual ao nome do album inserido. ios::app serve para da continuidade nas informações cadastradas
            FILE *arquivo;
			ofstream fout;
			fout.open ( nomeAlbum.c_str(), ios::app );
            if ( fout.is_open() ){

				fout<<"----------------------------------------"<<endl;
				fout<<"MUSICAS DO ALBUM"<<endl<<endl;
				fout<<"Nome da musica: "<<nomeMusica<<endl;
				fout<<"Duracao: "<< duracaoMusica<<endl;
				fout<<"Musica favorita?: "<<musicaFavorita<<endl;
				fout<<"----------------------------------------"<<endl;
				
            }
            
            fout.close();
}

//--------------------------------------------------------------------------------------------------//
void CadastraAlbumMusica(){
	
	string nomeAlbum,nomeBanda, nomeMusica, duracaoMusica, musicaFavorita,anoLancamento;
    int numeroMusicas;
    
    cout << "Digite o nome do album: " << endl;
    cin.get();
	getline ( cin, nomeAlbum );
    cout << "Digite o ano de lancamento: " << endl;
    cin>>anoLancamento;
	cout << "Digite o nome da banda: " << endl;
	cin.get();
    getline ( cin, nomeBanda );
    
    	cout<<" -------------------------------"<<endl;
    cout<<"AGORA INSIRA INFORMACOES A RESPEITO DAS MUSICAS DESTE ALBUM"<<endl;
    		cout<<"Digite o nome/titulo da Musica"<<endl;
    		cin.get();
			getline ( cin, nomeMusica );
			
			cout<<"Duracao musica(segundos):"<<endl;
			getline ( cin, duracaoMusica );
			
			cout<<"E uma musica favorita?Sim ou nao?"<<endl;
			getline ( cin, musicaFavorita );
		
		
        
        
     //CADASTRO ARQUIVO TITULO DA BANDA   
	//Cadastrando informações dentro do arquivo
	FILE *arquivo;
	ofstream fout;
            //Nome do arquivo é igual ao nome do album inserido. ios::app serve para da continuidade nas informações cadastradas
			fout.open ( nomeBanda.c_str(), ios::app );
            if ( fout.is_open() ){
                
            	fout<<" INFORMACOES DA BANDA"<<endl;
				fout<<"Nome do Album: "<<nomeAlbum<<endl;
				fout<<"Ano lancamento: "<<anoLancamento<<endl;
				fout<<"Nome da banda: "<<nomeBanda<<endl;

				fout<<"MUSICAS DO ALBUM"<<endl;
				fout<<"Nome da musica: "<<nomeMusica<<endl;
				fout<<"duracao: "<< duracaoMusica<<endl;
				fout<< "Musica favorita?: "<<musicaFavorita<<endl;
				fout<<"----------------------------------------"<<endl;
				
            }
            
            fout.close();
            //--------------------------------------------------------------------------------------------------//
            
			//CADASTRO ARQUIVO TITULO DO ALBUM
            //Nome do arquivo é igual ao nome do album inserido. ios::app serve para da continuidade nas informações cadastradas
			fout.open ( nomeAlbum.c_str(), ios::app );
            if ( fout.is_open() ){
                
				fout<<" INFORMACOES ALBUM"<<endl;
				fout<<"Nome do Album: "<<nomeAlbum<<endl;
				fout<<"Ano lancamento: "<<anoLancamento<<endl;
				fout<<"Nome da banda: "<<nomeBanda<<endl;

				fout<<"MUSICAS DO ALBUM"<<endl;
				fout<<"Nome da musica: "<<nomeMusica<<endl;
				fout<<"duracao: "<< duracaoMusica<<endl;
				fout<< "Musica favorita?: "<<musicaFavorita<<endl;
				fout<<"----------------------------------------"<<endl;
				
            }
            fout.close();
            //--------------------------------------------------------------------------------------------------//
            
            
            //CADASTRO ARQUIVO ANO DE LANÇAMENTO
            //Nome do arquivo é igual ao nome do album inserido. ios::app serve para da continuidade nas informações cadastradas
			fout.open ( anoLancamento.c_str(), ios::app );
            if ( fout.is_open() ){
                
				fout<<" INFORMACOES ANO DE LANCAMENTO"<<endl;
				fout<<"Nome do Album: "<<nomeAlbum<<endl;
				fout<<"Ano lancamento: "<<anoLancamento<<endl;
				fout<<"Nome da banda: "<<nomeBanda<<endl;
				fout<<"----------------------------------------"<<endl;	
				fout<<"MUSICAS DO ALBUM"<<endl;
				fout<<"Nome da musica: "<<nomeMusica<<endl;
				fout<<"duracao: "<< duracaoMusica<<endl;
				fout<< "Musica favorita?: "<<musicaFavorita<<endl;
				fout<<"----------------------------------------"<<endl;
				
            }
            
            fout.close();
            //--------------------------------------------------------------------------------------------------//
            
            //CADASTRO ARQUIVO TITULO DA MUSICA  
            //Nome do arquivo é igual ao nome do album inserido. ios::app serve para da continuidade nas informações cadastradas
			fout.open ( nomeMusica.c_str(), ios::app );
            if ( fout.is_open() ){
                
				fout<<" INFORMACOES TITULO DA MUSICA"<<endl;
				fout<<"Nome do Album: "<<nomeAlbum<<endl;
				fout<<"Ano lancamento: "<<anoLancamento<<endl;
				fout<<"Nome da banda: "<<nomeBanda<<endl;

				fout<<"MUSICAS DO ALBUM"<<endl;
				fout<<"Nome da musica: "<<nomeMusica<<endl;
				fout<<"duracao: "<< duracaoMusica<<endl;
				fout<< "Musica favorita?: "<<musicaFavorita<<endl;
				fout<<"----------------------------------------"<<endl;
				
            }
            
            fout.close();
            
}

//--------------------------------------------------------------------------------------------------//
void ListarBanda(){
	
	FILE *arquivo;
    //string nomeAlbum;
    //char nomeBanda[30];
    char nomeBanda[30];
    int anoLancamento;
    string nomeMusica, duracaoMusica,musicaFavorita;
    
	char *result;
	char Linha[100];
	int i;
	
    cout<<"Qual nome da banda?"<<endl;
     cin>>nomeBanda;
    
    arquivo = AbreArquivo('l', nomeBanda);
   while (!feof(arquivo))
  {
	// Lê uma linha (inclusive com o '\n')
      result = fgets(Linha, 100, arquivo);  // o 'fgets' lê até 99 caracteres ou até o '\n'
      if (result)  // Se foi possível ler
	  printf(" %d : %s",i,Linha);
      i++;
  }
   
    FecharArquivo(arquivo);
}

//--------------------------------------------------------------------------------------------------//
void ListarMusica(){
		
	FILE *arquivo;
    //string nomeAlbum;
    char nomeMusica[30];
    int anoLancamento;
    string duracaoMusica,musicaFavorita;
    
	char *result;
	char Linha[100];
	int i;
   
    cout<<"Qual nome da musica?"<<endl;
    cin>>nomeMusica;
    
	
    arquivo = AbreArquivo('l', nomeMusica);
   while (!feof(arquivo))
  {
	// Lê uma linha (inclusive com o '\n')
      result = fgets(Linha, 100, arquivo);  // o 'fgets' lê até 99 caracteres ou até o '\n'
      if (result)  // Se foi possível ler
	  printf(" %d : %s",i,Linha);
      i++;
  }
   
    FecharArquivo(arquivo);
}

//-----------------------------------------------------------------//
void ListarAno(){
    FILE *arquivo;
    //string nomeAlbum;
    char anoLancamento[30];
    string nomeBanda,nomeMusica, duracaoMusica,musicaFavorita;
    
	char *result;
	char Linha[100];
	int i;
   
    
    cout<<"Qual ano de lancamento? "<<endl;
    cin>>anoLancamento;
    
	
    arquivo = AbreArquivo('l', anoLancamento);

   while (!feof(arquivo))
  {
	// Lê uma linha (inclusive com o '\n')
      result = fgets(Linha, 100, arquivo);  // o 'fgets' lê até 99 caracteres ou até o '\n'
      if (result)  // Se foi possível ler
	  printf(" %d : %s",i,Linha);
      i++;
  }
   
    FecharArquivo(arquivo);
}

//-----------------------------------------------------------------//
void ListarAlbum(){
    FILE *arquivo;
    //string nomeAlbum;
    char nomeAlbum[30];
    int anoLancamento;
    string nomeBanda,nomeMusica, duracaoMusica,musicaFavorita;
    
	char *result;
	char Linha[100];
	int i;
   
    
    cout<<"Qual nome do album?"<<endl;
    cin>>nomeAlbum;
    
	
    arquivo = AbreArquivo('l', nomeAlbum);

   while (!feof(arquivo))
  {
	// Lê uma linha (inclusive com o '\n')
      result = fgets(Linha, 100, arquivo);  // o 'fgets' lê até 99 caracteres ou até o '\n'
      if (result)  // Se foi possível ler
	  printf(" %d : %s",i,Linha);
      i++;
  }
   
    FecharArquivo(arquivo);
}


//--------------------------------------------------------------------------------------------------//
int main() {
    int escolhaOpcao;
    char nomeAlbum[30];
    char nomeBanda[30];
    int anoLancamento, numeroMusica, resposta;
    string tituloMusica, duracaoMusica;
    bool musicaFavorita;
    
    cout << "Lista Music!" << endl << endl;
    cout << "Escolha uma opcao:" << endl;
    cout << "1)Cadastrar Album e suas respectivas Musicas:" << endl;
    cout << "2)Pesquisar por album:" << endl;
    cout << "3)Pesquisar por colecao de musicas :" << endl;
    cout << "4)Gerar Playlist musicas aleatorias: "<<endl; 
    cout << "5)Cadastrar musicas em um album: "<<endl; 
    cin >> escolhaOpcao;
    
    switch ( escolhaOpcao ) {
        
		case 1:
            CadastraAlbumMusica();
            system("pause");
            system("cls");
            main();
            break;
        
		case 2:
			cout<<"Pesquisa de Album? (1)-Ano de lancamento.(2)-Titulo do Album. (3)-Nome da banda"<<endl;
			cin>>resposta;
			
			if(resposta==1){
				ListarAno();
			} 
			
			else if(resposta==2){
				ListarAlbum();
			}
			
			else if(resposta==3){
				ListarBanda();
			}
			
			system("pause");
            system("cls");
            main();
            break;
        
        case 3:
        	cout<<"Gostaria de pesquisar por Titulo da Musica ou Banda?\n (1)-Titulo da Musica. (2)-Banda "<<endl;
        	cin>>resposta;
        	
        	if(resposta==1){
        		ListarMusica();
			}
			else if (resposta == 2){
				ListarBanda();
			}
			else{
				cout<<"Numero errado, tente denovo"<<endl;
			}
			
			
        	system("pause");
            system("cls");
            main();
        	break;
        
		case 4:
			Playlist();
			system("pause");
			system("cls");
            main();	
            
            
        case 5:
        	CadastrarMusica();
        	system("pause");
            system("cls");
            main();
        	

    }
    
    return 0;
}

