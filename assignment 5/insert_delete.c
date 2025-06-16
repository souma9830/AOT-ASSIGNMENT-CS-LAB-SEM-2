#include<stdio.h>
int main(){
    int n,val,pos,choice;
    printf("Enter the number of element in the array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter your choice if insert the element of an array then input 1 if you delete then input 2");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
       printf("Enter the position ");
       scanf("%d",&pos);
       if(pos<0 || pos>=n){
        printf("Invlid Location Please Put the Valid Location");
        break;
       }
       printf("Enter the Value to Insart");
       scanf("%d",&val);
       for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
       }
       arr[pos]=val;
       n++;
       for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
       }
       break;
       case 2:
       printf("Enter position to delete (0 to %d): ", n - 1);
            scanf("%d", &pos);
            if(pos < 0 || pos >= n) {
                printf("Invalid position!\n");
                break;
            }
         for(int i=pos;i<n-1;i++){
            arr[pos]=arr[i+1];
         }  
         n--;
         for(int i=0;i<n-1;i++){
            printf("%d",arr[i]);
         } 

        
    
    default:
    printf("There are invalid ");
        break;
    }
}