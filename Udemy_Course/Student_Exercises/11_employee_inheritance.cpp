#include <iostream>
using namespace std;

class Employee
{
    private:
        int daily_pay;
    protected:
        int multiplier;
    public:
        Employee()
        {
            daily_pay = daily_pay;
            multiplier = multiplier;
        }
        void    setDaily(int daily)
        {
            daily_pay = daily;
        }
        int     getDaily()
        {   
            return (daily_pay);
        }
};

class   FTEmployee: public Employee
{
    private:
        int annual_pay;
    public:
        void     setAnnualPay()
        {
            annual_pay = getDaily() * multiplier;
        }
        int     getAnnualPay()
        {
            return (annual_pay);
        }
        FTEmployee()
        {
            multiplier = 260;
            setDaily(200);
            setAnnualPay();
        };
};

class   PTEmployee: public FTEmployee
{
    public:
        PTEmployee()
        {
            setDaily(200);
        }
};

int main()
{
    int full_time_pay;
    int part_time_pay;
    FTEmployee ft_emp;
    PTEmployee pt_emp;    

    ft_emp = FTEmployee();
    pt_emp = PTEmployee();
    full_time_pay = ft_emp.getAnnualPay();
    part_time_pay = pt_emp.getDaily();
    cout<<"The annual pay of a full-time employee is: $"<<full_time_pay<<endl;
    cout<<"The daily pay of a part-time employee is: $"<<part_time_pay<<endl;
}