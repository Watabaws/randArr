#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int forwerd[10];
    int take_it_back_now_yall[10];
    int i;
    int * poeenteer;
    
    srand( time(NULL) );
    
    for(i = 0; i < 9; i++){
        forwerd[i] = rand();
    }
    forwerd[9] = 0;
    
    for(i = 0; i < 10; i++){
        printf("Arr1[%d]: %d\n", i, forwerd[i]);
    }
    
    for(i = 9; i >= 0; i--){
        poeenteer = &forwerd[9-i];    
        take_it_back_now_yall[i] = *poeenteer;
    }
    
    printf("\n\n");
    
    for(i = 0; i < 10; i++){
        printf("Arr2[%d]: %d\n", i, take_it_back_now_yall[i]);
    }
    

}
