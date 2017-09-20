#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int forwerd[10]; //intialize the first array
    int take_it_back_now_yall[10]; //initalize... the second array
    int i; //One counter variable to rule them all
    int * poeenteer; //What's the point?
    
    srand( time(NULL) ); //Seed that random generator
    
    for(i = 0; i < 9; i++){
        forwerd[i] = rand(); //Populate the first array
    }
    forwerd[9] = 0; //Set the last value to 0!!
    
        /*
    for(i = 0; i < 10; i++){
        printf("Arr1[%d]: %d\n", i, forwerd[i]); //Print it out to make sure code happened
    }
    */
        
    for(i = 9; i >= 0; i--){ //Backwards for loop for a backwards array
        poeenteer = &forwerd[9-i];   //Go forward first though, and make sure you're getting the pointer
        take_it_back_now_yall[i] = *poeenteer; //Turn that pointer into a value and assign!!
    }
    
    //printf("\n\n"); //Make my output pretty 
    
   /* for(i = 0; i < 10; i++){
        printf("Arr2[%d]: %d\n", i, take_it_back_now_yall[i]); #Make sure coding magic is magic
    }
    */

}
