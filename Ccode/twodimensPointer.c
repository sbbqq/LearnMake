#include<stdio.h>
int main(void){
int nrows = 3;
int ncols = 5;
int i, j;

// Allocate memory for nrows pointers
char **pvowels = (char **) malloc(nrows * sizeof(char *));

// For each row, allocate memory for ncols elements
pvowels[0] = (char *) malloc(ncols * sizeof(char));
pvowels[1] = (char *) malloc(ncols * sizeof(char));
pvowels[2]=(char *)malloc(ncols*sizeof(char));

pvowels[0][0] = 'A';
pvowels[0][1] = 'E';
pvowels[0][2] = 'I';
pvowels[0][3] = 'O';
pvowels[0][4] = 'U';

pvowels[1][0] = 'a';
pvowels[1][1] = 'e';
pvowels[1][2] = 'i';
pvowels[1][3] = 'o';
pvowels[1][4] = 'u';

for (i = 0; i < nrows; i++) {
    for(j = 0; j < ncols; j++) {
        printf("%d ", &pvowels[i][j]);
    }

    printf("\n");
}
// type some add 
  printf("%d\n %d\n %d\n %d\n",pvowels[0],pvowels[1],*(pvowels+1),*(pvowels+2));
  printf("pvowels=%d *pvowels=%d  (pvowels+1)=%d *(pvowels+1)=%d",pvowels,*pvowels,pvowels+1,*(pvowels+1));
// Free individual rows
free(pvowels[0]);
free(pvowels[1]);

// Free the top-level pointer
free(pvowels);
return 0;
}
