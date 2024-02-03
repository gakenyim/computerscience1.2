#include <stdio.h>
int removeDuplicates(int nums[],int size){
if(size ==0){
    return 0;
}

int index =0;
for(int i=1; i<size; i++){
    if(nums[i] !=nums[index]){
        nums[++index] = nums[i];
    }
}
return index +1;
}
int main(){
int nums[] = {2,2,3,3,4,5,5,6,6,7};
int size =10;

int NewLength = removeDuplicates(nums,size);

 printf("NewLength: %d\n", NewLength);
printf("Array after removing duplicates :");
for(int i= 0; i< NewLength; i++){
    printf("%d", nums[i]);
}
return 0;
}







