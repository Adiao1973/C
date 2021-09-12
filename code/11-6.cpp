#include <stdio.h>
#include <string.h>
const int MAX_NAME_SIZE = 30;

class Student
{
    public:
        Student(char *pszName);
        ~Student();
    public:
        static void PrintfAllStudents();
    private:
        char m_name[MAX_NAME_SIZE];
        Student *next;
        Student *prev;
        static Student *m_head;
};

Student::Student(char *pszName)
{
    strcpy(this->m_name, pszName);

    // 建立双向链表，新数据从链表头部插入。
    this->next = m_head;
    this->prev = NULL;
    if(m_head != NULL)
        m_head->prev = this;
    m_head = this;
}

// 析构过程就是节点的脱离过程
Student::~Student()
{
    if(this == m_head)
    {
        m_head = this->next;
    }
    else
    {
        this->prev->next = this->next;
        this->next->prev = this->prev;
    }
}

void Student::PrintfAllStudents()
{
    for (Student *p = m_head; p != NULL; p = p->next)
    {
        printf("%s\n", p->m_name);
    }
}

Student* Student::m_head = NULL;

int main()
{
    Student studentA((char *)"AAA");
    Student studentB((char *)"BBB");
    Student studentC((char *)"CCC");
    Student studentD((char *)"DDD");
    Student student((char *)"MoreWindows");
    Student::PrintfAllStudents();
}