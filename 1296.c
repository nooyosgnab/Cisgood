#include <stdio.h>
#include <string.h>
int main(){
	char mine[21], team[50][22], result[21];
	int win[50]; 
	int l = 0, o = 0, v = 0, e = 0;
	int L, O, V, E;
	int n, max = -1;
	
	scanf("%s", mine);
	for (int j = 0; j < strlen(mine); j++){	//내 이름의 LOVE 개수 세기 
		if (mine[j] == 'L') l++;
		else if (mine[j] == 'O') o++;
		else if (mine[j] == 'V') v++;
		else if (mine[j] == 'E') e++;
	}
	
	scanf("%d", &n); 
	for (int i = 0; i < n; i++){
		scanf("%s", team[i]);
		L = l, O = o, V = v, E = e;
		
		for (int j = 0; j < strlen(team[i]); j++){	//팀 이름의 LOVE 개수 더하기 
			if (team[i][j] == 'L') L++;
			else if (team[i][j] == 'O') O++;
			else if (team[i][j] == 'V') V++;
			else if (team[i][j] == 'E') E++;
		}
		win[i] = ((L+O)*(L+V)*(L+E)*(O+V)*(O+E)*(V+E)) % 100;
	}
	
	for (int i = 0; i < n; i++){
		if (max < win[i]){	//우승 확률이 더 높을 경우  
			max = win[i];
			strcpy(result, team[i]);
		}
		else if (max == win[i]){	//우승 확률이 같을 경우  
			if (strcmp(result, team[i]) > 0){
				strcpy(result, team[i]);
			}
		}
	}
	
	printf("%s\n", result); 
	return 0;
}
