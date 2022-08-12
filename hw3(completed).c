#include <stdio.h>
#include <stdlib.h>
int pop();
void push(int value);

struct node{
  int data;
  struct node *next;

}*top;





	
int main(){
    //*-

    top = (struct node*)malloc(sizeof(struct node));
    top =  NULL;

    char statement1[30];

    printf("enter statement : ");
    scanf("%s" , statement1);

    int k = 0;
    int x1 , x2 , result;
    while(statement1[k] != '\0'){

        if (statement1[k] == '+'){
            x1 = pop();
            x2 = pop();

            result = x1 + x2;

            push(result);

        }
        else if (statement1[k] == '-'){
            x1 = pop();
            x2 = pop();

            result = x2 - x1;

            push(result);

        }
        else if (statement1[k] == '*'){
            x1 = pop();
            x2 = pop();

            result = x1 * x2;

            push(result);

        }

        else if (statement1[k] == '/'){
            x1 = pop();
            x2 = pop();

            result = x1 / x2;

            push(result);

        }

        else{
			int x;
			 if(statement1[k] == '0'){
				x = 0;
			}
			else if (statement1[k] == '1'){
				x = 1;
			}
			else if(statement1[k] == '2'){
				x = 2;
			}
			else if(statement1[k] == '3'){
				x = 3;
			}
			else if(statement1[k] == '4'){
				x = 4;
			}
			else if(statement1[k] == '5'){
				x = 5;
			}
			else if(statement1[k] == '6'){
				x = 6;
			}
			else if(statement1[k] == '7'){
				x = 7;
			}
			else if(statement1[k] == '8'){
				x = 8;
			}
			else if(statement1[k] == '9'){
				x = 9;
			}
			push(x);
        }

    k++;
    }

    printf("result is : %d" , top->data);
    return 0;
}


void push(int value){

    struct node * new1 = (struct node*)malloc(sizeof(struct node));
    new1->data = value;


    if(top == NULL){
        new1->next = NULL;
        top = new1;
    }
    else{

        new1->next = top;
        top = new1;

    }



       /* struct node* iter = (struct node*)malloc(sizeof(struct node));
        iter = top;

        while(iter->next != NULL){

            iter = iter->next;
        }
        iter->next = new1;

    }*/


}

int pop(){



   int value;

   struct node * temp = (struct node*)malloc(sizeof(struct node));
   temp = top->next;

   value = top->data;

   free(top);
   top = temp;

   return value;


   /* struct node * iter = (struct node*)malloc(sizeof(struct node));
    struct node * digitCounter = (struct node*)malloc(sizeof(struct node));
    digitCounter = top;
    iter = top;
    int digit = 0;
    int value;

    while(digitCounter != NULL){
        digitCounter = digitCounter->next;
        digit++;
    }

    if(digit == 1){

        value = top->data;
        free(top->next);

        return value;


    }
    else{
          while(iter->next->next != NULL){

            iter = iter->next;
        }

        value = iter->next->data;
        free(iter->next);
        iter->next= NULL;

        return value;
    }

    */

}


