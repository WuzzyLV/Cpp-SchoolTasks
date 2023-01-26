#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    cout << "Bing bong starting..." << endl;
    ifstream inputFile("darbi.in");
  
    if(!inputFile.good()){  
        ofstream inputFile("darbi.in");
        cout << "File doesnt exist making, please input a value!" << endl;
        return 0;
    }
  
    cout << "File exists reading!!"<< endl;

    vector<int> data;

    int val=0; int end=0; int lowest=0;
    while (inputFile>>val){
        data.push_back(val);

        if(data.size()%2!=0){
            if(!(val>=1 && val<=10000)){
                cout<< "day too long" << endl;
                return 0;
            }
            end= (end>val) ? end : val;
            //finding lowest
            cout<< "lowest: " <<val<<endl;
            if(lowest==0 ||lowest>val){   lowest=val;   }
        }
    }

    int firstJobOptions=0;
    for(int i =0;i<(data.size()/2);i++){
        cout<< data[i] <<"==" << lowest <<endl;
        if(data[i]==lowest){   firstJobOptions++;   }
    }
    
    cout<< "first job opt: " << firstJobOptions  <<endl;
    cout<< "end: " <<end<<endl;

    /////////DEBUG///////
    for(int i =0;i<(data.size()/2);i++){
        cout << data[i] << " " << data[i+1]<< endl;
    }
    /////////////////////

    vector<int> results;

    for(int i =0;i<firstJobOptions;i++){
        int time =1, freetime =1 , amount=1;

        while(time<=end){
            cout<<"time: "<< time << "<" << end <<endl;
            int target=-1;
            for(int j =0;j<(data.size());j+=2){
                if(!(data[j]==time)){
                    continue;
                }
                if(target==-1){
                    target=j;
                    continue;
                }
                if(data[target+1]<data[i+1]){   continue;   }
                target=i;
            }
            if(target!=-1){
                cout << "Job taken: " << data[target] << " " << data[target+1]<< endl;
                time+=data[target+1];
                if(amount==1){
                    data.erase(data.begin() + target);
                }

                amount++;
                continue;
            }
            cout<< "waiting" << endl;
            time++;
            freetime++;
        }
        results.push_back(freetime);
    }
    int best=0;

    for(int i =0;i<results.size();i++){
        cout<<"freetime: " << results[i]<<endl;
        if(best<results[i]){
            best=results[i];
        }
    }
    cout<< "best freetime: "<< best<<endl;

    ofstream outputFile("darbi.rez");
    outputFile<<best;

    return 0;
}
