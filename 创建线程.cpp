#include <stdio.h>
#include <time.h>
#include<windows.h>


DWORD WINAPI show(LPVOID p);
int main(){
	static HANDLE Hands;
	DWORD one;
    int a996=996;

    Hands= CreateThread(NULL,0,show,&a996,0,&one);
    Sleep(5000);
    CloseHandle(Hands);
    ExitThread(0);
    return 0;
} 

DWORD WINAPI show(LPVOID p){  //任意类型 LPVOID 
    int* a=(int*)p;
    printf("%d",*a);
    printf("\nThis is RUning!!!!"); 
	return 1;
}

