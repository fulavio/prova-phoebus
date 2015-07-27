#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#define MAX_STR 128

int main()
{
	setlocale(LC_ALL, "pt_BR");
	
	wchar_t str[MAX_STR];
	
	printf("Entrada: ");
	scanf("%ls", str);
	
	int i = 0;
	for(;i < wcslen(str); i++)
	{
		switch(str[i])
		{
			case L'á': str[i] = L'a'; break;
			case L'é': str[i] = L'e'; break;
			case L'í': str[i] = L'i'; break;
			case L'ó': str[i] = L'o'; break;
			//todo
			default: printf("z\n");
		}
	}
	
	printf("\nNova string: %ls", str);

    return 0;
}
