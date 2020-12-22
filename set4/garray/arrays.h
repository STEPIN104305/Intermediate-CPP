#ifndef ARRAYS_H
#define ARRAYS_H
template<typename T>
class arrays {
  int m_len;
  int m_arr[1000];
  public:
  arrays();
  arrays(int len);
  ~arrays();
  void append(T val,int h);
  T at(int index);
  bool search(T key) const;
  T sum() const;
  T min() const;
  T max() const;
  void reverse();
  void sort();
};


#endif
