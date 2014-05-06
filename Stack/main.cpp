//
//  main.cpp
//  interview
//
//  Created by Shaun Choe on 5/6/14.
//  Copyright (c) 2014 Shaun Choe. All rights reserved.
//

#include "Stack.h"

using namespace std;

typedef struct {
    int a;
    float b;
} IntFloat;


int main(int argc, const char * argv[])
{
	Stack<IntFloat> intStack;
    
	for(int i=0; i<10; ++i) {
        IntFloat intFloat;
        intFloat.a = i;
        intFloat.b = i / 10.0f;
        
		intStack.push(intFloat);
	}
    
	IntFloat ret;
	while( intStack.pop(&ret) ) {
		cout << ret.a << ", " << ret.b << endl;
	}
	
    
    return 0;
}


