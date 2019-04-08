//
//  main.cpp
//  C++学习
//
//  Created by 陈真 on 2019/4/8.
//  Copyright © 2019 cz. All rights reserved.
//

#include <iostream>
#include "day01/XTDayOne.cpp"

int main(int argc, const char * argv[]) {
    // insert code here...

    ///< 数据结构相关
    DataType dtype;
    dtype.dateTypePrint();
    dtype.enumDemo();
    dtype.defineDemo();
    
    ///< 指针
    PointerClass pointer;
    pointer.ThePointer();
    
    return 0;
}
