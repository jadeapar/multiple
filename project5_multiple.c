//Jadea Parchment this program will check whether a number entered is a multiple of 11 or not. 

#include <stdio.h>
//set to accept up to 1000 digits
#define LARGEST 1000 

// function that checks if if the number accepted is a multiple of 11
int multiple(char digits[],int length){
        int result = 0;
        int j;
        // repeat for the size of the array
        for (j = 0; j < length; ++j) 
        {
                if(j % 2 == 0) {//check if even 
                        result +=(digits[j] - '0');
                }
                else {
                        result -= (digits[j] - '0');
                    
                }
        }
        // if statement that returns 1 or 0 based on remainder 
       if(result % 11 == 0){
           return 1;
       }
       else{
           return 0;
       }

}

//main function 
int main(int argc, char const *argv[])
{
    
        char a[LARGEST];
        int rep = 0;
        //ask for input
        printf("Enter the value of X:\n ");
        //accept each element of array entered 
        while((a[rep++] = getchar() )!= '\n');
        a[--rep] = 0; 
//output approiate statement based on results of the function
        int show;
        show = multiple(a,rep);
        if(show)//call function
        {
                printf("%s is a multiple of 11",a);
            
        }
        else{ 
                printf("%s is not a multiple of 11",a);
}
        return 0;
}
