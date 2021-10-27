### 多项式的加法和乘法

头文件 **Polynomal.h**\\
测试文件 **Test.cpp**

#### 第二次commit（多项式的加法）
*未通过windows测试*(已解决)

```c++
Polynomal operator + (Polynomal& op1,Polynomal& op2){
    Polynomal res;
    Term *t1,*t2,*t3,*rest;
    float temp;
    t3 = res.first;
    t1 = op1.getHead()->link;
    t2 = op2.getHead()->link;
    while(t1 != NULL && t2 != NULL){
        if(t1->exp == t2->exp){
            temp = t1->coef + t2->coef;
            if(temp>0.001||temp<0.001){
                t3->insertAfter(temp,t1->exp);
            }
            t1 = t1->link;
            t2 = t2->link;
        }else if(t1->exp<t2->exp){
            t3 = t3->insertAfter(t1->coef,t1->exp);
            t1 = t1->link;
        }else{
            t3 = t3->insertAfter(t2->coef,t2->exp);
            t2 = t2->link;
        }
    }
    if(t1->link != NULL) rest = t1;
    else rest = t2;
    while(rest != NULL){
        t3 = t3->insertAfter(rest->coef,rest->exp);
        rest = rest->link;
    }
    return res;
};

#### 所有的插入操作必须加上link=NULL
最终完成了多项式的加法和乘法
