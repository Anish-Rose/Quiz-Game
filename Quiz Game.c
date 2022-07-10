#include <stdio.h>

//Global Variables
char choose;
int score=0 , option , wrong=0 , questions=0;
int main(){
    printf("\t\t\t-----------Quiz Game-----------\t\t\t\n\n");

    printf("1) Press S to Start the game \n\n");
    printf("2) Press E to Exit the game \n\n");
    printf("3) Press H to see Help menu\n\n");
    choose=toupper(getch());

    switch(choose){
    case 'S':
        system("cls");
        mainGame();
        break;

    case 'E' :
        system("cls");
        system("color 6");
        Beep(500,600);
        printf("\n\n\nGame Over \n\n\n");
        exit(0);
        break;


    case 'H':
        help();
        break;

    default :
        printf("\nInvalid Selection Try Again\n");
        Beep(500,600);
    }
}

//================================All Functions//================================//

int mainGame(){
    while(questions != 10){
    system("cls");
    printf("==================Total Questions==================\n\n");

    //================================1 Question================================//

    printf("\n1) Who is the father of C language?\n\n");
    printf("Option 1 : Steve Jobs\n\n");
    printf("Option 2 : James Gosling\n\n");
    printf("Option 3 : Dennis Ritchie\n\n");
    printf("Option 4 : Rasmus Lerdorf\n\n");
    printf("Choose : ");
    scanf("%d" , &option);
    questions++;
    if(option == 3){
        score += 10;
        printf("\n\n================== Correct Answer ================== \n\n");
    }
    else{
        printf("\n\n================== Wrong Answer ================== \n\n");
        wrong++;

    }

    //================================2 Question================================//

    printf("\n2) Which of the following is not a valid C variable name?\n\n");
    printf("Option 1 : int number\n\n");
    printf("Option 2 : float rate\n\n");
    printf("Option 3 : int variable_count\n\n");
    printf("Option 4 : int $main\n\n");
    printf("Choose : ");
    scanf("%d" , &option);
     questions++;
    if(option == 4){
        score += 10;
        printf("\n\n================== Correct Answer ================== \n\n");
    }
    else{
        printf("\n\n================== Wrong Answer ================== \n\n");
      wrong++;
    }

    //================================3 Question================================//

    printf("\n3) Which of the following is true for variable names in C?\n\n");
    printf("Option 1 : They can contain alphanumeric characters as well as special characters\n\n");
    printf("Option 2 : It is not an error to declare a variable to be one of the keywords(like goto, static)\n\n");
    printf("Option 3 : Variable names cannot start with a digit\n\n");
    printf("Option 4 : Variable can be of any length\n\n");
    printf("Choose : ");
    scanf("%d" , &option);
     questions++;
    if(option == 3){
        score += 10;
        printf("\n\n================== Correct Answer ================== \n\n");
    }
    else{
        printf("\n\n================== Wrong Answer ================== \n\n");
      wrong++;
    }

    //================================4 Question================================//
    printf("\n================== Correct Answer Score = %d ==================\n" , score);
    printf("\n4) Which of the following declaration is not supported by C language?\n\n");
    printf("Option 1 : String str\n\n");
    printf("Option 2 : char *str\n\n");
    printf("Option 3 :  float str = 3e2\n\n");
    printf("Option 4 : Both String str; & float str = 3e2\n\n");
    printf("Choose : ");
    scanf("%d" , &option);
     questions++;
    if(option == 1){
        score += 10;
        printf("\n\n================== Correct Answer ================== \n\n");
    }
    else{
        printf("\n\n================== Wrong Answer ================== \n\n");
      wrong++;
    }

    //================================5 Question================================//

    printf("\n5) What is the result of logical or relational expression in C?\n\n");
    printf("Option 1 : True or False\n\n");
    printf("Option 2 :  0 or 1\n\n");
    printf("Option 3 :  0 if an expression is false and any positive number if an expression is true\n\n");
    printf("Option 4 : None of the mentioned\n\n");
    printf("Choose : ");
    scanf("%d" , &option);
    questions++;
    if(option == 2){
        score += 10;
        printf("\n\n================== Correct Answer ================== \n\n");
    }
    else{
        printf("\n\n================== Wrong Answer ================== \n\n");
      wrong++;
    }

    //================================6 Question================================//

    printf("\n6) Where in C the order of precedence of operators do not exist?\n\n");
    printf("Option 1 : Within conditional statements, if, else\n\n");
    printf("Option 2 :  Within while, do-while\n\n");
    printf("Option 3 :  Within a macro definition\n\n");
    printf("Option 4 : None of the mentioned\n\n");
    printf("Choose : ");
    scanf("%d" , &option);
     questions++;
    if(option == 4){
        score += 10;
        printf("\n\n================== Correct Answer ================== \n\n");
    }
    else{
        printf("\n\n================== Wrong Answer ================== \n\n");
      wrong++;
    }

    //================================7 Question================================//

    printf("\n7) Functions can return enumeration constants in C?\n\n");
    printf("Option 1 :  True\n\n");
    printf("Option 2 :  False\n\n");
    printf("Option 3 :  Depends on the compiler\n\n");
    printf("Option 4 : Depends on the standard\n\n");
    printf("Choose : ");
    scanf("%d" , &option);
     questions++;
    if(option == 1){
        score += 10;
        printf("\n\n================== Correct Answer ================== \n\n");;
    }
    else{
        printf("\n\n================== Wrong Answer ================== \n\n");
      wrong++;
    }

    //================================8 Question================================//

    printf("\n8) Which of following is not accepted in C?\n\n");
    printf("Option 1 : Static a = 10\n\n");
    printf("Option 2 : Static int func (int)\n\n");
    printf("Option 3 : Static static int a; //a static variable prefixed with static\n\n");
    printf("Option 4 : All of the mentioned\n\n");
    printf("Choose : ");
    scanf("%d" , &option);
     questions++;
    if(option == 3){
        score += 10;
        printf("\n\n================== Correct Answer ================== \n\n");
    }
    else{
        printf("\n\n================== Wrong Answer ================== \n\n");
      wrong++;
    }

    //================================9 Question================================//

    printf("\n9)  What will happen if the following C code is executed?\n\n");
    printf("#include <stdio.h>\nint main(){\n\tint main = 3;\n\tprintf('%%s, main');\n\treturn 0;\n\n}\n\n");
    printf("Option 1 : It will cause a compile-time error\n\n");
    printf("Option 2 : It will cause a run-time error\n\n");
    printf("Option 3 : It will run without any error and prints 3\n\n");
    printf("Option 4 : It will experience infinite looping\n\n");
    printf("Choose : ");
    scanf("%d" , &option);
     questions++;
    if(option == 2){
        printf("\n\n================== Correct Answer ================== \n\n");
        score += 10;
    }
    else{
        printf("\n\n================== Wrong Answer ================== \n\n");
      wrong++;
    }

    //================================10 Question================================//

    printf("\n10) What is the result of logical or relational expression in C?\n\n");
    printf("Option 1 : True or False\n\n");
    printf("Option 2 :  0 or 1\n\n");
    printf("Option 3 :  0 if an expression is false and any positive number if an expression is true\n\n");
    printf("Option 4 : None of the mentioned\n\n");
    printf("Choose : ");
    scanf("%d" , &option);
    questions++;
    if(option == 2){
        score += 10;
        printf("\n\n================== Correct Answer ================== \n\n");
    }
    else{
        printf("\n\n================== Wrong Answer ================== \n\n");
      wrong++;
    }

    if(questions == 10 || wrong == 0){
        printf("\n\nGame Over \n\n");
        printf("\n================== Total Wrong Answers = %d ==================\n" , wrong);
        printf("\n================== Total Score = %d ==================\n" , score);
    }
 }
}

void help(){
    system("cls");
    printf("\n\t\t\tPress S to start your Quiz Game\t\t\t\n\n");
    printf("\n\n\t\t\tPress E to exit your Game\t\t\t\n\n");
    printf("\n\n\t\t\tYou have only 10 Chances\t\t\t\n\n");
    printf("\n\n\t\t\tScore can be viewed at last\t\t\t\n\n");
    printf("\n\n\t\t\t\t\t\t\n\n");
}
