#include <iostream>

using namespace std;

class Rectangle{
    int length, width;
    public:
        Rectangle(){
            length = 2;
            width = 5;
        }
        Rectangle(int l, int w){
            length = l;
            width = w;
        }
        void area(){
            cout<< "# Area of Rectangle is: " << length * width << endl;
        }
};

 int loading(){
        char proceed;
            cout << "# Hello Abhinav! Initializing program... !\n";
            cout << "~ DO YOU WANT TO PROCEED (Y/N): ";
            cin >> proceed;
            switch (proceed)
            {
                case 'y':
                case 'Y':
                    // system("cls");
                    break;

                case 'n':
                case 'N':
                    cout << "~ Are your sure? (Y/N): ";
                    cin >> proceed;
                    if (proceed == 'y' || proceed == 'Y')
                    {

                        cout << "\n\t\t Program initialization terminated !\n";
                        return 1;
                        break;
                    }

            default:
                break;
            }

            cout << "\n";
            return 0;
 }

int main()
{
    system("cls");

    loading();

    Rectangle *obj_1, *obj_2;

    obj_1 = new Rectangle();  // Dynamic memory allocation
    obj_2 = new Rectangle(3, 10);  // Dynamic memory allocation

    obj_1->area();
    obj_2->area();
    
    return 0;
}