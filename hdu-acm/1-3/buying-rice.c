// File: buying-rice
// Created by hengxin on 17-10-17.

/**
 * Problem 1.3.3: Buying rices
 *   如果市场有m种大米, 各种大米的单价和重量已知.
 *   请问, 为了满足更多灾民的需求, 最多能采购多少重量的大米呢?
 *
 * Input:
 *   输入数据首先包含一个正整数C, 表示有C组测试用例.
 *   每组测试用例的第一行是两个整数n和m (0<n<=1000,0<m<=1000), 分别表示经费的金额和大米的种类.
 *   然后是m行数据, 每行包含2个整数p和h(1<=p<=25,1<=h<=100), 分别表示单价和对应大米的重量.
 *
 * Output:
 *   对于每组测试数据, 请输出能够购买大米的最多重量 (你可以假设经费买不光所有的大米).
 *   每个实例的输出占一行, 保留2位小数.
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_KINDS_OF_RICE 1000

typedef struct rice {
    int price;
    int weight;
    int total_price;
} rice;

rice rices[MAX_KINDS_OF_RICE];

typedef struct rice *ptr_rice;

float buying_rice(int money, ptr_rice rices, int kind_of_rice);
int compare(const void *lrice, const void *rrice);

int main(void) {
    int num_of_testcase = 0;
    scanf("%d", &num_of_testcase);

    int money = 0, kind_of_rice = 0;
    float quantity = 0.0f;
    for (int i = 0; i < num_of_testcase; ++i) {
        scanf("%d %d", &money, &kind_of_rice);
        for (int i = 0; i < kind_of_rice; ++i) {
            scanf("%d %d", &rices[i].price, &rices[i].weight);
            rices[i].total_price = rices[i].price * rices[i].weight;
        }

        qsort(rices, kind_of_rice, sizeof(*rices), compare);

        quantity = buying_rice(money, rices, kind_of_rice);
        printf("%.2f\n", quantity);
    }
}

/**
 * Precondition: @rices sorted by prices.
 */
float buying_rice(int money, ptr_rice rices, int kind_of_rice) {
    float per_quantity = 0.0f, total_quantity = 0.0f;
    char per_quantity_str[10];

    for (int i = 0; i < kind_of_rice; ++i) {
        if (rices[i].total_price <= money) {
            total_quantity += rices[i].weight;
            money -= rices[i].total_price;
        } else {
            per_quantity = (float) money / (float) rices[i].price;
            sprintf(per_quantity_str, "%.2f", per_quantity);
            per_quantity = atof(per_quantity_str);
            money -= per_quantity * rices[i].price;
            total_quantity += per_quantity;
        }
    }

    return total_quantity;
}

int compare(const void *lrice, const void *rrice) {
    return ((ptr_rice) lrice)->price - ((ptr_rice) rrice)->price;
}
