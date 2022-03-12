int main(void) { 
    int n = 4; 
    char *arr = (char *) malloc(n * sizeof(char));
    arr[0] = 'W';
    arr[1] = 'O'; 
    arr[2] = 'R'; 
    arr[3] = 'K'; 
    for (int i = 0; i < n; i++) { 
        printf("%c ", arr[i]); 
    }
    printf("\n");

    char *array; 
    array = (char*)malloc(n); 
    array[0] = 'W';
    array[1] = 'O';
    array[2] = 'R';
    array[3] = 'K';
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    free(array);
    return 0;

}