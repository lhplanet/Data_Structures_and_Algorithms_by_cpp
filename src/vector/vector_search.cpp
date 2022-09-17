#include <cstdlib>
#include "vector.h"


template <typename T> //����������������[lo, hi)�ڣ�ȷ��������e�����һ���ڵ����
Rank Vector<T>::search ( T const& e, Rank lo, Rank hi ) const { //assert: 0 <= lo < hi <= _size
    return ( rand() % 2 ) ? //����50%�ĸ������ʹ�ö��ֲ��һ�Fibonacci����
           binSearch ( _elem, e, lo, hi ) : fibSearch ( _elem, e, lo, hi );
}