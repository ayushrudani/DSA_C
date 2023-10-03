#include<stdio.h>
int main(){
    //scan array elements...
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }

    // this is temp variable.
    int c = 0;

    // strat loop for peak on by one elemnents from an array..
    for(int i = 0 ; i < n ; i++){
        // this loop is started from peaked element to last element of an array..
        for(int j = i+1 ;j< n ;j++){
            // this condition check if there is any one greater element if there is than temp varable ++ and break their cause we find the one greater element and if not than temp variable as it is and again start ith loop and jth loop it's continue
            if(a[j]>a[i]){
                c++;
                break;
            }
        }
    }
    // here i printed c+1 cause i did't understood what for the last element in picture there is tick mark at last so i asume it last varibale always have one greater element after it.
    printf("%d",c+1);
}