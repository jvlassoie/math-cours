typedef enum { false, true } bool;
bool checkLetterOrSpace( char *mot );
bool checkLetterOrZero( char *mot );
void stringToUppercase( char *mot );
void drainBuffer();
int scanner(char *string, int taille);
void Encrypt1(char *mot, long int *key);
void Encrypt2(char *mot, long int *key);
bool AuthKeyEight(char *key);
void intro(char *exo);
void Decrypt2(char *mot, long int *key);