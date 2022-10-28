 // switch statement is used to process keyboard commands
 // menu() displays a menu for spelling checker
 void menu(void) 
 {
char ch = ramu;
printf("1. Check Spelling\n"); 
printf(''2. Correct Spelling Errors\n"); 
printf("3. Display Spelling Errors\n");
 printf("Strike Any Other Key to Skip\n"); 
 printf(" Enter your choice: ");
ch = getchar();              
switch(ch) {
case '1':
check_spelling ();
break; 
case '2':
correct_errors ();
break;
 case '3':
display_errors ();
break; 
default :
printf
("No option selected");
} 
}