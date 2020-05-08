#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	int i,a,b,l1,l2,opcao,lado,j,tam, espaco, asterisco, x, y, metade, numero;
	float area, perimetro,cateto,atr,ptr,hipo,ladol, areal, perimetrol,diametroma, diametrome;

	do{
		for(i=0;i<36;i++)
		{

			printf("#");

		}printf("\n");

		printf("######### SEJA BEM VINDO ########### \n");
		for(i=0;i<36;i++)
		{
			printf("#");
		}printf("\n##");
		for(i=0;i<32;i++)
		{
			printf(" ");
		}printf("## \n");
		printf("## Escolha uma forma geometrica:  ##\n");
		printf("##                                ##\n");
		printf("## 1. Quadrado                    ##\n");
		printf("## 2. Retangulo                   ##\n");
		printf("## 3. Triangulo equilatero        ##\n");
		printf("## 4. Triangulo retangulo         ##\n");
		printf("## 5. Outra                       ##\n");
		printf("## 6. Sair                        ##\n");
		printf("##                                ##\n");
		for(i=0;i<36;i++)
		{
			printf("#");
		};
		printf("\nOpcao: ");
		scanf("%d", &opcao);

		switch(opcao){
			//CASE 1
			case 1:{
				for(i=0;i<36;i++)
				{
					printf("=");
				}printf("\n");
				printf("             Quadrado              \n");
				for(i=0;i<36;i++)
				{
					printf("=");
				}printf("\n");

				printf("Digite o lado do quadrado: ");
				scanf("%d", &a);

				area = a*a;
				perimetro = a * 4;

				printf("\n");
				printf("Area: %.2f \n", area);
				printf("Perimetro: %.2f \n\n", perimetro);

        for (i = 0; i < 2 * a + 3; i++)
        {
			    	printf ("-");
			   	}
      printf("\n");
				for(i=0;i<a;i++)
				{
          printf("|");
				  printf("  ");
					for(b=0;b<a;b++){
						printf("@ ");
					}printf("| \n");
				}
        for (i = 0; i < 2 * a + 3; i++)
        {
			    	printf ("-");
			   	}

				printf("\n");
				for(i=0;i<36;i++)
				{
					printf("=");
				}printf("\n\n");
				break;
			}



			//CASE 2
			case 2:{
				for(i=0;i<36;i++)
				{
					printf("=");
				}printf("\n");
				printf("             Retangulo              \n");
				for(i=0;i<36;i++)
				{
					printf("=");
				}printf("\n");

				printf("Digite a altura do retangulo: ");
				scanf("%d", &l1);
				printf("Digite a base do retangulo: ");
				scanf("%d", &l2);

				area = l1*l2;
				perimetro = (l1+l2)*2;

				printf("\n");
				printf("Area: %.2f \n", area);
				printf("Perimetro: %.2f \n\n", perimetro);

        for (i = 0; i < 2 * l2 + 3; i++)
        {
			    	printf ("-");
			  }printf("\n");
				for(i=0;i<l1;i++)
				{
          printf("|");
				  printf("  ");
					for(b=0;b<l2;b++)
					{
						printf("@ ");
					}printf("|\n");
				}
        for (i = 0; i < 2 * l2 + 3; i++)
        {
			    	printf ("-");
			   }

				printf("\n");
				for(i=0;i<36;i++)
				{
					printf("=");
				}printf("\n\n");

				break;
			}



			//CASE 3
			case 3:{
				for(i=0;i<36;i++)
				{
					printf("=");
				}printf("\n");
				printf("       Triangulo equilatero        \n");
				for(i=0;i<36;i++)
				{
					printf("=");
				}printf("\n");

				printf ("Digite o lado do triângulo equilátero: ");
				scanf ("%d", &lado);

				printf ("\nArea: %.2f", lado * lado * pow (3, 0.5) / 4.0);
				printf ("\nPerimetro: %.2f\n\n", 3.0 * lado);

				printf("\n");

				for (i = 0; i < lado + 1; i++)
				{
			    	printf (" ");
			   	}
			 	printf (" .\n");
			 	for (i = 0; i < lado + 1; i++)
			 	{
			    	printf (" ");
			   }
			 	printf ("/ \\ \n");
			 	for (i = 0; i < lado; i++)
			 	{
			    	for (j = 0; j < lado - i; j++)
			    	{
			 			printf (" ");
					}
				    printf ("/");
				    for (j = 0; j < i; j++)
				    {
				 		 printf (" @");
					}
					printf (" @ \\");
				    printf ("\n");
				}
				printf ("/");
			 	for (i = 0; i < 2 * lado + 3; i++)
			 	{
			    	printf ("_");
			   	}

				printf("\\ \n\n\n");
				for(i=0;i<36;i++)
				{
					printf("=");
				}printf("\n\n");

				break;
			}



			//CASE 4
			case 4:{
				for(i=0;i<36;i++)
				{
					printf("=");
				}printf("\n");
				printf("      Triangulo Retangulo        \n");
				for(i=0;i<36;i++)
				{
					printf("=");
				}printf("\n");

				printf("Digite o lado(catetos iguais): ");
				scanf("%d", &l1);

				atr = (cateto*cateto)/2;
            hipo = sqrt(2*(pow(cateto,2)));
            ptr = cateto+cateto+hipo;

            printf("ÁREA: %.2f\n",atr);
            printf("PERÍMETRO: %.2f\n",ptr);
        printf ("  .\n");
				printf("  |\\ \n");
				for(a=1;a<=l1;a++){
					printf("  ");
					printf("|");
					for(b=a;b>0 && b<=a;b--)
					{
						printf("@");
					}printf("\\");
					printf("\n");
				}
        printf("  ");
        printf("|");
        for (i = 0; i < 2 * l1 - l1 +1; i++)
        {
			    	printf ("_");
			   	}
      printf("\\");

				printf("\n");
				for(i=0;i<36;i++)
				{
					printf("=");
				}printf("\n\n");

				break;
			}


			//CASE 5
			case 5:{
        for(i=0;i<36;i++)
        {
					printf("=");
				}printf("\n");
				printf("             Losango        \n");
				for(i=0;i<36;i++)
				{
					printf("=");
				}printf("\n");

        printf("\nDigite o valor do losango: ");
        scanf("%f",&ladol);
        printf("\nDigite o valor do diametro maior: ");
        scanf("%f",&diametroma);
        printf("\nDigite o valor do diametro menor: ");
        scanf("%f",&diametrome);

          areal = (diametroma*diametrome)/2;
          perimetrol = ladol*4;

          printf("ÁREA: %.2f\n",areal);
          printf("PERÍMETRO: %.2f\n",perimetrol);

          for(int i=0; i<=(2*ladol)+2; i++)
          {
              if(i==ladol+2)
              {
                  printf(".");
              }else{
                  printf(" ");
              }
          }
          printf("\n");
          for(int i=0; i<=(2*ladol)+2; i++)
          {
              if(i==ladol+1)
              {
                  printf("/ \\");
              }else{
              printf(" ");
              }
          }
          printf("\n");
          for(int i=0; i<ladol; i++){
              for(int h=0; h<=ladol-i-1; h++)
              {
                  printf(" ");
              }
              printf("/ ");
              for(int j=0; j<=i; j++)
              {
                  printf("@ ");

              }
              printf("\\");

              printf("\n");
          }
          for(int i=ladol; i>0; i--)
          {
              for(int h=ladol; h>=i+1; h--)
              {
                  printf(" ");
              }
              printf(" \\ ");
              for(int j=i; j>0; j--)
              {
                  printf("@ ");

              }
              printf("/\n");
          }
          for(int i=(2*ladol)+1; i>=0; i--)
          {
              if(i==ladol)
              {
                  printf("\\ /");
              }else{
              printf(" ");
              }
          }
          printf("\n");
          for(int i=(2*ladol)+2; i>=0; i--)
          {
              if(i==ladol)
              {
                  printf(".");
              }else{
                  printf(" ");
              }
          }
          printf("\n");

          printf("\n");
          for(i=0;i<36;i++)
          {
            printf("=");
          }printf("\n\n");
          }
	break;
	}

	}while(opcao!=6);
	
	return 0;
}