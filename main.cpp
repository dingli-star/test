#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <map>
#include <unordered_map>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include<numeric>
#include <random>
#include<cmath>
#include <math.h>
#include <deque>
#include <utility>
#include "assert.h"
#include <atomic>
#include<bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <thread>
#include <condition_variable>
#include <mutex>
#include <iostream>
#include <windows.h>
#include <shared_mutex>
#include<atomic>
#include<bits/stdc++.h>

using namespace std;
void example(char acWelcome[]){
    printf("%d", sizeof(acWelcome));
    return;
}
int main(){
    char str[] = "glad to test something";
    char *p = str;
    p++;
    int *p1 = reinterpret_cast<int *>(p);
    p1++;
    p = reinterpret_cast<char *>(p1);
    printf("result is %s\n", p);
    return 0;
}
