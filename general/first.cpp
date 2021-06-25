//
// Created by 张泉 on 2021/6/25.
//
#include <iostream>
int main() {
    std::cout << "请输入数字1 和 数字2 " << std::endl;
    bool c;
    int v1 = 0, v2 = 0;
    std::cout << "数字1：";
    std::cin >> v1;
    std::cout << "数字2：";
    std::cin >> v2;
    std::cout << "两数之和为：" << v1 + v2 << std::endl;

    return 0;
}