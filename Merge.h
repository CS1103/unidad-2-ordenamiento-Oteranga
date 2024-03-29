#include <vector>


template<typename T>
class MergeSort : public Sort {
    private:
    vector<T> v;
    public:
        MergeSort(vector<T> v) : v(v) {}

        void merge(int arr[], int left, int m, int right){
            int i, j, k;
            int n1 = m - left + 1;
            int n2 = right - m;

            int L[n1], R[n2];

            for (i = 0; i < n1; i++){
                L[i] = arr[left + i];
            }
            for (j = 0; j < n2; j++){
                R[j] = arr[m + 1+ j];
            }

            i = 0;
            j = 0;
            k = left;
            while (i < n1 && j < n2){
                if (L[i] <= R[j]){
                    arr[k] = L[i];
                    i++;
                }
                else{
                    arr[k] = R[j];
                    j++;
                }
                k++;
            }

            while (i < n1){
                arr[k] = L[i];
                i++;
                k++;
            }

            while (j < n2){
                arr[k] = R[j];
                j++;
                k++;
            }
        }

        void mergeSort(int arr[], int left, int right){
            if (left < right){
                int m = (right+left)/2;

                mergeSort(arr, left, m);
                mergeSort(arr, m+1, right);

                merge(arr, left, m, right);
            }
        }
    void execute() {
        mergeSort(elements, 0, size - 1);
        }

    
    void create(){
        fstream file;
        file.open("Proyecto3.csv",ios::out);
        int i=this->v.size();
        while(i!=0)
            for(auto it=this->v.begin();it!=this->v.end();it++){
                file<<*it<<" ";
                i--;
            }
    }
};
