#include <stdio.h>
#include <stdlib.h>
//选择法排序 
void sort (int arr[],int n) {
	for (int i=0; i<n; i++) { //一次循环 
		int minindex=i;//i、j用来遍历，minindex用来做临时最小值的储存，循环i*j次 
		for (int j=i+1;j<n;j++) {//二次循环 
			if (arr[j]<arr[minindex])
			minindex = j;
		}
		if (minindex != i) {//确保没有漏网之鱼 
			int temp = arr[i];
			arr[i] = arr[minindex];
			arr[minindex] = temp;
		}
	}
	printf("排列后的数组是：\n");
	for (int k=0;k<n;k++) {
		if (arr[k] != 0 && arr[k] != -1){
			    printf("%d\t",arr[k]);
		}
	}
}

int main() {
	int a[100] = {0};
	int n = 0;
	while (n<100) {
		scanf("%d",&a[n]);
		printf("a【%d】为%d\n",n,a[n]);
		if(a[n] == -1){
		break;
		}
		n++;
	}
	printf("目前有效的数有:\n");
	for (n=0;n<100;n++) {
		if (a[n]!= 0) {
		printf("%d ",a[n]);
		}
	}
	sort (a,n);
	return 0;
}
