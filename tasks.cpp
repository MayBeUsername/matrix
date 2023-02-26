#include <iostream>
#include <array>

using namespace std;

void task1();
void task2();
bool cond(int a, int i, int j);
void task3();
void task4();
void task5();

const int N=10, M=10;

int main()
{
    int a;
    cout<<"task?\n";
    cin>>a;
    srand(time(0));

    switch(a){
    case 1:{task1();break;}
    case 2:{task2();break;}
    case 3:{task3();break;}
    case 4:{task4();break;}
    case 5:{task5();break;}
    default:{cout<<"err num task";}
    }

    return 0;
}

void task1(){

    //Преобразовать матрицу: элементы строки, в которой находится минимальный
    //элемент матрицы, заменить нулями.

    array <array<int, N>, M> arr;
    int minn=201, mins=0;

    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++) {
            arr[i][j]=rand()%200-100;
            cout<<arr[i][j]<<" ";
            if (arr[i][j]<minn) {
                minn=arr[i][j];
                mins=i;
            }
        }
        cout<<endl;
    }

    for (int i=0; i<N; i++){
        arr[mins][i]=0;
    }

    cout<<endl;

    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void task2(){

    //В квадратной матрице найти сумму положительных элементов, лежащих на и выше
    //главной диагонали и расположенных в чётных столбцах.

    array <array<int, N>, M> arr;
    int sum=0;

    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++) {
            arr[i][j]=rand()%20-10;
            cout<<arr[i][j]<<" ";
            if (cond(arr[i][j], i, j)) sum+=arr[i][j];
        }
        cout<<endl;
    }

    cout<<"sum="<<sum<<endl;

}

bool cond(int a, int i, int j){
    return (
        (a>0)&&
        ((i==j)||(j>i))&&
        (j%2==0)
    );

}

void task3(){

    //Дана матрица. Элементы первой строки — количество осадков в соответствующий
    //день, второй строки — сила ветра в этот день. Найти, был ли в эти дни ураган?
    //(ураган — когда самый сильный ветер был в самый дождливый день).

    array <array<int, 10>, 2> arr;
    int max1=0, max2=0, count=0;

    for (int i=0; i<2; i++){
        for (int j=0; j<10; j++) {
            arr[i][j]=rand()%10;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i=0; i<10; i++){
        if (arr[0][i]>max1) max1=arr[0][i];
        if (arr[1][i]>max2) max2=arr[1][i];
    }

    for (int i=0; i<10; i++){
        if ((arr[0][i]==max1)&&(arr[1][i]==max2)) count++;
    }

    if (count!=0) cout<<"yes\n";
    else cout<<"no\n";

}

void task4(){

    //Объявить, реализовать заполнение данными с клавиатуры ИЛИ из файла и вывести
    //на экран матрицу, описывающую следующие сущности. Предложите свой вариант.
    //
    //Двумерное изображение. Изображение состоит из пикселей. Каждый пиксель
    //характеризуется яркостью цветовых каналов: красный, синий, зелёный.

}

void task5(){

    //Реализовать вычисление матричных норм из списка выше (только для квадратных матриц) для задания 1.
}
