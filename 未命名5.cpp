#include <bits/stdc++.h>
using namespace std;
const int MAX = 36;
string gen_random(int n){
   char alphabet[MAX] = {
      'a', 'b', 'c', 'd', 'e', 'f', 'g',
      'h', 'i', 'j', 'k', 'l', 'm', 'n',
      'o', 'p', 'q', 'r', 's', 't', 'u',
      'v', 'w', 'x', 'y', 'z', '1', '2',
      '3', '4', '5', '6', '7', '8', '9',
      '0', 
   };
   string res = "";
   for (int i = 0; i < n; i++)
      res = res + alphabet[rand() % MAX];
   return res;
}
int main()
		{
			int q;
			for(q=0;q<300;q++)
			{
			printf("genshin redeem code");
			printf("      by kalimao");
			printf("      __");
			printf("\n");
			}
			int b;
			for(b=0;b<10000;b++)
			{
				printf("бс");
			}
			int i;
			for(i=0;0<100;i++)
			{
	 	 	int n = 12;
	  	  	cout << gen_random(n) << "            " ;	  	 	
			}
			return 0;
    	}



