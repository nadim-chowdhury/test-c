#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void funny_intro() {
    printf("🤖 Booting up... Initiating Hyper Advanced Complimenting Algorithm...\n");
    for (int i = 0; i < 3; i++) {
        printf(".");
        fflush(stdout);
        for (volatile long j = 0; j < 100000000; j++); // silly delay
    }
    printf("\n✅ System ready!\n\n");
}

int main() {
    char name[50];
    srand(time(NULL));

    char *compliments[] = {
        "Your code never segfaults... probably.",
        "You have the debugging skills of a wizard!",
        "Even your compiler warnings admire you.",
        "You’re like malloc — you make space for everyone.",
        "You bring less bugs than an optimized C loop.",
        "You’re as efficient as O(1) time complexity!",
        "You deserve 100/100 in all your C labs.",
        "Your logic is so clean, printf() prints applause.",
        "You could outsmart a segfault with just a smile.",
        "If C had a ❤️ operator, it’d point to you."
    };

    funny_intro();

    printf("💡 Please enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // remove newline

    printf("\nAnalyzing name '%s'...\n", name);
    for (int i = 0; i < 3; i++) {
        printf(".");
        fflush(stdout);
        for (volatile long j = 0; j < 100000000; j++);
    }

    int randomIndex = rand() % (sizeof(compliments) / sizeof(compliments[0]));
    printf("\n\n🎉 Hey %s! %s\n", name, compliments[randomIndex]);
    printf("\n(Press Enter to exit)");
    getchar();

    return 0;
}
