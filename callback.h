// Copied from: https://github.com/rogpeppe/rog-go/blob/master/exp/callback/callback.h

void callback(void (*f)(void*), void*arg);
void runCallbacks(void);
void callbackInit(void);
void *callbackFunc(void);