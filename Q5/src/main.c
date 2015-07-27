#include <stdio.h>
#include <stdlib.h>

int comparaNota(const void *a, const void *b);

typedef struct aluno
{
	char nome[32];
	float nota;
}Aluno;

int main()
{
	int num_alunos;
	Aluno *alunos;
	float media = 0;
	
	printf("Quantidade de alunos: ");
	scanf("%d", &num_alunos);
	
	alunos = (Aluno*) malloc(sizeof(Aluno)*num_alunos);
	
	int i;
	for(i = 0; i < num_alunos; i++)
	{
		printf("\naluno %d\n", i+1);
		printf("nome: ");
		scanf("%s", alunos[i].nome);
		printf("nota: ");
		scanf("%f", &alunos[i].nota);
		
		media += alunos[i].nota;
	}
	
	qsort(alunos, num_alunos, sizeof(Aluno), comparaNota);
	
	printf("\nmedia da turma: %.2f\n", media/num_alunos);
	
	for(i = 0; i < num_alunos; i++)
		printf("\n%s\nnota: %.2f\n", alunos[i].nome, alunos[i].nota);
	
	free((void*)alunos);
}

int comparaNota(const void *a, const void *b)
{
    if(((Aluno*)a)->nota < ((Aluno*)b)->nota) return 1;
    if(((Aluno*)a)->nota == ((Aluno*)b)->nota) return 0;
    if(((Aluno*)a)->nota > ((Aluno*)b)->nota) return -1;
}