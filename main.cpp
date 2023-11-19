#include<iostream>
#include<windows.h>
#include<conio.h>
#include<fstream>
#include<time.h>
using namespace std;
int main(){
	DeleteFile("运行结果.txt");//删除日志
	clock_t start_time=clock();//记录开始时间
	
    HWND hWnd=GetConsoleWindow();
    ShowWindow(hWnd,SW_HIDE);//隐藏窗口
    
	long long count=0;//记录运行次数
    while(true){
        //在这里编写你的后台运行代码
        count++;
        malloc(1024);//申请新的内存空间空间
        if(GetAsyncKeyState(VK_TAB)&&GetAsyncKeyState(VK_ESCAPE)){
			//按下TAB和ESC键退出程序
            break;//退出程序
        }
    }
    ShowWindow(hWnd,SW_SHOW);//显示窗口
    
    clock_t end_time=clock();//记录结束时间
    ofstream f("运行结果.txt");//在当前目录下输出日志
    f<<"运行次数："<<count<<"次"<<endl;
    f<<"运行时间："<<double(end_time-start_time)/CLOCKS_PER_SEC<<"s"<<endl;
    f.close();
    
	return 0;
}
