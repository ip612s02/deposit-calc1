#include <stdio.h>
#include <stdlib.h>

main(){
	int Srok, SummaVk, Rezult;
	printf ("Vvedite srok: ");
	scanf ("%d", &Srok);
	printf ("Vvedite summu vklada: ");
	scanf ("%d", &SummaVk);
	if (Srok<=365 && SummaVk>=10000)
	    printf ("Vse vvedeno pravil`no");
	    else 
	    printf ("Srok vklada ili Summa vklada vvedeni neverno");
	system("pause");
	return 0;
}
