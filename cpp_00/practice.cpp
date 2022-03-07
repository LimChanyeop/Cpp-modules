#include <iostream>

class Date {
  int year_;
  int month_;  // 1 부터 12 까지.
  int day_;    // 1 부터 31 까지.

  Date(int y, int m, int d){
    SetDate(y, m, d);
  }
 public:
  void SetDate(int year, int month, int date){
    year_ = year;
    month_ = month;
    day_ = date;  
  };
  void AddDay(int inc){
    for (int i = 0; i < inc; i++)
    {
      if (month_ == 2 && day_ == 28){
        day_ = 1;
        AddMonth(1);
      }
      else if ((month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11) && day_ == 30){
        day_ = 1;
        AddMonth(1);
      }
      else if (day_ == 31){
        day_ = 1;
        AddMonth(1);
      }
      else
        day_++;
    }
  };
  void AddMonth(int inc){
    for (int i = 0; i < inc ; i++)
    {
      if (month_ < 12)
        month_++;
      else {
        month_ = 1;
        AddYear(1);
      }
    }
  };
  void AddYear(int inc){
    year_ += inc;
  };

  void ShowDate(){
    std::cout << year_ << month_ << day_ << std::endl;
  };
};

int main() {
  
  return 0;
}