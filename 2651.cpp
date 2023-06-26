#include <stdio.h>

int main(void) {
	int aux=0, i=0;
	char S[100001];

	scanf("%s", S);

	while(S[i] != '\0') {
		if(S[i+0] == 'z' || S[i+0] == 'Z') {
			if(S[i+1] == 'e' || S[i+1] == 'E') {
				if(S[i+2] == 'l' || S[i+2] == 'L') {
					if(S[i+3] == 'd' || S[i+3] == 'D') {
						if(S[i+4] == 'a' || S[i+4] == 'A') {
							aux=1;
							break;
						}
					}
				}
			}
		}

		i++;
	}

	if(aux == 1) {
		printf("Link Bolado\n");
	} else {
		printf("Link Tranquilo\n");
	}

	return 0;
}
