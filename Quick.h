#include <vector>

template<typename T>
class QuickSort : public Sort {
    private:
    vector<T> v;
    public:
        QuickSort(vector<T> v) : v(v) {}

    int partition (int arr[], int right, int left){
        int pivot = arr[left];
        int i = (right - 1);

        for (int j = right; j <= left - 1; j++){
            if (arr[j] <= pivot){
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[left]);
        return (i + 1);
    }

    void quickSort(int arr[], int right, int left){
        if (right < left){
            int pi = partition(arr, right, left);

            quickSort(arr, right, pi - 1);
            quickSort(arr, pi + 1, left);
        }
    }

    void execute() {
            quickSort(elements, 0, size-1);
        }

    void create(){
        fstream file;
        file.open("Proyecto2.csv",ios::out);
        int i=this->v.size();
        while(i!=0)
            for(auto it=this->v.begin();it!=this->v.end();it++){
                file<<*it<<" ";
                i--;
            }
    }
};
