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


// V3
printf("*** Start of Tokenizing Sentences Demo ***\n");//DISPLAY THE FOLLOWING AS THE OUTPUT
char  sentences[BUFFER_SIZE];                          //INITIALIZING THE GIVEN ARRAY
char* nextSentence = NULL;                             //INITIALIZING THE GIVEN VARIABLE TO NULL
int   sentencesCounter;                                //INITIALIZING THE GIVEN VARIABLE AS INTEGER
do {
    printf("Type a few sentences seperated by dot(q - to quit):\n");//DISPLAY THE FOLLOWING AS THE OUTPUT
    fgets(sentences, BUFFER_SIZE, stdin);                           //USE THE FGETS TO RECIEVE THE CHARACTERS FROM THE FILE
    sentences[strlen(sentences) - 1] = '\0';                        //INITIALIZE THE PHRASES TO '\0'
    if ((strcmp(sentences, "q") != 0))                              //CHECK THE CONDITION IF ITS NOT EQUAL TO 0
    {
        nextSentence = strtok(sentences, ".");                      //INITIALIZE THE nextPhrase Variable
        sentenceCounter = 1;                                        //INITIALIZE THE VARIABLE TO 1
        while (nextSentence) {
            printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);  // PRINTING OUT THE STATEMENT AND INCREASING THE COUNTER
            nextSentence = strtok(NULL, ".");                                      //INITIALIZING THE VARIABLE nextPhrase
        }
    }
}while (strcmp(sentences, "q") != 0);                  //RUNNING THE LOOP WITH THIS CONDITION
printf("*** End of Tokenizing Sentences Demo ***\n\n");//DISPLAY THE FOLLOWING AS THE OUTPUT
