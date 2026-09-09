#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main() {
    char questions[][100] = {
        "What is the planet you live?",
        "What is the principal color of this planet?",
        "he is composed in majority by: ",
        "The animal famous to be the King in Africa is: "
    };
    char options[][100] = {
        "A. Jupiter\nB. Neptun\nC. Earth\nD. Saturn",
        "A. Green\nB. Blue\nC. Purple\nD. Yellow",
        "A. Rock\nB. Ice\nC. Wood\nD. Water",
        "A. Lion\nB. Horse\nC. Giraffe\nD. Monkey"
    };
    char answer_key[] = {
        'C',
        'B',
        'D',
        'A'
    };
    char answer = {'\0'};
    int correct_answers = 0;

    int n_questions = sizeof(questions) / sizeof(questions[0]);

    for (int i = 0; i < n_questions; i++) {
        printf("%s\n%s\n", questions[i], options[i]);
        scanf(" %c", &answer);

        answer = toupper(answer);

        if (answer == answer_key[i]) {
            printf("Congratulations, you answered it correct!\n");
            correct_answers++;
        } else {printf("You failed!\n"); }
    }
    printf("You have %d correct answers in %d questions", correct_answers, n_questions);

    return 0;
}