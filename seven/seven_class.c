// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include"Swap.h"//应用声明函数
// int main(){
//     int arr1[]= {1,2,3};
//     char arr2[]="abc";
//     char arr3[]={'a','b','c'};
//     printf("%d\n",sizeof(arr2));//sizeof是看数组所占空间的大小，计算变量、数组、类型的大小，单位是字节 - 操作符
//     printf("%d\n",sizeof(arr3));
//     printf("%d\n",strlen(arr2));//strlen是看数组内元素个数，只能求字符串长度 - 库函数，要引头文件  数量是\0之前的元素数量
//     printf("%d\n",strlen(arr3));//找不到\0所以为随机值直到找到\0
//     printf("%c\n",arr2[1]);//%c打印字符
//     printf("%d\n",arr1[1]);//%d打印数字

//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<sz;i++)
//     {
//         printf("&arr[%d] = %p\n",i,&arr[i]);//%p打印地址

//     }

//     system("pause");
//     return 0;
// }
//=================冒泡排序======================
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// void paixu(int arr[],int sz)
// {
//     for (int i = 0; i < sz-1; i++)
//     {
//         int free = 1;
//         for (int j = 0; j < sz-1-i; j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int tem = arr[j];
//                 arr[j]= arr[j+1];
//                 arr[j+1]=tem;
//                 free = 0;
//             }
//         }
//         if(free == 1)
//         {
//             break;
//         }
//     }
// }
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     paixu(arr,sz);
    
//     for (int i = 0; i < sz; i++)
//     {
//         printf("%d",arr[i]);
//     }
//     system("pause");
//     return 0;
// }
//====================================================
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main(){
//     printf("%d\n",sizeof(char*));
//     printf("%d\n",sizeof(int*));





//     system("pause");
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if((i+j)%2==0)
                printf("%c%c",219,219);
            else printf("  ");
        }
        printf("\n");
    }
    system("pause");
    return 0;
}