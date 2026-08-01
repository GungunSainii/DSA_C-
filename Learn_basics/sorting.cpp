#include <bits/stdc++.h>
using namespace std;

//Selction Sort : Select min then swap
void selectionSort(vector<int> &arr ){
    for (int i = 0; i < arr.size() -1; i++){
        int min = i;
        for( int j = i; j < arr.size(); j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        //swap
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for (auto it:arr){
        cout << it << " ";
    }
}

//Bubble Sort : adjacent swap the max at end
void bubbleSort(vector<int> arr){
    for (int i = arr.size() -1; i >= 0; i--){
        for (int j = 0; j < i; j++){
            if (arr[j]> arr[j+1]){
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (auto it:arr){
        cout << it << " "; 
    }
}

//Insertion Sort : Takes an element and place it in it's correct order
void insertionSort(vector<int> &arr){
    for (int i = 0; i < arr.size(); i++){

        // for (int j = 0; j <= i; j++){
        //     if(arr[j] > arr[j+1]){
        //         //Issue is it will shift for only once so we technically don't know the number of times loop will run
        //     }
        // }
    
        int j = i;
        while(j >0 && arr[j-1] > arr[j]){
            //swap
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            j--;
        }
    }

    for (auto it: arr){
        cout << it << " ";
    }

}


//Merge Algorithm
void merge(vector<int> &arr, int low, int mid, int high){
    
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i -low];
    }

    
}

//Merge Sort : merge merge and return return and SORT 
void mergeSort(vector<int> &arr, int low, int high){

    if(low >= high) return;
    int mid = (low + high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr,low, mid, high);

}

int index(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }

        while(arr[j] > pivot && low +1 <= j){
            j--;
        }
        if(i < j){
            //swap
            swap(arr[i],arr[j]);
        }
    }

    //swap
    swap(arr[low],arr[j]);

    return j;
    
}

//Quick Sort : Take a pivot element and place it on correct position and smaller elements on left side and bigger elements on right side.
void quickSort(vector<int> &arr, int low, int high){
    if (low < high){
    int indexVal = index(arr, low, high);
    quickSort(arr, low, indexVal - 1);
    quickSort(arr, indexVal + 1, high);

    }
    
}


 int main (){
    
    int q;
    cin >> q;
    for (int i = 0; i < q; i++){

        int n;
        cin >> n;

        vector<int> arr(n);
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }
        // selectionSort(arr);
        // bubbleSort(arr);
        // insertionSort(arr);
        // mergeSort(arr, 0, 6);
        quickSort(arr, 0, 5);

        for(auto it: arr){
            cout << it << " ";
        }
    }
    
    
    return 0;

 }