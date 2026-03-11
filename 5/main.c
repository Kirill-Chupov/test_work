int FindLinear(int arr[], int value) {
    const int NOT_FOUND = -1;

    int size = sizeof(arr) / sizeof(int);

    for(int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return i;
        }
    }

    return NOT_FOUND;
}


void main(){

}