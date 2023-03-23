#include <iostream>
using namespace std;

int main() {
    int runAmount, n, streak, highestStreak;
    cin>>runAmount;
	while(runAmount--){
        streak=0;   highestStreak=0;
	    cin>>n;
	    int data[2][n];
        for(int i =0;i<2;i++){
            for(int j =0;j<n;j++){
                cin>>data[i][j];
            }
        }

        for(int i =0;i<n;i++){
            if (data[0][i]> 0 && data[1][i]> 0){
                streak++;
                if(streak>highestStreak){
                    highestStreak=streak;
                }
            }else{
                streak=0;
            }
        }
        cout<<highestStreak<<endl;
	}
	return 0;
}
