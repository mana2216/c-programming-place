// assert の条件式がtrueの場合は、n が+1されないから

#include <stdio.h>
#include <assert.h>

int main(void) {
    int n = -2;
    ++n;
    assert(n >= 0);
    
    return 0;
}