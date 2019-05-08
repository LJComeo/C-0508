#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
////背包问题
////从一堆商品里面找到能带走最多数量的商品
void bubble(int data[], int n){
	int i, j,tmp;
	int num = 0;
	for (i = 0; i < num - 1; ++i){                 //冒泡排序
		for (j = 0; j < num - 1 - i; ++j){
			if (data[j]>data[j + 1]){
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
	}
}
//int main(){
//	int size, num;
//	int weight[20] = { 0 };
//	scanf("%d %d", &num, &size);
//	int i;
//	int count = 0;
//	int sum = 0;
//	for (i = 0; i < num; ++i){
//		scanf("%d", weight + 1);
//	}
//	bubble(weight, num);
//	for (i = 0; sum+weight[i] < size && i < num; ++i){
//		sum += weight[i];
//	}
//	printf("%d", i);
//	system("pause");
//	return 0;
//}
int main(){
	int size, num;
	int weight[20] = { 0 };
	scanf("%d %d", &num, &size);
	int i,j;
	int count = 0;
	int sum = 0;
	for (i = 0; i < num; ++i){
		scanf("%d", weight + 1);
	}
	bubble(weight, num);
	for (i = 0,j=num-1; i<j;j--){
		if (weight[i] + weight[j] <= size){
			i++;
		}
		count++;
	}
	printf("%d", count);
	system("pause");
	return 0;
}