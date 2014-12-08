//
//  main.cpp
//  ThreadPool
//
//  Created by 孙炜程 on 8/12/14.
//  Copyright (c) 2014 孙炜程. All rights reserved.
//

#include <iostream>
#include "ThreadPool.h"
using namespace std;

int main(int argc, const char * argv[]) {
    ThreadPool pool(4);
    for (int i=0; i<7; ++i) {
        auto result = pool.enqueue([](int answer){return answer;}, 42+i);
        cout << result.get() << std::endl;
    }
}
