#include <iostream> 

using namespace std;

class comej
 {
 public:
void burbuja();
void quicksort();
void insercion();
void seleccion();
 }
 
void seleccion_sort(int array1[]){
int i,j,pos_men, TAM,Menor,temp;
 for (i=0; i<TAM - 1; i++)
      pos_men = Menor(array1, TAM, i);
         temp = array1[i];
              array1[i] = array1 [pos_men];
                     array1 [pos_men] = temp;
}

void quicksort(int array2[]){
    int sup,i,j,temp,inf,sup;
     elem_div = array2[sup];
     i = inf - 1;
     j = sup;
     cont = 1;

     if (inf >= sup)
          retornar;

     while (cont)
      while (array2[++i] < elem_div);
          while (array2[--j] > elem_div);
         if (i < j)
             temp = array2[i];
              array2[i] = array2[j];
              array2[j] = temp;
        else
              cont = 0;

    temp = array2[i];
    array2[i] = array2[sup];
    array2[sup] = temp;
    OrdRap (array2, inf, i - 1);
    OrdRap (array2, i + 1, sup);
}

void insercion(int array3[]){
    int i,j,TAM,temp;

     for (i=1; i<TAM; i++)
          temp = array3[i];
          j = i - 1;
      while ( (array3[j] > temp) && (j >= 0) )
               array3[j+1] = array3[j];
               j--;
       array3[j+1] = temp;

}

void countsort(long aiArray[], long iTam){
    long i, iMax;
    long aiCount[MAXTAM], aiTemp[MAXINUM];

    memset(aiCount, 0, tamof(aiCount));
    memcpy(aiTemp, aiArray, iTam**tamof(aiArray[0]));

    for (
         i = 0; iMax=0; i < iTam; i++){
             aiCount[aiArray[i]]++;
             if(aiArray[i] > iMax )
         }
    {
        for(i=1; i<=iMax; i++)
            aiCount[i]+= aiCount[i-1];
        for(i= iTam-1; i =0;i--){
            aiArray[aiCount[aiTemp[i]]-1]=aiTemp[i];
            aiCount[aiTemp[i]]--;
        }
    }
    
}

void bucketSort(float array4[], int n)
{
   int i,j;
    for ( i = 0; i < n; i++) {
        int bi = n * array4[i]; 
        b[bi].push_back(array4[i]);
    }
 
    for (int i = 0; i < n; i++)
        sort(b[i].begin(), b[i].end());
 
    int index = 0;
    int i,j;
    for ( i = 0; i < n; i++)
        for ( j = 0; j < b[i].size(); j++)
            array4[index++] = b[i][j];
}

    int main {

        comej obj;

        obj.seleccion_sort(10);
                 cout<<"burbuja"<< array1[] <<endl;
        obj.quicksort(10);
                cout<<"quicksort"<<array2[] <<endl;
        obj.insercion(10);
                cout<<"insercion"<< array3[]<<endl;
        obj.countsort(10)
                cout<<"seleccion"<< aiArray[]<<endl;
        obj.bucketsort(10)
                cout<<"seleccion"<< aiArray[]<<endl;
       

        obj.var1(10000);
        obj.var2(10000);
        obj.var3(10000);
        obj.var4(10000);
        obj.var5(10000);

        return 0;

    }