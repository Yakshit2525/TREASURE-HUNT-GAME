// V2
printf("*** start of Tokenizing Phrases Demo ***\n"); //PRINTS THE DISPLAYED CONTENT
char phrases[BUFFER_SIZE];  //INITIALIZING THE GIVEN ARRAY
char *nextPhrase = NULL;    //INITIALIZING THE GIVEN VARIABLE TO NULL
int phrasesCounter;         //INITIALIZING THE GIVEN VARIABLE AS INTEGER
do                          //STARTING THE LOOP
{
    printf("Type a few phrases separated by comma (g - to quit) :\n"); //DISPLAY THE FOLLOWING AS THE OUTPUT
    fgets(phrases, BUFFER_SIZE, stdin); //USE THE FGETS TO RECIEVE THE CHARACTERS FROM THE FILE
    phrases[strlen(phrases) - 1] = '\0'; //INITIALIZE THE PHRASES TO '\0'
    if ((strcmp(phrases, "q") != 0)) //CHECK THE CONDITION IF ITS NOT EQUAL TO 0
    {
        nextPhrase = strtok(phrases, ","); //INITIALIZE THE nextPhrase Variable
        phrasesCounter = 1; //INITIALIZE THE VARIABLE TO 1
        while (nextPhrase)  // RUNNING THE LOOP ONLY IF THE CONDITION IS MET 
        {
            printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase); // PRINTING OUT THE STATEMENT AND INCREASING THE COUNTER 
            nextPhrase = strtok(NULL, ","); //INITIALIZING THE VARIABLE nextPhrase
        }
    }
} while (strcmp(phrases, "q") != 0);   //RUNNING THE LOOP WITH THIS CONDITION
printf("**** End of Tokenizing Phrases Demo ***\n\n");//DISPLAY THE FOLLOWING AS THE OUTPUT
