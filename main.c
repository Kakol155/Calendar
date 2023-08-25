#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#include <time.h>

    int i;
    int e = 7;
    int r = 14;
    int w = 21;
    int u = 28;
    int y;
    int loop = 0;

    char DaysOfTheWeek[7][20] = { {"  Monday  "}, {"  Tuesday  "}, {"  Wednesday  "}, {"  Thursday  "}, {"  Friday  "}, {"  Saturday  "}, {"  Sunday  "} };
    char Day[31][40] = { {"    1     "}, {"    2      "}, {"     3       "}, {"     4      "}, {"    5     "}, {"     6      "}, {"     7    "}, {"    8     "}, {"    9      "}, {"     10      "}, {"     11     "}, {"    12    "}, {"     13     "}, {"     14   "}, {"    15    "}, {"    16     "}, {"     17      "}, {"     18     "}, {"    19    "}, {"     20     "}, {"     21   "}, {"    22     "}, {"   23     "}, {"     24      "}, {"     25     "}, {"    26    "}, {"     27     "}, {"     28   "}, {"    29    "}, {"    30     "}, {"     31      "} };
    char Month[12][20] = { {"January"}, {"February"}, {"March"}, {"April"}, {"May"}, {"June"}, {"July"}, {"August"}, {"September"}, {"October"}, {"November"}, {"December"} };

void CreateMonth31Day()
{
    for(y; y < 7; y++)
    {
        printf("%s",DaysOfTheWeek[y]);
    }
    puts("");

    for(i; i < 7; i++)
    {
        printf("%s",Day[i]);
    }
    puts("");

    for(e; e < 14; e++)
    {
        printf("%s",Day[e]);
    }
    puts("");

    for(r; r < 21; r++)
    {
        printf("%s",Day[r]);
    }
    puts("");

    for(w; w < 28; w++)
    {
        printf("%s",Day[w]);
    }
    puts("");

    for(u; u < 31; u++)
    {
        printf("%s",Day[u]);
    }
}

void CreateMonth28Day()
{
    for(y; y < 7; y++)
    {
        printf("%s",DaysOfTheWeek[y]);
    }
    puts("");

    for(i; i < 7; i++)
    {
        printf("%s",Day[i]);
    }
    puts("");

    for(e; e < 14; e++)
    {
        printf("%s",Day[e]);
    }
    puts("");

    for(r; r < 21; r++)
    {
        printf("%s",Day[r]);
    }
    puts("");

    for(w; w < 28; w++)
    {
        printf("%s",Day[w]);
    }
    puts("");
}

void CreateMonth30Day()
{
    for(y; y < 7; y++)
    {
        printf("%s",DaysOfTheWeek[y]);
    }
    puts("");

    for(i; i < 7; i++)
    {
        printf("%s",Day[i]);
    }
    puts("");

    for(e; e < 14; e++)
    {
        printf("%s",Day[e]);
    }
    puts("");

    for(r; r < 21; r++)
    {
        printf("%s",Day[r]);
    }
    puts("");

    for(w; w < 28; w++)
    {
        printf("%s",Day[w]);
    }
    puts("");

    for(u; u < 30; u++)
    {
        printf("%s",Day[u]);
    }
}

int main()
{

    int number;
    char DayNotate[10];
    char result[100];
    char NotateText[200];
    char NotateDelete[100];
    char NameFile[100];
    char InformationFile[200];
    char txt[20] = ".txt";
    int DayNoteInt;

    int q;

    FILE *file;

    for(loop; loop < 1000; loop++)
    {


    puts("");
    puts("");
    printf("|----------------------------------------|\n");
    printf("|1.Add a note                            |\n");
    printf("|2.Delete the note                       |\n");
    printf("|3.View the content of the selected note |\n");
    printf("|4.Exit                                  |\n");
    printf("|----------------------------------------|\n");
    puts("");
    puts("");

    printf("Enter number \n");
    scanf("%d",&q);

    if(q == 1)
    {

    printf("Enter the month in which you want to add a note: \n\n");
    printf("1:January, 2:February, 3:March, 4:April, 5:May, 6:June\n");
    printf("7:July, 8:August, 9:September, 10:October, 11:November, 12:December \n");
    puts("");

    scanf("%d",&number);

    if(number == 1)
    {
        puts("");
        printf("                                    %s        \n",Month[0]);
        puts("");
        CreateMonth31Day();
        printf("\n\n\n");
        printf("Enter the day you want to add a note: \n");
        scanf("%s",&DayNotate);

        DayNoteInt = atof(DayNotate);

        if(DayNoteInt > 31 || DayNoteInt <= 0)
        {
            printf("There is no such day \n");
            return;
        }


        else
        {

        strcpy(result,Month[0]);
        strcat(result,"");
        strcat(result,DayNotate);
        strcat(result,txt);

        file = fopen(result,"w");

        printf("Enter the note: \n");
        scanf("%s",&NotateText);
        fprintf(file,"%s",NotateText);

        fclose(file);

        }

    }

    if(number == 2)
    {
        puts("");
        printf("                                    %s        \n",Month[1]);
        puts("");
        CreateMonth28Day();
        printf("\n\n\n");
        printf("Enter the day you want to add a note: \n");
        scanf("%s",&DayNotate);

        DayNoteInt = atof(DayNotate);

        if(DayNoteInt > 28 || DayNoteInt <= 0)
        {
            printf("Nie ma takiego dnia \n");
            return;
        }

        else
        {

        strcpy(result,Month[1]);
        strcat(result,"");
        strcat(result,DayNotate);
        strcat(result,txt);

        file = fopen(result,"w");

        printf("Enter the note: \n");
        scanf("%s",&NotateText);
        fprintf(file,"%s",NotateText);

        fclose(file);

        }
    }

    if(number == 3)
    {
        puts("");
        printf("                                     %s        \n",Month[2]);
        puts("");
        CreateMonth31Day();
        printf("\n\n\n");
        printf("Enter the day you want to add a note: \n");
        scanf("%s",&DayNotate);

        DayNoteInt = atof(DayNotate);

        if(DayNoteInt > 31 || DayNoteInt <= 0)
        {
            printf("There is no such day \n");
            return;
        }

        else
        {

        strcpy(result,Month[2]);
        strcat(result,"");
        strcat(result,DayNotate);
        strcat(result,txt);

        file = fopen(result,"w");

        printf("Enter the note: \n");
        scanf("%s",&NotateText);
        fprintf(file,"%s",NotateText);

        fclose(file);

        }
    }

    if(number == 4)
    {
        puts("");
        printf("                                     %s        \n",Month[3]);
        puts("");
        CreateMonth30Day();
        printf("\n\n\n");
        printf("Enter the day you want to add a note: \n");
        scanf("%s",&DayNotate);

        DayNoteInt = atof(DayNotate);

        if(DayNoteInt > 30 || DayNoteInt <= 0)
        {
            printf("There is no such day \n");
            return;
        }

        else
        {

        strcpy(result,Month[3]);
        strcat(result,"");
        strcat(result,DayNotate);
        strcat(result,txt);

        file = fopen(result,"w");

        printf("Enter the note: \n");
        scanf("%s",&NotateText);
        fprintf(file,"%s",NotateText);

        fclose(file);

        }
    }

    if(number == 5)
    {
        puts("");
        printf("                                      %s        \n",Month[4]);
        puts("");
        CreateMonth31Day();
        printf("\n\n\n");
        printf("Enter the day you want to add a note: \n");
        scanf("%s",&DayNotate);

        DayNoteInt = atof(DayNotate);

        if(DayNoteInt > 31 || DayNoteInt <= 0)
        {
            printf("There is no such day \n");
            return;
        }

        else
        {

        strcpy(result,Month[4]);
        strcat(result,"");
        strcat(result,DayNotate);
        strcat(result,txt);

        file = fopen(result,"w");

        printf("Enter the note: \n");
        scanf("%s",&NotateText);
        fprintf(file,"%s",NotateText);

        fclose(file);

        }
    }

    if(number == 6)
    {
        puts("");
        printf("                                      %s        \n",Month[5]);
        puts("");
        CreateMonth30Day();
        printf("\n\n\n");
        printf("Enter the day you want to add a note: \n");
        scanf("%s",&DayNotate);

        DayNoteInt = atof(DayNotate);

        if(DayNoteInt > 30 || DayNoteInt <= 0)
        {
            printf("There is no such day \n");
            return;
        }

        else
        {

        strcpy(result,Month[5]);
        strcat(result,"");
        strcat(result,DayNotate);
        strcat(result,txt);

        file = fopen(result,"w");

        printf("Enter the note: \n");
        scanf("%s",&NotateText);
        fprintf(file,"%s",NotateText);

        fclose(file);

        }
    }

    if(number == 7)
    {
        puts("");
        printf("                                      %s        \n",Month[6]);
        puts("");
        CreateMonth31Day();
        printf("\n\n\n");
        printf("Enter the day you want to add a note: \n");
        scanf("%s",&DayNotate);

        DayNoteInt = atof(DayNotate);

        if(DayNoteInt > 31 || DayNoteInt <= 0)
        {
            printf("There is no such day \n");
            return;
        }

        else
        {

        strcpy(result,Month[6]);
        strcat(result,"");
        strcat(result,DayNotate);
        strcat(result,txt);

        file = fopen(result,"w");

        printf("Enter the note: \n");
        scanf("%s",&NotateText);
        fprintf(file,"%s",NotateText);

        fclose(file);

        }
    }

    if(number == 8)
    {
        puts("");
        printf("                                     %s        \n",Month[7]);
        puts("");
        CreateMonth31Day();
        printf("\n\n\n");
        printf("Enter the day you want to add a note: \n");
        scanf("%s",&DayNotate);

        DayNoteInt = atof(DayNotate);

        if(DayNoteInt > 31 || DayNoteInt <= 0)
        {
            printf("There is no such day \n");
            return;
        }

        else
        {

        strcpy(result,Month[7]);
        strcat(result,"");
        strcat(result,DayNotate);
        strcat(result,txt);

        file = fopen(result,"w");

        printf("Enter the note: \n");
        scanf("%s",&NotateText);
        fprintf(file,"%s",NotateText);

        fclose(file);

        }
    }

    if(number == 9)
    {
        puts("");
        printf("                                    %s        \n",Month[8]);
        puts("");
        CreateMonth30Day();
        printf("\n\n\n");
        printf("Enter the day you want to add a note: \n");
        scanf("%s",&DayNotate);

        DayNoteInt = atof(DayNotate);

        if(DayNoteInt > 30 || DayNoteInt <= 0)
        {
            printf("There is no such day \n");
            return;
        }

        else
        {

        strcpy(result,Month[8]);
        strcat(result,"");
        strcat(result,DayNotate);
        strcat(result,txt);

        file = fopen(result,"w");

        printf("Enter the note: \n");
        scanf("%s",&NotateText);
        fprintf(file,"%s",NotateText);

        fclose(file);

        }
    }

    if(number == 10)
    {
        puts("");
        printf("                                    %s        \n",Month[9]);
        puts("");
        CreateMonth31Day();
        printf("\n\n\n");
        printf("Enter the day you want to add a note: \n");
        scanf("%s",&DayNotate);

        DayNoteInt = atof(DayNotate);

        if(DayNoteInt > 31 || DayNoteInt <= 0)
        {
            printf("There is no such day \n");
            return;
        }

        else
        {

        strcpy(result,Month[9]);
        strcat(result,"");
        strcat(result,DayNotate);
        strcat(result,txt);

        file = fopen(result,"w");

        printf("Enter the note: \n");
        scanf("%s",&NotateText);
        fprintf(file,"%s",NotateText);

        fclose(file);

        }
    }

    if(number == 11)
    {
        puts("");
        printf("                                    %s        \n",Month[10]);
        puts("");
        CreateMonth30Day();
        printf("\n\n\n");
        printf("Enter the day you want to add a note: \n");
        scanf("%s",&DayNotate);

        DayNoteInt = atof(DayNotate);

        if(DayNoteInt > 30 || DayNoteInt <= 0)
        {
            printf("There is no such day \n");
            return;
        }

        else
        {

        strcpy(result,Month[10]);
        strcat(result,"");
        strcat(result,DayNotate);
        strcat(result,txt);

        file = fopen(result,"w");

        printf("Enter the note: \n");
        scanf("%s",&NotateText);
        fprintf(file,"%s",NotateText);

        fclose(file);

        }
    }

    if(number == 12)
    {
        puts("");
        printf("                                    %s        \n",Month[11]);
        puts("");
        CreateMonth31Day();
        printf("\n\n\n");
        printf("Enter the day you want to add a note: \n");
        scanf("%s",&DayNotate);

        DayNoteInt = atof(DayNotate);

        if(DayNoteInt > 31 || DayNoteInt <= 0)
        {
            printf("There is no such day \n");
            return;
        }

        else
        {

        strcpy(result,Month[11]);
        strcat(result,"");
        strcat(result,DayNotate);
        strcat(result,txt);

        file = fopen(result,"w");

        printf("Enter the note: \n");
        scanf("%s",&NotateText);
        fprintf(file,"%s",NotateText);

        fclose(file);

        }
    }

    }

    if(q == 2)
    {


        printf("List of all notes: \n\n");

        struct _finddata_t txt_file;
        intptr_t eFile;

        if( (eFile = _findfirst( "*.txt", &txt_file )) == -1L )
        {
            printf( "No notes\n" );
        }

        else
        {

        do {
        char buffer[30];

        ctime_s( buffer, _countof(buffer), &txt_file.time_write );
        printf( "%s, ",txt_file.name );

        } while( _findnext( eFile, &txt_file ) == 0 );
        _findclose( eFile );

        printf("\n\n\n");
        printf("Enter the name of the note you want to delete:\n");
        scanf("%s",&NotateDelete);

        remove(NotateDelete);

        }

    }

    if(q == 3)
    {
        printf("List of all files. Enter the file whose content you want to see: \n\n");

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

        printf("\n\n\n");
        printf("Enter the name of the file: \n");
        scanf("%s",&NameFile);

        file = fopen(NameFile,"r");

        puts("");
        while(fgets(InformationFile,200,file))
        {
        printf("%s",InformationFile);
        }

        fclose(file);

    }

    if(q == 4)
    {
        printf("You have left the program \n");
        return 0;
    }

    }

}
