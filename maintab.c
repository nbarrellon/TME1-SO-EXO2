
#define NMAX 10
#include <stdlib.h>
#include <stdio.h>
#include "tab.h"
/* commentaire */
int main(int argc,char **argv){
	int tableau[NMAX];
	InitTab(tableau,NMAX);
	PrintTab(tableau,NMAX);

	return 0;
}