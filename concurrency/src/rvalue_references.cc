#include <stdio.h> 
#include <assert.h>
#include <string>

void print(std::string const & s) {
	printf("%s\n", s.c_str());
} 
int main() {
	// 左值引用
	int var = 42;
	int & ref = var;  // 引用，类似别名
	ref = 999;
	assert(var == 999);
	printf("%d\n", var);
	printf("%d\n", ref);

	/***
	编译错误
	non-const lvalue reference to type 'int' cannot bind to a temporary of type 'int'
	int &var_1 = 42;
	***/ 
	// 但是可以将右值绑定到 const 左值引用上
	int const & i  = 42; 

	print("hello");

	//右值引用


	return 0;
}