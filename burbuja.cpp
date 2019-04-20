#include <stdio.h>
#include<iostream>
#include <conio.h>
#define SIZE 5
 int main() 
 {
     int vector[SIZE];
     int i,j,temp; // temp realizaea los intercabios 
     printf("ingre los numeros q desee ordenar \n",SIZE);
     for(i=0;i<SIZE;i++)//para  guardar los datos q le usario ingrese 
 {
     printf("%d:",i+1);//cuantas ves arecorido el contador ,100pre va imprimer lo q tenga y mas +1(2,3ect)
      
      scanf("%d",&vector[i]);// guardmaos el  numero q inserto el usaurio en la varioable vector .q asuves va abaleer lo qtenga el contador 
      printf("\n");
      }
      for(i=1;i<SIZE;i++) // a ki aplicamos el metodo de la burbuja 
      {
        for(j=0;j<SIZE-i;j++)  //j = i es por cada ves el primero se ejecute el se 2do se ejecutar tantos espacio cm tenga los numero a ordar a partir de los numeor q tanga i     
        {
              if( vector[j+1]<vector[j])
              {//si el valor es mayor al suguiente ,se cambia 
              temp=vector[j+1];// aki se efectua el intercambio 
              vector[j+1]=vector[j];// 1re se igual el valor en el q estmos  ,luego el primero toma el valor del oro y la pasaremos el valor de la temporal al 2do
              
              vector[j]=temp;
              }
              }
              }
              printf("los numero en orden son :\n");
              for(i=0;i<SIZE;i++)// este for imprime los numero ya ordenodos 
              {
                                    printf("%d ",vector[i]);   
                                    
             }        
             printf("\n");
             getch();
             }                   
