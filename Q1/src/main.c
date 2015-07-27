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
	{printf("%d to %d\n", str[i], L'á');
		switch(str[i])
		{
			case L'á': str[i] = L'a'; break;
			default: printf("z");
		}
	}
	
	printf("\nNova string: %ls", str);

    return 0;
}
