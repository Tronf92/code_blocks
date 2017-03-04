#include "CApp.h"
#include <SDL/SDL.H>
#include <stdbool.h>
CApp::CApp(){
    bool Surf_Test = NULL;
    bool Surf_Display = NULL;
    Running=true;
}

int CApp::OnExecute(){
    if(OnInit()==false){
        return -1;
    }
    SDL_Event Event;
    while (Running){
        while(SDL_PollEvent(&Event)){
            OnEvent(&Event);
        }
        OnLoop();
        OnRender();
    }
    OnCleanup();
    return 0;
}
int main(int argc,char* argv[]){
    CApp theApp;

    return theApp.OnExecute();
}

