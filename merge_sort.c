#include <stdio.h>
#include <math.h>

void merge_sort(int array[],int left,int right){
    // 真ん中と新しい配列
    int mid;
    int new_array[10];

    if(left<right){
        //中央値の計算
        mid = (left+right)/2;
        merge_sort(array,left,mid);
        merge_sort(array,mid+1,right);
        for (int i = mid; i >= left; i--)
        {
            /* code */
            new_array[i] = array[i];
        }
 
        
        for (int j = mid+1; j <= right; j++)
        {
            new_array[right-(j-(mid+1))] = array[j];
        }


        int i = left;
        int j = right;


        //sort
        for (int k = left; k <= right; k++)
        {
            //小さい方の数を元のarray[]に格納して、小さい方の値は１進める
            if(new_array[i] < new_array[j]){
                array[k] = new_array[i++];
                
            }else{
                array[k] = new_array[j--];
            }
            
        }
    
    }
    
}



int main(){
    // array
    int array[10] = {6,4,2,9,8,7,0,3,1,5};
    int x = 0;
    double size = sizeof(array);
    double size2 = size/2;
    double l = log2(size);
    double l2 = log2(size2);

    merge_sort(array,0,9);

    //output
    for (int i = 0; i < 10; i++)
    {
        printf("%d",array[i]);
    }
    printf("\n");

    return 0;

}
