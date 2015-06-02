
#include <stdio.h>
#include <stdlib.h>

int make_charactor(char *name, int age, int sex, int job)
{
	char buf[1024];

	printf("Enter your name > ");
	fgets(buf, sizeof(buf), stdin);
	strcpy(name, buf);

	printf("Enter your age > ");
	fgets(buf, sizeof(buf), stdin);
	age = atoi(buf);

	printf("Select\n 1:man 2:woman > ");
	fgets(buf, sizeof(buf), stdin);
	sex = atoi(buf);

	printf("Select your job\n"
		"1: elf\n"
		"2: Wizard\n"
		"0: Kou Matsusagawa\n");
	fgets(buf, sizeof(buf), stdin);
	job = atoi(buf);

	return 0;
}
