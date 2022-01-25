#include<stdio.h>
#include<math.h>
#define N 20

int main(){

int s[N] = {65,80,67,35,58,60,72,75,68,92,36,50,25,85,46,42,78,62,84,70};
int e[N] = {44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84};
double avg[2];
double dis[2];
double sigma[2];
int sum[2];
int sum2[2];
double dev_s[N];
double dev_e[N];

void swap(int *a, int *b){
int tmp;

tmp = *a;
*a = *b;
*b = tmp;

}

void bubble(int data[]){
	int i,j;
	for(i=0;i<N;i++){
		for(j=N-1;j>i;j--){
		if(data[j-1] > data[j]){
		swap(&data[j], &data[j-1]);
		}
		}
	}
}

for(int i=0;i<N;i++){
sum[0] += s[i];
sum[1] += e[i];
}
avg[0] = sum[0]/N;
avg[1] = sum[1]/N;
for(int i=0;i<N;i++){
sum2[0] += (avg[0]-s[i])*(avg[0]-s[i]);
sum2[1] += (avg[1]-e[i])*(avg[1]-e[i]);
}
dis[0] = sum2[0]/N;
dis[1] = sum2[1]/N;
sigma[0] = sqrt(dis[0]);
sigma[1] = sqrt(dis[1]);
for(int i=0;i<N;i++){
dev_s[i] = ((s[i]-avg[0])/sigma[0]) * 10 + 50;
dev_e[i] = ((e[i]-avg[1])/sigma[1]) * 10 + 50;
}

for(int i=0;i<2;i++){
	if(i==0) printf("science\n");
	if(i==1) printf("english\n");
printf("average:%lf\n", avg[i]);
printf("bunsan:%lf\n", sigma[i]);
printf("sum:%d\n", sum[i]);
}
for(int i=0;i<N;i++){
printf("student:%d\n", i+1);
printf("hensati_science:%lf\n", dev_s[i]);
printf("hensati_english:%lf\n", dev_e[i]);
}

bubble(s);
bubble(e);

printf("after sort\n");
printf("science\n");
for(int i=N-1;i>=0;i--){
printf("%d\n", s[i]);
}
printf("english\n");
for(int i=N-1;i>=0;i--){
printf("%d\n", e[i]);
}

}
