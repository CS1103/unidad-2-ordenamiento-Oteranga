#include "sort.h"

class HeapSort : public Sort {       
    public:
        HeapSort(int *elements, size_t size) : Sort(elements, size) {}
        
        void heapify(int arr[], int n, int i) 
{ 
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
  
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    if (largest != i) { 
        swap(arr[i], arr[largest]); 
  
        heapify(arr, n, largest); 
    } 
} 
  
void heapSort(vector<int> arr, int n) 
{ 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    for (int i = n - 1; i >= 0; i--) { 
        swap(arr[0], arr[i]); 
  
        heapify(arr, i, 0); 
    } 
} 
    
    
    void create(){
        fstream file;
        file.open("Proyecto4.csv",ios::out);
        int i=this->v.size();
        while(i!=0)
            for(auto it=this->v.begin();it!=this->v.end();it++){
                file<<*it<<" ";
                i--;
            }
    }


};
