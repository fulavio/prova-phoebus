#include <stdio.h>
#include <string.h>

int main(void)
{
	char key [  ] = {"MaStErSuPeRhYpErKeY"};
	char pass[32] = {0};
	char hash[32] = {0};

	int idx, ckey;

	printf("hash: ");
	scanf("%s", hash);

	for (idx = strlen(hash)-1; idx >= 0;
		ckey = strlen(key) - (idx % strlen(key)) - 1,
		pass[idx] = (hash[idx] - 33) ^ key[ckey], idx--);

	printf("decrypted password: %s\n", pass);

    return 0;
}
