/* scpg — Simple C Password Generator
 *
 * Author: grot
 * License: 0-clause BSD
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	if(argc < 1 || argc > 2)
	{
		printf("No arguments or too many arguments given.\nUsage: cspg <PASSWORD LENGTH>\n");
		
		return 1;
	}

	srand(time(NULL));
	int counter;
	int passwordLength = atoi(argv[1]);
	char symbols[90] = "!@#$%^&*()_-+=`~{}:;'|/,<>.?1234567890AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	for(counter = 1; counter <= passwordLength; ++counter)
		printf("%c", symbols[rand() % 90]);

	return 0;
}
