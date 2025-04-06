#include <iostream>
int main(){
    //std এখানে লাইব্রেরি আর cout এখানে লাইব্রেরির অন্তর্ভুক্ত function;
    std:: cout << "hello world!" << std:: endl;
    //Data types in C++ integer, double, string, float, bullean//
    //integer type:
    int a; //declaration আমি একটা চলক ঘোষণা করলাম
    a = 5; // assignment আমি একটা চলক এর মান নিয়োগ করলাম 

    std:: cout << a << std:: endl; // endl function নতুন লাইন যোগ করে 
    //double data type (float এর মোটা ভাই কারণ এটা float এর তুলনায় বেশি মেমোরি দখল করে, কিন্তু অধিকাংশ c++ প্রোগ্রামার double বেশি ইউজ করে)
    double b;
    b = 3.1415;
    std:: cout << b << std:: endl;
    // float data type
    float c;
    c = 3.1415;
    std:: cout << c << std:: endl;
   
    // string data type
    std:: string d;
    d = "I love you";
    std:: cout << d << std:: endl;

    //boolean data type: 
    bool e;
    e = true;
    std:: cout << e << " true" << std:: endl;
    bool f;
    f = false;
    std:: cout << f << " false" << std:: endl;




    return 0;
};
