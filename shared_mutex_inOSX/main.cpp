//
//  main.cpp
//  shared_mutex_inOSX
//
//  Created by pebble8888 on 2015/10/20.
//  Copyright © 2015 pebble8888. All rights reserved.
//

#include <iostream>
#include "shared_mutex"

int main(int argc, const char * argv[]) {
    std::shared_timed_mutex m;
    m.lock();
    m.unlock();
    m.lock_shared();
    m.unlock_shared();
    return 0;
}
