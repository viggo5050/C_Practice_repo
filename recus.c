
#include<stdio.h>
#include <assert.h>

// int main(void){

// 	FILE *fp1 = fopen("./file1","w");
// 	FILE *fp2 = fopen("./file2","w");

// 	for (int i = 0;i < 10;i++)
// 		fputc('6',fp1);

// 	fclose(fp1);
// 	for (int i = 0;i < 10;i++)
// 		fputc('9',fp2);
// 	fclose(fp2);
// 	fp1 = fopen("./file1","a");
// 	fp2 = fopen("./file2","r");
// 	int c;
// 	while ((c = fgetc(fp2)) != EOF)
// 		fputc(c,fp1);
// 	fclose(fp1);
// 	fclose(fp2);
// 	fp1 = fopen("./file1","r");
// 	while ((c = fgetc(fp1)) != EOF)
// 		fputc(c,stdout);
// 	fclose(fp1);


// }

int main(void){

	FILE *fp1  = fopen("./file1","w");
	assert(fp1 != NULL);
	for (int i = 0; i < 2 ;i++)
		fprintf(fp1,"%c\n",'c');
	fclose(fp1);
	// fp1 = fopen("./file1","r");
	// assert(fp1 != NULL);
	// int c = 0 ,d;
	// while ((fscanf(fp1,"%d",&d))!=EOF)
	// 	c +=d;
	// fclose(fp1);
	// FILE *fp2  = fopen("./file2","w");
	// assert(fp2 != NULL);
	// fprintf(fp2, "%d\n",c );
	// fclose(fp2);




}



















