//
//  XTDayOne.hpp
//  C++学习
//
//  Created by 陈真 on 2019/4/8.
//  Copyright © 2019 cz. All rights reserved.
//

#ifndef XTDayOne_hpp
#define XTDayOne_hpp

#include <stdio.h>
#include <string>
#include <limits>
using namespace std;

// 数据类型
class DataType {
    
public:
    
    /**
     数据类型输出
     */
    void dateTypePrint(){
        cout << "type: \t\t" << "************size**************"<< endl;
        cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
        cout << "\t最大值：" << (numeric_limits<bool>::max)();
        cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
        cout << "char: \t\t" << "所占字节数：" << sizeof(char);
        cout << "\t最大值：" << (numeric_limits<char>::max)();
        cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
        cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
        cout << "\t最大值：" << (numeric_limits<signed char>::max)();
        cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
        cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
        cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
        cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
        cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
        cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
        cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
        cout << "short: \t\t" << "所占字节数：" << sizeof(short);
        cout << "\t最大值：" << (numeric_limits<short>::max)();
        cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
        cout << "int: \t\t" << "所占字节数：" << sizeof(int);
        cout << "\t最大值：" << (numeric_limits<int>::max)();
        cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
        cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
        cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
        cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
        cout << "long: \t\t" << "所占字节数：" << sizeof(long);
        cout << "\t最大值：" << (numeric_limits<long>::max)();
        cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
        cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
        cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
        cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
        cout << "double: \t" << "所占字节数：" << sizeof(double);
        cout << "\t最大值：" << (numeric_limits<double>::max)();
        cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
        cout << "long double: \t" << "所占字节数：" << sizeof(long double);
        cout << "\t最大值：" << (numeric_limits<long double>::max)();
        cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
        cout << "float: \t\t" << "所占字节数：" << sizeof(float);
        cout << "\t最大值：" << (numeric_limits<float>::max)();
        cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
        cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
        cout << "\t最大值：" << (numeric_limits<size_t>::max)();
        cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
        cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
        // << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;
        cout << "type: \t\t" << "************size**************"<< endl;
    }
    
    
    
    /**
     枚举列子
     */
    void enumDemo(){
        
        enum colors{
            blue,red,black,yellow
        }color;
        
        color = blue;
        switch (color) {
            case blue:
                cout << "blue" << endl;
                break;
            case red:
                cout << "red" << endl;
                break;
            case black:
                cout << "black" << endl;
                break;
            case yellow:
                cout << "yellow" << endl;
                break;
                
            default:
                cout << "default" << endl;
                break;
        }
    }
    
    /**
     define 用法列子

     @return 0
     */
    int defineDemo(){
#define f(x) x*x
        int a=6,b=2,c;
        c = f(a) / f(b);
        printf(" %d / %d  = %d\n",f(a),f(b),c);
        /// 36 / 4  = 36 根本原因就在于 #define 只是简单的字符串替换。
        return 0;
    }
};




class PointerClass {
    
public:
    typedef int *pint;
    #define PINT int *

    int i1 = 1, i2 = 2;
    const pint p1 = &i1; ///< p不可更改，p指向的内容可以更改,相当于 int * const p;
    const PINT p2 = &i2; ///< p可以更改，p指向的内容不可以更改,相当于 const int *p; ---- int const *p;
    
    pint s1, s2; ///< s1,s2都是int型指针
    PINT s3, s4; ///< 相当于 int *s3,s4; 只有一个是指针
    
    /**
     对指针的操作
     */
    void ThePointer(){
    
        cout << "p1:" << p1 << "  *p1:" << *p1 << endl;
        //p1 = &i2; //error C3892: 'p1' : you cannot assign to a variable that is const
        *p1 = 5;
        cout << "p1:" << p1 << "  *p1:" << *p1 << endl;
        
        cout << "p2:" << p2 << "  *p2:" << *p2 << endl;
        //*p2 = 10; //error C3892: 'p2' : you cannot assign to a variable that is const
        p2 = &i1;
        cout << "p2:" << p2 << "  *p2:" << *p2 << endl;
        
        /**
         p1:0x7ffeefbff490  *p1:1
         p1:0x7ffeefbff490  *p1:5
         p2:0x7ffeefbff494  *p2:2
         p2:0x7ffeefbff490  *p2:5
         */
    }
};




#endif /* XTDayOne_hpp */
