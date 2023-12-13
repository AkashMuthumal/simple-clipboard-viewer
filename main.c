#include <windows.h>
#include <stdio.h>

int main(){
    // Open clipboard
    if(!OpenClipboard(NULL)){
        printf("Error\n");
        return 1;
    }

    // Read clipboard data
    HANDLE data = GetClipboardData(CF_TEXT);

    // Check for empty clipboard
    if(data == NULL){
        printf("Clipboard is Empty\n");
        return 0;
    }

    // Printing content
    printf("Content = %s\n", data);
    return 0; 
}