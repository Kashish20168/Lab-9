#include <stdio.h>
#include <string.h>

int areAnagrams(char str1[], char str2[]);

int main() {
    char word1[50], word2[50];

    printf("Enter first word: ");
    scanf("%s", word1);

    printf("Enter second word: ");
    scanf("%s", word2);

    if (areAnagrams(word1, word2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
}

int areAnagrams(char str1[], char str2[]) {
    int count1[26] = {0};
    int count2[26] = {0};
    int i;

    if (strlen(str1) != strlen(str2))
        return 0;

 
    for (i = 0; str1[i] != '\0'; i++) {
        count1[str1[i] - 'a']++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        count2[str2[i] - 'a']++;
    }

   
    for (i = 0; i < 26; i++) {
        if (count1[i] != count2[i])
            return 0;
    }

    return 1;
}
