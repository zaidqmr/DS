#include<stdio.h>
#include"LinkedList.h"
void IntersectionLL(struct Node **START1,struct Node **START2){
    struct Node *p,*q,*START;
    START=NULL;
    p=*START1;
    q=*START2;
    while(p!=NULL && q!=NULL){
        if(p->info<q->info){

            p=p->Next;
        }
        else{
            if(p->info==q->info){
                InsEnd(&START,p->info);
                q=q->Next;
                p=p->Next;
            }
            else{

                q=q->Next;
            }
        }
    }

    Traverse(&START);
}
int main(){
    struct Node *START1,*START2;
    START1=NULL;
    START2=NULL;
    int arr1[5] = {20,40,30,10,5};
    int arr2[6] = {35,34,12,20,30,23};
    for(int i=0;i<5;i++){
        OrderedInsertion(&START1,arr1[i]);
    }
    for(int i=0;i<6;i++){
        OrderedInsertion(&START2,arr2[i]);
    }
    IntersectionLL(&START1,&START2);
}
