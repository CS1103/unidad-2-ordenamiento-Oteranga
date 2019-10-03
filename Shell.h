//
// Created by Alejandro  Otero on 2019-09-26.
//

#ifndef PROYECTO_2_SHELL_H
#define PROYECTO_2_SHELL_H

#endif //PROYECTO_2_SHELL_H


template<typename T>
class ShellSort{
public:
    ShellSort(vector<T> v):v(v){}

    void shell(vector<T>& vec){
        int gap=vec.size()/2;
        while (gap>0){
            for (T i=gap;i<vec.size();i++){
                for(T j=i;j>=gap;j-=gap){
                    if (vec[j]<vec[j-gap]){
                        swap(vec[j],vec[j-gap]);
                    }else
                        break;
                }
            }
            gap=gap/2;
        }
    }

    void create(){
        fstream file;
        file.open("Proyecto.csv",ios::out);
        int i=this->v.size();
        while(i!=0)
            for(auto it=this->v.begin();it!=this->v.end();it++){
                file<<*it<<" ";
                i--;
            }
    }

};
