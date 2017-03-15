#include <stdio.h>
#include <stdlib.h>

main(){
	int Srok, SummaVk, Rezult;
	printf ("Vvedite srok: ");
	scanf ("%d", &Srok);
	printf ("Vvedite summu vklada: ");
	scanf ("%d", &SummaVk);
	if (Srok<=365 && SummaVk>=10000){
		if (SummaVk<=100000){
			if (Srok>=0 && Srok <=30)
			Rezult=SummaVk*0.9;
		    if (Srok>=31 && Srok <=120)
		    Rezult=SummaVk*1.02;
		    if (Srok>=121 && Srok <=240)
		    Rezult=SummaVk*1.06;
		    if (Srok>=241 && Srok <=365)
		    Rezult=SummaVk*1.12;
		}
	        else {
	        		if (Srok>=0 && Srok <=30)
			            Rezult=SummaVk*0.9;
		            if (Srok>=31 && Srok <=120)
		                Rezult=SummaVk*1.03;
		            if (Srok>=121 && Srok <=240)
		                Rezult=SummaVk*1.08;
		            if (Srok>=241 && Srok <=365)
		                Rezult=SummaVk*1.15;
	        }
	}
	    else 
	    printf ("Srok vklada ili Summa vklada vvedeni neverno");
	system("pause");
	return 0;
}
