#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) 
{
	if (argc==1)
	{
		printf("Usage: minibf <file_name>\n");
		exit(1);
	}
	else
	{
		int c;
		char ch, file_name[25];
		FILE *f;
		int temp=0; //counter for ASCII ordinal

		f=fopen(argv[1], "r");

		if (f == NULL)
		{
			printf("File %s does not exist\n", argv[1]);
			exit(1);
		}
		else {
			while ((c = fgetc(f)) != EOF)
			{
			 	if (c=='+'){
			 		temp++;
			 	} else if (c=='-'){
			 		temp--;
			 	}
			 	else if (c=='.') {
			 		printf("%c", temp);
			 	}
			}
		}

		fclose(f);
		printf("\n");
	}
	return 0;
	
}