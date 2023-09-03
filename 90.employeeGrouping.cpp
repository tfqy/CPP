#include <iostream>
using namespace std;
#include <ctime>
#include <map>
#include <string>
#include <vector>

/*
实现步骤：
1. 创建10名员工，放到vector中
2. 遍历vector容器，取出每个员工，进行随机分组。
3. 分组后，将员工部门编号为key，具体员工作为value，放入到multimao容器中。
4. 分部门显示员工信息。
*/

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
  string m_Name;
  int m_Salary;
};

void createWorker(vector<Worker> &v)
{
  string nameSeed = "ABCDEFGHIJ";
  for (int i = 0; i < 10; i++)
  {
    Worker worker;
    worker.m_Name = "员工";
    worker.m_Name += nameSeed[i];

    worker.m_Salary = rand() % 10000 + 10000; // 10000~19999
    // 将员工放入到容器中
    v.push_back(worker);
  }
}

void setGroup(vector<Worker> &v, multimap<int, Worker> &m)
{
  for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
  {
    // 产生随机部门编号
    int depeId = rand() % 3; // 0 1 2
    // 将员工插入到分组中
    // key代表部门编号，value代表具体员工
    m.insert(make_pair(depeId, *it));
  }
}

void showWorkerByGourp(multimap<int, Worker> &m)
{

  // 0 A B C 1 D E 2 F G
  cout << "策划部门：" << endl;

  multimap<int, Worker>::iterator pos = m.find(CEHUA);
  int count = m.count(CEHUA); // 统计具体人数
  int index = 0;
  for (; pos != m.end() && index < count; pos++, index++)
  {
    cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
  }

  cout << "--------" << endl;
  cout << "美术部门：" << endl;
  pos = m.find(MEISHU);
  count = m.count(MEISHU); // 统计具体人数
  index = 0;
  for (; pos != m.end() && index < count; pos++, index++)
  {
    cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
  }

  cout << "--------" << endl;
  cout << "研发部门：" << endl;
  pos = m.find(YANFA);
  count = m.count(YANFA); // 统计具体人数
  index = 0;
  for (; pos != m.end() && index < count; pos++, index++)
  {
    cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
  }
}

int main()
{
  srand((unsigned int)time(NULL));

  // 1、创建员工
  vector<Worker> vWorker;
  createWorker(vWorker);

  // 2、员工分组
  // 0号、1号、2号代表不同部门
  multimap<int, Worker> mWorker;
  setGroup(vWorker, mWorker);

  // 3、分组显示员工
  showWorkerByGourp(mWorker);

  // 测试
  cout << "--------" << endl;
  cout << "测试：" << endl;
  for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
  {
    cout << "姓名：" << it->m_Name << " 工资：" << it->m_Salary << endl;
  }

  system("pause");

  return 0;
}