#include <bits/stdc++.h>

using namespace std;


int main(){
	int casos, i,tam;
	char movimiento;	
	scanf("%d", &casos);
	
	for(i=1; i<=casos; i++){
		scanf("%d", &tam);
		printf("Case #%d: ", i);
		getchar();
		while(scanf("%c", &movimiento) && movimiento != '\n'){
			if(movimiento == 'S')
				printf("E");
			else
				printf("S");
		}
		
		printf("\n");
	}

	return 0;	
}
