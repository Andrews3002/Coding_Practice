#include<iostream>

using namespace std;

int main(){
    int nums[10], target, count = 0, index = 0, strlen, m = 1, j;
    string numbers;

    getline(cin, numbers);

    cin >> target;

    strlen = numbers.length();

    for(int i = 0; i <= 10; i++){
        nums[i] = 0;
    }


    for (int i = 0; i < strlen; i++){
        if(numbers[i] == ','){
            m = 1;
            index++;
            continue;
        }
        else{
            nums[index] = nums[index]*m + numbers[i]-48;
            m = 10;
            count++;
        }
    }

    for (int i = 0; i < count; i++){
        for(int j = i+1; j < count; j++){
            if(nums[i]+nums[j] == target){
                cout << i << ", " << j;
                break;
            }
        }
        if(nums[i]+nums[j] == target){
            break;
        }
    }


    return 0;
}