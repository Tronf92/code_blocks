#define DIMENSIUNE 10

class Stiva{
    public:
        Stiva();
        Stiva(int dim);
        ~Stiva();

        int top();
        int pop();
        void push(int i);
    private:
        int *items;
        int sp;
};
