#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <time.h>

int main()
{
    FILE *plik;

    int miesiac;
    int data;
    char notatka[200];
    int r;
    char ZadanieDoUsuniecia[50];
    char InformacjeZPliku[200];
    char NazwaPliku[50];

    printf("1.Add a note\n");
    printf("2.Delete the note\n");
    printf("3.View the content of the selected note\n");
    printf("4.Exit\n");
    puts("");

    printf("Enter number\n");
    scanf("%d",&r);

    if(r == 1)
    {


    puts("");
    printf("In which month do you want to add a note: \n\n");
    printf("If you are entering a note of two or more words, add '-', e.g.eat-sandwich \n");
    printf("1:January, 2:February, 3:March, 4:April, 5:May, 6:June \n");
    printf("7:July, 8:August, 9:September, 10:October, 11:November, 12:December \n");

    puts("");
    printf("Enter number\n");
    scanf("%d",&miesiac);
    puts("");


    switch(miesiac)
    {

        case 1:


        puts("");
        printf("|---------------------------|\n");
        printf("|          January          |\n");
        printf("|---------------------------|\n");
        printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
        printf("| 8 | 9 | 10| 11| 12| 13| 14|\n");
        printf("| 15| 16| 17| 18| 19| 20| 21|\n");
        printf("| 22| 23| 24| 25| 26| 27| 28|\n");
        printf("| 29| 30| 31|               |\n");
        printf("|---------------------------|\n");

        puts("");
        printf("Enter the day you want to add a note: \n");
        scanf("%d",&data);
        puts("");


            if(data == 1)

            {

            plik = fopen("January01.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 2)

            {

            plik = fopen("January02.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 3)

            {

            plik = fopen("January03.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 4)

            {

            plik = fopen("January04.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 5)

            {

            plik = fopen("January05.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 6)

            {

            plik = fopen("January06.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 7)

            {

            plik = fopen("January07.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 8)

            {

            plik = fopen("January08.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 9)

            {

            plik = fopen("January09.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 10)

            {

            plik = fopen("January10.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 11)

            {

            plik = fopen("January11.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 12)

            {

            plik = fopen("January12.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 13)

            {

            plik = fopen("January13.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 14)

            {

            plik = fopen("January14.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 15)

            {

            plik = fopen("January15.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 16)

            {

            plik = fopen("January16.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 17)

            {

            plik = fopen("January17.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 18)

            {

            plik = fopen("January18.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 19)

            {

            plik = fopen("January19.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 20)

            {

            plik = fopen("January20.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 21)

            {

            plik = fopen("January21.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 22)

            {

            plik = fopen("January22.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 23)

            {

            plik = fopen("January23.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 24)

            {

            plik = fopen("January24.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 25)

            {

            plik = fopen("January25.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 26)

            {

            plik = fopen("January26.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 27)

            {

            plik = fopen("January27.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 28)

            {

            plik = fopen("January28.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 29)

            {

            plik = fopen("January29.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 30)

            {

            plik = fopen("January30.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 31)

            {

            plik = fopen("January31.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }




        break;

        case 2:


        puts("");
        printf("|---------------------------|\n");
        printf("|          February         |\n");
        printf("|---------------------------|\n");
        printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
        printf("| 8 | 9 | 10| 11| 12| 13| 14|\n");
        printf("| 15| 16| 17| 18| 19| 20| 21|\n");
        printf("| 22| 23| 24| 25| 26| 27| 28|\n");
        printf("|---------------------------|\n");

        puts("");
        printf("Enter the day you want to add a note: \n");
        scanf("%d",&data);
        puts("");


            if(data == 1)

            {

            plik = fopen("February01.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 2)

            {

            plik = fopen("February02.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 3)

            {

            plik = fopen("February03.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 4)

            {

            plik = fopen("February04.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 5)

            {

            plik = fopen("February05.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 6)

            {

            plik = fopen("February06.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 7)

            {

            plik = fopen("February07.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 8)

            {

            plik = fopen("February08.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 9)

            {

            plik = fopen("February09.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 10)

            {

            plik = fopen("February10.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 11)

            {

            plik = fopen("February11.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 12)

            {

            plik = fopen("February12.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 13)

            {

            plik = fopen("February13.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 14)

            {

            plik = fopen("February14.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 15)

            {

            plik = fopen("February15.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 16)

            {

            plik = fopen("February16.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 17)

            {

            plik = fopen("February17.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 18)

            {

            plik = fopen("February18.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 19)

            {

            plik = fopen("February19.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 20)

            {

            plik = fopen("February20.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 21)

            {

            plik = fopen("February21.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 22)

            {

            plik = fopen("February22.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 23)

            {

            plik = fopen("February23.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 24)

            {

            plik = fopen("February24.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 25)

            {

            plik = fopen("February25.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 26)

            {

            plik = fopen("February26.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 27)

            {

            plik = fopen("February27.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 28)

            {

            plik = fopen("February28.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            break;

        case 3:


        puts("");
        printf("|---------------------------|\n");
        printf("|           March           |\n");
        printf("|---------------------------|\n");
        printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
        printf("| 8 | 9 | 10| 11| 12| 13| 14|\n");
        printf("| 15| 16| 17| 18| 19| 20| 21|\n");
        printf("| 22| 23| 24| 25| 26| 27| 28|\n");
        printf("| 29| 30| 31|               |\n");
        printf("|---------------------------|\n");

        puts("");
        printf("Enter the day you want to add a note: \n");
        scanf("%d",&data);
        puts("");


            if(data == 1)

            {

            plik = fopen("March01.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 2)

            {

            plik = fopen("March02.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 3)

            {

            plik = fopen("March03.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 4)

            {

            plik = fopen("March04.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 5)

            {

            plik = fopen("March05.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 6)

            {

            plik = fopen("March06.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 7)

            {

            plik = fopen("March07.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 8)

            {

            plik = fopen("March08.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 9)

            {

            plik = fopen("March09.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 10)

            {

            plik = fopen("March10.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 11)

            {

            plik = fopen("Marzec11.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 12)

            {

            plik = fopen("March12.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 13)

            {

            plik = fopen("March13.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 14)

            {

            plik = fopen("March14.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 15)

            {

            plik = fopen("March15.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 16)

            {

            plik = fopen("March16.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 17)

            {

            plik = fopen("March17.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 18)

            {

            plik = fopen("March18.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 19)

            {

            plik = fopen("March19.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 20)

            {

            plik = fopen("March20.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 21)

            {

            plik = fopen("March21.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 22)

            {

            plik = fopen("March22.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 23)

            {

            plik = fopen("March23.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 24)

            {

            plik = fopen("March24.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 25)

            {

            plik = fopen("March25.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 26)

            {

            plik = fopen("March26.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 27)

            {

            plik = fopen("March27.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 28)

            {

            plik = fopen("March28.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 29)

            {

            plik = fopen("March29.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 30)

            {

            plik = fopen("March30.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 31)

            {

            plik = fopen("March31.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }


        break;

        case 4:


        puts("");
        printf("|---------------------------|\n");
        printf("|           April           |\n");
        printf("|---------------------------|\n");
        printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
        printf("| 8 | 9 | 10| 11| 12| 13| 14|\n");
        printf("| 15| 16| 17| 18| 19| 20| 21|\n");
        printf("| 22| 23| 24| 25| 26| 27| 28|\n");
        printf("| 29| 30|                   |\n");
        printf("|---------------------------|\n");

        puts("");
        printf("Enter the day you want to add a note: \n");
        scanf("%d",&data);
        puts("");


            if(data == 1)

            {

            plik = fopen("April01.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 2)

            {

            plik = fopen("April02.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 3)

            {

            plik = fopen("April03.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 4)

            {

            plik = fopen("April04.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 5)

            {

            plik = fopen("April05.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 6)

            {

            plik = fopen("April06.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 7)

            {

            plik = fopen("April07.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 8)

            {

            plik = fopen("April08.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 9)

            {

            plik = fopen("April09.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 10)

            {

            plik = fopen("April10.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 11)

            {

            plik = fopen("April11.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 12)

            {

            plik = fopen("April12.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 13)

            {

            plik = fopen("April13.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 14)

            {

            plik = fopen("April14.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 15)

            {

            plik = fopen("April15.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 16)

            {

            plik = fopen("April16.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 17)

            {

            plik = fopen("April17.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 18)

            {

            plik = fopen("April18.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 19)

            {

            plik = fopen("April19.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 20)

            {

            plik = fopen("April20.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 21)

            {

            plik = fopen("April21.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 22)

            {

            plik = fopen("April22.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 23)

            {

            plik = fopen("April23.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 24)

            {

            plik = fopen("April24.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 25)

            {

            plik = fopen("April25.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 26)

            {

            plik = fopen("April26.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 27)

            {

            plik = fopen("April27.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 28)

            {

            plik = fopen("April28.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 29)

            {

            plik = fopen("April29.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 30)

            {

            plik = fopen("April30.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }




        break;

        case 5:


        puts("");
        printf("|---------------------------|\n");
        printf("|            May            |\n");
        printf("|---------------------------|\n");
        printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
        printf("| 8 | 9 | 10| 11| 12| 13| 14|\n");
        printf("| 15| 16| 17| 18| 19| 20| 21|\n");
        printf("| 22| 23| 24| 25| 26| 27| 28|\n");
        printf("| 29| 30| 31|               |\n");
        printf("|---------------------------|\n");

        puts("");
        printf("Enter the day you want to add a note: \n");
        scanf("%d",&data);
        puts("");


            if(data == 1)

            {

            plik = fopen("May01.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 2)

            {

            plik = fopen("May02.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 3)

            {

            plik = fopen("May03.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 4)

            {

            plik = fopen("May04.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 5)

            {

            plik = fopen("May05.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 6)

            {

            plik = fopen("May06.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 7)

            {

            plik = fopen("May07.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 8)

            {

            plik = fopen("May08.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 9)

            {

            plik = fopen("May09.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 10)

            {

            plik = fopen("May10.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 11)

            {

            plik = fopen("May11.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 12)

            {

            plik = fopen("May12.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 13)

            {

            plik = fopen("May13.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 14)

            {

            plik = fopen("May14.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 15)

            {

            plik = fopen("May15.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 16)

            {

            plik = fopen("May16.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 17)

            {

            plik = fopen("May17.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 18)

            {

            plik = fopen("May18.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 19)

            {

            plik = fopen("May19.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 20)

            {

            plik = fopen("May20.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 21)

            {

            plik = fopen("May21.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 22)

            {

            plik = fopen("May22.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 23)

            {

            plik = fopen("May23.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 24)

            {

            plik = fopen("May24.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 25)

            {

            plik = fopen("May25.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 26)

            {

            plik = fopen("May26.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 27)

            {

            plik = fopen("May27.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 28)

            {

            plik = fopen("May28.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 29)

            {

            plik = fopen("May29.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 30)

            {

            plik = fopen("May30.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 31)

            {

            plik = fopen("May31.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }




        break;

        case 6:


        puts("");
        printf("|---------------------------|\n");
        printf("|            June           |\n");
        printf("|---------------------------|\n");
        printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
        printf("| 8 | 9 | 10| 11| 12| 13| 14|\n");
        printf("| 15| 16| 17| 18| 19| 20| 21|\n");
        printf("| 22| 23| 24| 25| 26| 27| 28|\n");
        printf("| 29| 30| 31|               |\n");
        printf("|---------------------------|\n");

        puts("");
        printf("Enter the day you want to add a note: \n");
        scanf("%d",&data);
        puts("");


            if(data == 1)

            {

            plik = fopen("June01.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 2)

            {

            plik = fopen("June02.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 3)

            {

            plik = fopen("June03.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 4)

            {

            plik = fopen("June04.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 5)

            {

            plik = fopen("June05.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 6)

            {

            plik = fopen("June06.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 7)

            {

            plik = fopen("June07.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 8)

            {

            plik = fopen("June08.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 9)

            {

            plik = fopen("June09.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 10)

            {

            plik = fopen("June10.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 11)

            {

            plik = fopen("June11.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 12)

            {

            plik = fopen("June12.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 13)

            {

            plik = fopen("June13.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 14)

            {

            plik = fopen("June14.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 15)

            {

            plik = fopen("June15.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 16)

            {

            plik = fopen("June16.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 17)

            {

            plik = fopen("June17.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 18)

            {

            plik = fopen("June18.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 19)

            {

            plik = fopen("June19.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 20)

            {

            plik = fopen("June20.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 21)

            {

            plik = fopen("June21.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 22)

            {

            plik = fopen("June22.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 23)

            {

            plik = fopen("June23.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 24)

            {

            plik = fopen("June24.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 25)

            {

            plik = fopen("June25.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 26)

            {

            plik = fopen("June26.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 27)

            {

            plik = fopen("June27.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 28)

            {

            plik = fopen("June28.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 29)

            {

            plik = fopen("June29.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 30)

            {

            plik = fopen("June30.txt","w");

            printf("Enter a note\n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 31)

            {

            plik = fopen("June31.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }




        break;

        case 7:


        puts("");
        printf("|---------------------------|\n");
        printf("|            July           |\n");
        printf("|---------------------------|\n");
        printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
        printf("| 8 | 9 | 10| 11| 12| 13| 14|\n");
        printf("| 15| 16| 17| 18| 19| 20| 21|\n");
        printf("| 22| 23| 24| 25| 26| 27| 28|\n");
        printf("| 29| 30| 31|               |\n");
        printf("|---------------------------|\n");

        puts("");
        printf("Enter the day you want to add a note: \n");
        scanf("%d",&data);
        puts("");


            if(data == 1)

            {

            plik = fopen("July01.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 2)

            {

            plik = fopen("July02.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 3)

            {

            plik = fopen("July03.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 4)

            {

            plik = fopen("July04.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 5)

            {

            plik = fopen("July05.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 6)

            {

            plik = fopen("July06.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 7)

            {

            plik = fopen("July07.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 8)

            {

            plik = fopen("July08.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 9)

            {

            plik = fopen("July09.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 10)

            {

            plik = fopen("July10.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 11)

            {

            plik = fopen("July11.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 12)

            {

            plik = fopen("July12.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 13)

            {

            plik = fopen("July13.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 14)

            {

            plik = fopen("July14.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 15)

            {

            plik = fopen("July15.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 16)

            {

            plik = fopen("July16.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 17)

            {

            plik = fopen("July17.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 18)

            {

            plik = fopen("July18.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 19)

            {

            plik = fopen("July19.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 20)

            {

            plik = fopen("July20.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 21)

            {

            plik = fopen("July21.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 22)

            {

            plik = fopen("July22.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 23)

            {

            plik = fopen("July23.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 24)

            {

            plik = fopen("July24.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 25)

            {

            plik = fopen("July25.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 26)

            {

            plik = fopen("July26.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 27)

            {

            plik = fopen("July27.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 28)

            {

            plik = fopen("July28.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 29)

            {

            plik = fopen("July29.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 30)

            {

            plik = fopen("July30.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 31)

            {

            plik = fopen("July31.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }




        break;

        case 8:


        puts("");
        printf("|---------------------------|\n");
        printf("|           August          |\n");
        printf("|---------------------------|\n");
        printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
        printf("| 8 | 9 | 10| 11| 12| 13| 14|\n");
        printf("| 15| 16| 17| 18| 19| 20| 21|\n");
        printf("| 22| 23| 24| 25| 26| 27| 28|\n");
        printf("| 29| 30| 31|               |\n");
        printf("|---------------------------|\n");

        puts("");
        printf("Enter the day you want to add a note: \n");
        scanf("%d",&data);
        puts("");


            if(data == 1)

            {

            plik = fopen("August01.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 2)

            {

            plik = fopen("August02.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 3)

            {

            plik = fopen("August03.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 4)

            {

            plik = fopen("August04.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 5)

            {

            plik = fopen("August05.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 6)

            {

            plik = fopen("August06.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 7)

            {

            plik = fopen("August07.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 8)

            {

            plik = fopen("August08.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 9)

            {

            plik = fopen("August09.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 10)

            {

            plik = fopen("August10.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 11)

            {

            plik = fopen("August11.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 12)

            {

            plik = fopen("August12.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 13)

            {

            plik = fopen("August13.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 14)

            {

            plik = fopen("August14.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 15)

            {

            plik = fopen("August15.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 16)

            {

            plik = fopen("August16.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 17)

            {

            plik = fopen("August17.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 18)

            {

            plik = fopen("August18.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 19)

            {

            plik = fopen("August19.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 20)

            {

            plik = fopen("August20.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 21)

            {

            plik = fopen("August21.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 22)

            {

            plik = fopen("August22.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 23)

            {

            plik = fopen("August23.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 24)

            {

            plik = fopen("August24.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 25)

            {

            plik = fopen("August25.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 26)

            {

            plik = fopen("August26.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 27)

            {

            plik = fopen("August27.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 28)

            {

            plik = fopen("August28.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 29)

            {

            plik = fopen("August29.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 30)

            {

            plik = fopen("August30.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 31)

            {

            plik = fopen("August31.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

        break;

        case 9:


        puts("");
        printf("|---------------------------|\n");
        printf("|         September         |\n");
        printf("|---------------------------|\n");
        printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
        printf("| 8 | 9 | 10| 11| 12| 13| 14|\n");
        printf("| 15| 16| 17| 18| 19| 20| 21|\n");
        printf("| 22| 23| 24| 25| 26| 27| 28|\n");
        printf("| 29| 30|                   |\n");
        printf("|---------------------------|\n");

        puts("");
        printf("Enter the day you want to add a note: \n");
        scanf("%d",&data);
        puts("");


            if(data == 1)

            {

            plik = fopen("September01.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 2)

            {

            plik = fopen("September02.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 3)

            {

            plik = fopen("September03.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 4)

            {

            plik = fopen("September04.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 5)

            {

            plik = fopen("September05.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 6)

            {

            plik = fopen("September06.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 7)

            {

            plik = fopen("September07.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 8)

            {

            plik = fopen("September08.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 9)

            {

            plik = fopen("September09.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 10)

            {

            plik = fopen("September10.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 11)

            {

            plik = fopen("September11.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 12)

            {

            plik = fopen("September12.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 13)

            {

            plik = fopen("September13.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 14)

            {

            plik = fopen("September14.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 15)

            {

            plik = fopen("September15.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 16)

            {

            plik = fopen("September16.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 17)

            {

            plik = fopen("September17.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 18)

            {

            plik = fopen("September18.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 19)

            {

            plik = fopen("September19.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 20)

            {

            plik = fopen("September20.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 21)

            {

            plik = fopen("September21.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 22)

            {

            plik = fopen("September22.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 23)

            {

            plik = fopen("September23.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 24)

            {

            plik = fopen("September24.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 25)

            {

            plik = fopen("September25.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 26)

            {

            plik = fopen("September26.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 27)

            {

            plik = fopen("September27.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 28)

            {

            plik = fopen("September28.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 29)

            {

            plik = fopen("September29.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 30)

            {

            plik = fopen("September30.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

        case 10:


        puts("");
        printf("|---------------------------|\n");
        printf("|          October          |\n");
        printf("|---------------------------|\n");
        printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
        printf("| 8 | 9 | 10| 11| 12| 13| 14|\n");
        printf("| 15| 16| 17| 18| 19| 20| 21|\n");
        printf("| 22| 23| 24| 25| 26| 27| 28|\n");
        printf("| 29| 30| 31|               |\n");
        printf("|---------------------------|\n");

        puts("");
        printf("Enter the day you want to add a note: \n");
        scanf("%d",&data);
        puts("");


            if(data == 1)

            {

            plik = fopen("October01.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 2)

            {

            plik = fopen("October02.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 3)

            {

            plik = fopen("October03.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 4)

            {

            plik = fopen("October04.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 5)

            {

            plik = fopen("October05.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 6)

            {

            plik = fopen("October06.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 7)

            {

            plik = fopen("October07.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 8)

            {

            plik = fopen("October08.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 9)

            {

            plik = fopen("October09.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 10)

            {

            plik = fopen("October10.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 11)

            {

            plik = fopen("October11.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 12)

            {

            plik = fopen("October12.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 13)

            {

            plik = fopen("October13.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 14)

            {

            plik = fopen("October14.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 15)

            {

            plik = fopen("October15.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 16)

            {

            plik = fopen("October16.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 17)

            {

            plik = fopen("October17.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 18)

            {

            plik = fopen("October18.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 19)

            {

            plik = fopen("October19.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 20)

            {

            plik = fopen("October20.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 21)

            {

            plik = fopen("October21.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 22)

            {

            plik = fopen("October22.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 23)

            {

            plik = fopen("October23.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 24)

            {

            plik = fopen("October24.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 25)

            {

            plik = fopen("October25.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 26)

            {

            plik = fopen("October26.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 27)

            {

            plik = fopen("October27.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 28)

            {

            plik = fopen("October28.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 29)

            {

            plik = fopen("October29.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 30)

            {

            plik = fopen("October30.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 31)

            {

            plik = fopen("October31.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }


        break;

        case 11:


        puts("");
        printf("|---------------------------|\n");
        printf("|          November         |\n");
        printf("|---------------------------|\n");
        printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
        printf("| 8 | 9 | 10| 11| 12| 13| 14|\n");
        printf("| 15| 16| 17| 18| 19| 20| 21|\n");
        printf("| 22| 23| 24| 25| 26| 27| 28|\n");
        printf("| 29| 30|                   |\n");
        printf("|---------------------------|\n");

        puts("");
        printf("Enter the day you want to add a note: \n");
        scanf("%d",&data);
        puts("");


            if(data == 1)

            {

            plik = fopen("November01.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 2)

            {

            plik = fopen("November02.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 3)

            {

            plik = fopen("November03.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 4)

            {

            plik = fopen("November04.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 5)

            {

            plik = fopen("November05.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 6)

            {

            plik = fopen("November06.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 7)

            {

            plik = fopen("November07.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 8)

            {

            plik = fopen("November08.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 9)

            {

            plik = fopen("November09.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 10)

            {

            plik = fopen("November10.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 11)

            {

            plik = fopen("November11.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 12)

            {

            plik = fopen("November12.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 13)

            {

            plik = fopen("November13.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 14)

            {

            plik = fopen("November14.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 15)

            {

            plik = fopen("November15.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 16)

            {

            plik = fopen("November16.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 17)

            {

            plik = fopen("November17.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 18)

            {

            plik = fopen("November18.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 19)

            {

            plik = fopen("November19.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 20)

            {

            plik = fopen("November20.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 21)

            {

            plik = fopen("November21.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 22)

            {

            plik = fopen("November22.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 23)

            {

            plik = fopen("November23.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 24)

            {

            plik = fopen("November24.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 25)

            {

            plik = fopen("November25.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 26)

            {

            plik = fopen("November26.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 27)

            {

            plik = fopen("November27.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 28)

            {

            plik = fopen("November28.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 29)

            {

            plik = fopen("November29.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 30)

            {

            plik = fopen("November30.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }




        break;

        case 12:


        puts("");
        printf("|---------------------------|\n");
        printf("|          December         |\n");
        printf("|---------------------------|\n");
        printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
        printf("| 8 | 9 | 10| 11| 12| 13| 14|\n");
        printf("| 15| 16| 17| 18| 19| 20| 21|\n");
        printf("| 22| 23| 24| 25| 26| 27| 28|\n");
        printf("| 29| 30| 31|               |\n");
        printf("|---------------------------|\n");

        puts("");
        printf("Enter the day you want to add a note: \n");
        scanf("%d",&data);
        puts("");


            if(data == 1)

            {

            plik = fopen("December01.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 2)

            {

            plik = fopen("December02.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 3)

            {

            plik = fopen("December03.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 4)

            {

            plik = fopen("December04.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 5)

            {

            plik = fopen("December05.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 6)

            {

            plik = fopen("December06.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 7)

            {

            plik = fopen("December07.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 8)

            {

            plik = fopen("December08.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 9)

            {

            plik = fopen("December09.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 10)

            {

            plik = fopen("December10.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 11)

            {

            plik = fopen("December11.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 12)

            {

            plik = fopen("December12.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 13)

            {

            plik = fopen("December13.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 14)

            {

            plik = fopen("December14.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 15)

            {

            plik = fopen("December15.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 16)

            {

            plik = fopen("December16.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 17)

            {

            plik = fopen("December17.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 18)

            {

            plik = fopen("December18.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 19)

            {

            plik = fopen("December19.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 20)

            {

            plik = fopen("December20.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 21)

            {

            plik = fopen("December21.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 22)

            {

            plik = fopen("December22.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 23)

            {

            plik = fopen("December23.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 24)

            {

            plik = fopen("December24.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 25)

            {

            plik = fopen("December25.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 26)

            {

            plik = fopen("December26.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 27)

            {

            plik = fopen("December27.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 28)

            {

            plik = fopen("December28.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 29)

            {

            plik = fopen("December29.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 30)

            {

            plik = fopen("December30.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }

            if(data == 31)

            {

            plik = fopen("December31.txt","w");

            printf("Enter a note \n");
            scanf("%s",&notatka);
            fprintf(plik,"%s",notatka);

            fclose(plik);

            }




        break;


    }

    }

        if(r == 2)
        {

        printf("List of all notes: \n\n");

        struct _finddata_t txt_file;
        intptr_t eFile;

        if( (eFile = _findfirst( "*.txt", &txt_file )) == -1L )
        printf( "No notes\n" );
        else


        do {
        char buffer[30];

        ctime_s( buffer, _countof(buffer), &txt_file.time_write );
        printf( "%s, ",txt_file.name );

        } while( _findnext( eFile, &txt_file ) == 0 );
        _findclose( eFile );

        puts("");
        printf("Enter the name of the note you want to delete:\n");
        scanf("%s",&ZadanieDoUsuniecia);

        remove(ZadanieDoUsuniecia);

        }

        if(r == 3)
        {

        printf("List all all files enter which file you want to see content: \n\n");

        struct _finddata_t c_file;
        intptr_t hFile;

        if( (hFile = _findfirst( "*.txt", &c_file )) == -1L )
        printf( "No notes\n" );
        else


        do {
        char buffer[30];

        ctime_s( buffer, _countof(buffer), &c_file.time_write );
        printf( "%s, ",c_file.name );

        } while( _findnext( hFile, &c_file ) == 0 );
        _findclose( hFile );

        puts("");
        printf("Enter the name of the file: \n");
        scanf("%s",&NazwaPliku);

        plik = fopen(NazwaPliku,"r");

        puts("");
        while(fgets(InformacjeZPliku,200,plik))
        {
        printf("%s",InformacjeZPliku);
        }

        fclose(plik);

        }

        if(r == 4)
        {
            return 0;
        }

    return 0;
}
