#include <calculator_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;
int calculator_operand3 = 0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, GREATER, LESSER, ANDGATE, ORGATE, NANDGATE, NORGATE, ADDER3BIT, SUBTRACTOR3BIT, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Greater\n6. Lesser\n7. Andgate\n8. Orgate\n9. Nandgate\n10. Norgate\n11. Adder3bit\n12. subtractor3bit\n13. Exit");
    printf("\n\tEnter your choice\n");
   
     __fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(calculator_operation))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        __fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
          case GREATER:
            printf("\n\tGreater %d and %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            greater(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
          case LESSER:
            printf("\n\tLesser %d and %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            lesser(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
          case ANDGATE:
            printf("\n\tAndgate %d and %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            andgate(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
          case ORGATE:
            printf("\n\tOrgate %d and %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            orgate(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
          case NANDGATE:
            printf("\n\tNandgate %d and %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            nandgate(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
          case NORGATE:
            printf("\n\tNorgate %d and %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            norgate(calculator_operand1, calculator_operand2));
            
            __fpurge(stdin);
            getchar();
            break;
          case ADDER3BIT:
            printf("\n\tAdder3bit %d and %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            calculator_operand3,
            adder3bit(calculator_operand1, calculator_operand2, calculator_operand3));
            
            __fpurge(stdin);
            getchar();
            break;
          case SUBTRACTOR3BIT:
            printf("\n\tSubtractor3bit %d and %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            calculator_operand3,
            subtractor3bit(calculator_operand1, calculator_operand2, calculator_operand3));
            
            __fpurge(stdin);
            getchar();
            break;
        case 13:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
