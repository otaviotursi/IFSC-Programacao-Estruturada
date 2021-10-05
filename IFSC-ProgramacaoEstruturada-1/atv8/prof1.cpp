void Leitura(char* arquivo, char* modo)

{

FILE* Arq;

int retorno=99;

char buffer[1024];

struct candidato umCandidato;

int posicao =0;


Arq = fopen(arquivo, modo);

if (Arq == NULL)

{

printf("Erro na abertura do arquivo...");

return;

}

while (retorno != 0)

{

retorno = fgets(buffer, sizeof(buffer), Arq);

if (retorno != NULL)

{

DesmontaUmaLinha(buffer, &umCandidato);

ImprimeCandidato(umCandidato);

}

}

fclose(Arq);

}
