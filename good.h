#ifndef GOOD_H
#define GOOD_H
struct Good    //商品结构体
{
    int group_number;//集团编号
    char group_name[10];//集团名称
    int number;  //商品编号
    char name[10];//商品名称
    char place[10]; //商品产地
    int kind;//商品种类编号，用种类编号给商品分类，编号含义请见文档
    double cost; //商品的进价
    double price;//商品的售价
    int   sale_number;//商品的销售数量
    struct Good *next;
};
struct Good * Increase_good (struct Good * head); //增添商品的信息
void Show_Good(struct Good *head);   //显示链表中商品的信息
void searchGood(struct Good *head);  //查询商品信息的功能函数
struct Good* Deletegood(struct Good *head);  //删除指定商品的信息
struct Good * modifygood(struct Good *head);  //修改商品的信息
void sale_sum(struct Good * head); //统计商品的信息
void storage_good (struct Good * head); //保存商品信息
struct Good *open_good(struct Good *head);
#endif // GOOD_H
// add code annotation
