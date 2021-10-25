#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i=0, z, con;
    int brr[1000] , arr[1000];
    printf("how maney arrsy you want: ");
    scanf("%d", &num);
    //arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        printf("Enter the elemant :");
        scanf("%d", arr + i);
    }
    con = num;
    while (1) {
        z = arr[i];
        arr[i] = arr[num-1];
        arr[num] = z;

        if(con == i)
        {
            break;
        }
        i++;
    }
    printf(("Revers array\n"));
    for(i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
