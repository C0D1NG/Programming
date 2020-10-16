#include<iostream>

using namespace std;

int isfull();
int isempty();
void push(int);
void pop();
void peak();
void show();

int size;
int top, stack_array[1000];
int main() {
    int i, j, choice;
    int top = -1;
    cout << "Enter the size of stack: ";
    cin >> size;
    cout << "Enter a choice you want to pursue \n 0.exit \n 1.push \n 2.pop \n 3.peak \n 4.show\n\n";
    cin >> choice;
    if(choice == 0){
        cout << "Exit return status 0 \n";
        exit(0);
    }
    while(choice != 0){
        switch(choice){
            
            case 0:
            cout << "exit return status 0\n";
            break;

            case 1:
            if(!isfull()){
                int element;
                cout << "Enter element you want to push \n"; 
                cin >> element;
                push(element);
            }
            else{
                cout << "Stack is full! Element cant be pushed :( \n";
                show();
                exit(0);
            }
            break;

            case 2:
            if(!isempty()){
                pop();
            }
            else{
                cout << "stack is empty! Element cant be popped :( \n";
                show();
                exit(0);
            }
            break;

            case 3:
            peak();
            break;
            
            case 4:
            show();

            default:
            cout << "Please ensure you entered correct choice \n";
            break;
        }
        cout << "Enter a choice \n 0.exit \n 1.push \n 2.pop \n 3.peak \n\n";
        cin >> choice;
    }
}


int isfull(){
    if(top >= size - 1){
        return 1;
    }
    else{
        return 0;
    }
}

int isempty(){
    if(top <= -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(int element){
    top++;
    stack_array[top] = element;
    cout<<"Element " << element << " is successfully pushed\n";
}

void pop(){
    cout << "Element popped is "<< stack_array[top] << endl;
    stack_array[top] = 0;
    top--;
}

void peak(){
    cout << "Element at top is "<< stack_array[top] << endl;
}

void show(){
    cout << "Elements are \n";
    for(int i = 0; i <= top; i++){
        cout << stack_array[i] << endl;
    }
}

