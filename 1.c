#include <stdio.h>

int main() {
    char text[] = "the sat cat on the  mat";
    char target[] = "sat";
    int textLength = 0;
    int targetLength = 0;

    // Считаем длину text
    while (text[textLength] != '\0') {
        textLength++;
    }

    // Считаем длину target
    while (target[targetLength] != '\0') {
        targetLength++;
    }

    // Ищем target в text
    int foundIndex = -1;
    for (int i = 0; i <= textLength - targetLength; i++) {
        int match = 0;
        for (int j = 0; j < targetLength; j++) {
            if (text[i + j] == target[j]) {
                match++;
            }
        }
        if (match == targetLength) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Слово \"%s\" найдено на позиции %d\n", target, foundIndex);
    } else {
        printf("Слово \"%s\" не найдено\n", target);
    }

    return 0;
}
