
#include <stdio.h>
#include <string.h>

#define SIZE 10  
typedef struct {
    char buffer[SIZE];
    int head;
    int tail;
    int count;
} CircularBuffer;

void init(CircularBuffer *cb) {
    cb->head = 0;
    cb->tail = 0;
    cb->count = 0;
}

int isFull(CircularBuffer *cb) {
    return cb->count == SIZE;
}

int isEmpty(CircularBuffer *cb) {
    return cb->count == 0;
}

void writeBuffer(CircularBuffer *cb, char data) {
    if (isFull(cb)) {
        printf("Buffer Overflow\n");
        return;
    }

    cb->buffer[cb->tail] = data;
    cb->tail = (cb->tail + 1) % SIZE;
    cb->count++;
}

char readBuffer(CircularBuffer *cb) {
    if (isEmpty(cb)) {
        printf("Buffer Underflow\n");
        return '\0';
    }

    char data = cb->buffer[cb->head];
    cb->head = (cb->head + 1) % SIZE;
    cb->count--;
    return data;
}

int main() {
    CircularBuffer cb;
    init(&cb);

    char name[100];
    char full[200];

    printf("Enter your name: ");
    if (scanf("%99s", name) != 1) {
        printf("Input error\n");
        return 1;
    }

    strcpy(full, name);
    strcat(full, "CE-ESY");

    printf("Full string: %s\n", full);

    
    for (int i = 0; full[i] != '\0'; i++) {
        writeBuffer(&cb, full[i]);
    }

    printf("Read back: ");
    while (!isEmpty(&cb)) {
        char c = readBuffer(&cb);
        if (c != '\0') {
            printf("%c", c);
        }
    }
    printf("\n");

    if (isEmpty(&cb)) {
        printf("Buffer is now empty.\n");
    } else {
        printf("Buffer is NOT empty (erorr).\n");
    }

    return 0;
}
