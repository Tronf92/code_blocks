#include <iostream>

using namespace std;

int eat=0,happy=0,clean=0,angry=0;

void Eat()
{
    if(eat<5){
        eat++;
    }
    if (happy!=0){
        happy--;
    }
    if (clean!=0){
        clean--;
    }
    cout << "yum yum yum\n";

}

void Happy()
{
    if(happy<5){
        happy++;
    }
    if(eat!=0){
        eat-=eat;
    }
    if(clean!=0){
        clean--;
    }
    cout << "yey\n";
}

void Clean()
{
    if(clean<5){
        clean++;
    }
    if(eat!=0){
        eat--;
    }
    if(happy!=0){
        happy--;
    }
    cout << "Clean is:\n";
}


void Argue()
{
    if(angry<5){
        angry++;
    }
    if(happy!=0){
        happy--;
    }
    if(eat!=0){
        eat--;
    }
    if(clean!=0){
        clean--;
    }
    cout << ":(((((((((\n";
}

void Meniu()
{
    cout << "1.Feed Fluffy.\n";
    cout << "2.Play with Fluffy.\n";
    cout << "3.Wash Fluffy.\n";
    cout << "4.Argue Fluffy\n";
    cout << "0.Exit\n";

}


int main()
{
    int x,y;
    cout << "Hello.Do u want to spend time with Fluffy??" << endl << "1.Yes\n2.No\n";
    cin >> y;
    if (y==1){
            cout << "Welcome.Come and meet Fluffy\n";
        do{
            Meniu();
            cin >> x;
            switch(x){
                case 0:
                    break;
                case 1:
                    Eat();
                    cout <<"Feed lvl is:"<< eat <<endl<<endl;
                    break;
                case 2:
                    Happy();
                    cout << "Hapiness lvl is :"<<happy<< endl<<endl;
                    break;
                case 3:
                    Clean();
                    cout << "Clean lvl is:"<<clean<<endl<<endl;
                    break;
                case 4:
                    Argue();
                    cout << "Angry lvl is:"<<angry<<endl<<endl;
                    break;

                default:
                    cout << "Nothing to do here move along\n\n";
                    break;


            }
        }while(x!=0);

    }
    else{
        cout << "Ok.Buh bye!Come again soon!"<<endl;
    }

}
