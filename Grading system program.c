#include <stdio.h>

int main() {
    
    int math, english, kiswahili, score, average_score, grade;

    while (1) {
        printf("Enter your math score: ");
        scanf("%d", &math);
        if (math >= 0 && math <= 100) {
            break; 
        } else {
            printf("Invalid score! Please enter a score between 0 and 100.\n");
        }
    }

    while (1) {
        printf("Enter your english score: ");
        scanf("%d", &english);
        if (english >= 0 && english <= 100) {
            break;
        } else {
            printf("Invalid score! Please enter a score between 0 and 100.\n");
        }
    }


    while (1) {
        printf("Enter your kiswahili score: ");
        scanf("%d", &kiswahili);
        if (kiswahili >= 0 && kiswahili <= 100) {
            break;
        } else {
            printf("Invalid score! Please enter a score between 0 and 100.\n");
        }
    }

    
    average_score = (math + english + kiswahili)/3;
    
    if (average_score>=70 && average_score<=100){
        printf("Your mean grade is A. \n");
    }
   
    else if (average_score>=60 && average_score<=69){
        printf("Your mean grade is B. \n");
    }
    
    else if (average_score>=50 && average_score<=59){
        printf("Your mean grade is C. \n");
    }

    else if (average_score>=40 && average_score<=49){
        printf("Your mean grade is D. \n");
    }
   
    else if(average_score>=0 && average_score<=39){
        printf("Your average score is E. \n");
    }

    return 0;
}    