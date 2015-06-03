
#include <stdio.h>
#include "file.h"

int player_write(struct player p)
{
	FILE *fp;
	char *filename = "test.txt";
	
	fp = fopen(filename, "w");
	if(!fp) {
		fprintf(stderr, "Error: file open\n");
		return -1;
	}
	
	fprintf(fp, "%d\n%s\n%d\n%d\n%d\n",
		p.level,
		p.name,
		p.age,
		p.job,
		p.sex);
	
	fclose(fp);
	
	return 0;
}

int player_read(struct player *p)
{
	FILE *fp;
	char *filename = "test.txt";
	
	fp = fopen(filename, "r");
	if(!fp) {
		fprintf(stderr, "Error: file open\n");
		return -1;
	}
	
	fscanf(fp, "%d\n%s\n%d\n%d\n%d\n",
		&(p->level),
		&(p->name),
		&(p->age),
		&(p->job),
		&(p->sex));
	
	fclose(fp);
	
	return 0;
}