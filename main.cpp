#include<iostream>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<time.h>
using namespace std;
int main(){
	DeleteFile("���н��.txt");//ɾ����־
	clock_t start_time=clock();//��¼��ʼʱ��
	
    HWND hWnd=GetConsoleWindow();
    ShowWindow(hWnd,SW_HIDE);//���ش���
    
	long long count=0;//��¼���д���
    while(true){
        //�������д��ĺ�̨���д���
        count++;
        malloc(1024);//�����µ��ڴ�ռ�ռ�
        if(GetAsyncKeyState(VK_TAB)&&GetAsyncKeyState(VK_ESCAPE)){
			//����TAB��ESC���˳�����
            break;//�˳�����
        }
    }
    ShowWindow(hWnd,SW_SHOW);//��ʾ����
    
    clock_t end_time=clock();//��¼����ʱ��
    ofstream f("���н��.txt");//�ڵ�ǰĿ¼�������־
    f<<"���д�����"<<count<<"��"<<endl;
    f<<"����ʱ�䣺"<<double(end_time-start_time)/CLOCKS_PER_SEC<<"s"<<endl;
    f.close();
    
	return 0;
}
