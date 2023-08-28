#include <iostream>
using namespace std;

// 1构造函数的分类及调用
// 分类
// 按照参数分类：无参构造(默认构造) 和 有参构造
class Person
{
public:
  int age;

  // 构造函数  编译器默认的构造函数是无参的
  Person()
  {
    cout << "Person 无参构造函数的调用" << endl;
  }

  Person(int a)
  {
    age = a;
    cout << "Person 有参构造函数的调用" << endl;
  }

  // 拷贝构造函数
  Person(const Person &p) // 用引用的方式传进来，不能改变原来的对象的属性，所以用const
  {
    // 将传入的人人身上的所有属性，拷贝到我身上
    cout << "Person 拷贝构造函数的调用" << endl;
    age = p.age;
  }

  ~Person()
  {
    cout << "Person 析构函数的调用" << endl;
  }
};

// 调用
void test01()
{
  /*

  //1、括号法
  Person p1;       //默认构造函数调用
  Person p2(10);   //有参构造函数
  Person p3(p2);   //拷贝构造函数

  cout << "p2的年龄为：" << p2.age << endl;
  cout << "p3的年龄为：" << p3.age << endl;

  //注意事项1
  //调用默认构造函数的时候，不要加()。
  //下面这行代码，编译器会认为是一个函数的声明，像void func(),不会认为在创建对象。
  //Person p1();

  */

  /*
  *
  //2、显示法
  Person p1;  //创建一个对象，这个对象调用的是无参构造
  Person p2 = Person(10); //有参构造  将匿名对象起了一个名称p2
  Person p3 = Person(p2); //创建一个对象，这个对象调用的是拷贝构造

  Person(10); //匿名对象 特点：当前行执行结束后，系统会立即回收匿名对象
  cout << "aaaa" << endl;  //通过打印时机可以得到：test还没结束，就运行析构函数了

  //注意事项2
  //不要利用拷贝构造函数 初始化匿名对象  编译器认为 Person(p3) 等价于 Person p3，
  //编译器会认为这是一个对象的声明，而上面已经有一个p3了，Person p3 = Person(p2);因此编译器认为重定义了
  Person(p3);

  */

  // 3、隐式转换法
  Person p4 = 10; // 相当于 写了 Person p4 = Person(10);  调用有参构造
  Person p5 = p4; // 调用拷贝构造
}
int main()
{
  test01();
  return 0;
}