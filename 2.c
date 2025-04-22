#include <stdio.h>

int main() {
    char text[] = "the t sat on e mat";
    int textLength = 0;

    // Считаем длину строки
    while (text[textLength] != '\0') {
        textLength++;
    }

    // Максимум 10 слов, каждое до 20 символов
    char words[10][20];
    int wordIndex = 0;  // номер слова
    int letterIndex = 0; // индекс внутри слова

    for (int i = 0; i <= textLength; i++) {
        if (text[i] == ' ' || text[i] == '\0') {
            words[wordIndex][letterIndex] = '\0'; // закрываем слово
            wordIndex++;
            letterIndex = 0; // начинаем следующее слово
        } else {
            words[wordIndex][letterIndex] = text[i];
            letterIndex++;
        }
    }

    // Выводим слова
    printf("Разделённые слова:\n");
    for (int i = 0; i < wordIndex; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
