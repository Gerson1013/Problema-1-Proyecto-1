#include <iostream>

using namespace std;

int main()
{
int rows=10000;
float dataMatrix[rows][2];
int aux=0;
int comparisonMatrix[1][1]={0};
int days;
float auxTwo[rows][2];
int minusOneHundred=0;
int plusOneHundreed=0;
int daysWithVarations=0;
int variationMatrix[days];
int comparisonMatrixTwo[1][2]={0,50};
float variation=0;
float smallestNumbers;
float largestNumbers;
int a=0;



while(aux==0){
    
    for(int j=0;j<rows;j++){
        for(int i=0;i<2;i++){
            cout<<"Ingrese un valor:";cin>>dataMatrix[j][i];
            cout<<"["<<j<<"]"<<"["<<i<<"]"<<endl;
            
            if(j>=1&&i==1){
                if(((dataMatrix[j][0])==comparisonMatrix[0][0])&&((dataMatrix[j][1])==comparisonMatrix[0][0])){
                    days=j;
                    i=rows;
                    j=rows;
                    aux=2;
        
                }
                
                
              
                
            }
            


        
        }
    

     


    }
}

 cout<<"Numero de dias:"<<days<<endl;


cout<<"Matris de datos"<<endl;

for(int f=0;f<days;f++){
    for(int i=0;i<2;i++){
        cout<<dataMatrix[f][i]<<" ";
    }
    cout<<"\n";
    
    
}


cout<<"Matris de datos (maximo, menor)"<<endl;
for(int f=0;f<days;f++){
    for(int i=0; i<2;i++){
        if(dataMatrix[f][1]>=dataMatrix[f][0]){
            auxTwo[f][0]=dataMatrix[f][1];
            auxTwo[f][1]=dataMatrix[f][0];
            dataMatrix[f][0]=auxTwo[f][0];
            dataMatrix[f][1]=auxTwo[f][1];

        }
        if(dataMatrix[f][0]<dataMatrix[f][1]){
            
        }
    }
}


for(int f=0;f<days;f++){
    for(int i=0;i<2;i++){
        cout<<dataMatrix[f][i]<<" ";
    }
    cout<<"\n";
}

for(int a=0;a<days;a++){
    for(int i=0; i<2;i++){
        if(dataMatrix[a][i]<-100){
            minusOneHundred=minusOneHundred+1;
            
            
        }
        if(dataMatrix[a][i]>100){
            plusOneHundreed=plusOneHundreed+1;
        }
        
    }
}
for(int a=0;a<days;a++){
    if((dataMatrix[a][0]>50||dataMatrix[a][1]>50)||(dataMatrix[a][1]<0)||dataMatrix[a][1]<0){
        daysWithVarations=daysWithVarations+1;
    }
}
cout<<"Cantidad de dias con variaciones:"<<daysWithVarations<<endl;
cout<<"Numero de valores mayores  100:"<<plusOneHundreed<<endl;

cout<<"Numero de valores menores -100:"<<minusOneHundred<<endl;


do{
    variation=dataMatrix[a][0]-dataMatrix[a][1];
    variationMatrix[a]=variation;
    cout<<"Lista de variaciones:"<<variation<<endl;
    
    
    if(a==0){
        if((dataMatrix[a][0]>=comparisonMatrixTwo[0][0])&&(dataMatrix[a][0]<=50)&&(dataMatrix[a][1]>=comparisonMatrixTwo[0][0])&&(dataMatrix[a][1]<=comparisonMatrixTwo[0][1])){
            largestNumbers=variation;
            smallestNumbers=variation;
        }    
    }
    else{
        if((dataMatrix[a][0]>=comparisonMatrixTwo[0][0])&&(dataMatrix[a][0]<=50)&&(dataMatrix[a][1]>=comparisonMatrixTwo[0][0])&&(dataMatrix[a][1]<=comparisonMatrixTwo[0][1])){
            if(variation>largestNumbers){
                
                largestNumbers=variation;
            }

        }
        if((dataMatrix[a][0]>=comparisonMatrixTwo[0][0])&&(dataMatrix[a][0]<=50)&&(dataMatrix[a][1]>=comparisonMatrixTwo[0][0])&&(dataMatrix[a][1]<=comparisonMatrixTwo[0][1])){
            if(variation<smallestNumbers){
                
                smallestNumbers=variation;
        }

        }
    }
    a++;
    if(a==days){
        aux=3;
    }
    
    
}while (aux==2);

cout<<"La variacion Maxima es:"<<largestNumbers<<endl;
cout<<"La variacion Minima es:"<<smallestNumbers<<endl;

cout<<"Programa finalizado"<<endl;


    return 0;
}