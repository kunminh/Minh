#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Stack
{
    int top;
    int capacity;
    int *array;
};

struct Stack* createStack(int capacity)
{
    struct Stack* s = (struct Stack*) malloc(sizeof(struct Stack));
    if (!s)
    {
        return NULL;
    }

    s->capacity = capacity;
    s->top = -1;
    s->array = (int*) malloc(s->capacity * sizeof(int));
    if (!s->array)
    {
        return NULL;
    }
    return s;
}

bool isStackEmpty(struct Stack* s) {
    return (s->top == -1);
}

bool isStackFull(struct Stack* s) {
    return (s->top == s->capacity -1);
}

bool push(struct Stack* s, int data) {
    if (isStackFull(s)) {
        printf("Stack is over flow\n");
        return false;
    } else {
        s->array[++s->top] = data;
        return true;
    }
}


bool pop(struct Stack*s, int* data) {
    if (isStackEmpty(s)) {
        printf("Stack is empty");
        return false;
    } else {
        *data = s->array[s->top--];
        return true;
    }
}

void deleteStack(struct Stack*s) {
    if (s) {
        if (s->array) {
            free(s->array);
        }
        free(s);
    }
}


char* addBigNumber(char* n1, char* n2) {
    struct Stack* result = createStack(40);
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int top1 = len1; // Stack counter for string n1
    int top2 = len2; // Stack counter for string n2
    int carry = 0;

    while (top1 > 0 || top2 > 0) {
        top1 = top1 - 1;
        top2 = top2 - 1;
        int v1 = 0, v2 = 0;
        if (top1 >= 0) {
            v1 = n1[top1] - '0';
        }

        if (top2 >= 0) {
            v2 = n2[top2] - '0';
        }
        int temp = v1 + v2 + carry;

        carry = temp / 10;
        temp = temp % 10;

        push(result, temp);

    }

    char *string = malloc(result->top * sizeof(char));
    memset(string, 0, result->top);
    int i = 0;
    while (!isStackEmpty(result)) {
        int a;
        pop(result, &a);
        string[i] = a + '0';
        i++;
    }
    string[i]=0;
    deleteStack(result);
    return string;

}

int main() {
    char* string = addBigNumber("23342324591", "324234234234323784");
    printf("%s\n", string);
    return 0;
}
