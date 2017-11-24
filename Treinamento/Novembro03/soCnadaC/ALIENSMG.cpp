/*
	ALIENSMG.cpp - (SPOJ-BR) ALIENSMG

	Problema do Roteiro 2 - Estruturas de Dados
	
	Link Original do Problema: http://br.spoj.com/problems/ALIENSMG/
	Link para Dicas da Solução: http://wiki.maratona.dcc.ufmg.br/index.php/ALIENSMG

	ATENÇÃO! Pedimos que não veja as dicas da Solução até ter quebrado bastante a cabeça tentando resolver o problema :)

*/
#include <iostream>
#include <stdio.h>
#include <map>

using namespace std;

int main(){
	map<char,int> DNAs;
	char L;
	int pluri = 0;
	int sent;
	
	while(true){
		cin >> sent;

		if(sent == 0)
			break;

		pluri = 0;

		for (int i = 0; i < 15; ++i)
			DNAs[i+65] = 0;
	
		while(sent >= 0){
			while((L = getchar()) != '\n'){
				DNAs[L]++;
			}

			sent--;
		}

		for (int i = 0; i < 15; ++i)
			for(int j = 1; j < 15; ++j)
				if(DNAs[i+65] != DNAs[j+65])
					pluri++;

		cout << pluri << endl;
	}
	
	return 0;
}
