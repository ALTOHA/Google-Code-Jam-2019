#include <bits/stdc++.h>

using namespace std;

int main(){
	bool ac;
	int i, pos, casos;
	char valor[105];
	
	scanf("%d", &casos);
	
	for(int j=1; j<=casos; j++){
		ac = false;
		scanf("%s", valor);
		
		printf("Case #%d: ", j);
		
		
		for(i=0; i<strlen(valor); i++){
			
			if(valor[i] == '4'){		
				valor[i] = '3';
				ac = true;
				printf("1");
			}
			
			else if(ac == true)
				printf("0");
		}
		printf(" %s\n", valor);
	}
	return 0;
	
}
