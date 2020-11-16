#ifndef _COLLECTIONINT_H_
#define _COLLECTIONINT_H_

using namespace std;
 
template<typename T> class Collection{
private:
    //  配列データ
    T* m_pArray;
    //  配列の長さ
    int m_length;
public:
    //  コンストラクタ
    Collection(T* array,int length) {
        m_pArray = new T[length];
        m_length = length;
        for(int i = 0; i < m_length ; i++){
            m_pArray[i] = array[i];
        }
    };
    //  デストラクタ
    ~Collection() {
        delete[] m_pArray;
    };

    //  最大値の取得
    inline T getMax() const{
        T max = m_pArray[0];
        for(int i = 0; i < m_length ; i++){
            if(max < m_pArray[i]){
                max = m_pArray[i];
            }
        }
        return max;
    };

    //  最小値の取得
    inline T getMin() const {
        T min = m_pArray[0];
        for(int i = 0; i < m_length ; i++){
            if(min > m_pArray[i]){
                min = m_pArray[i];
            }
        }
        return min;
    };

    //  成分の表示
    inline void showArray() {
        for(int i = 0; i < m_length ; i++){
            cout << m_pArray[i] << " ";
        }
        cout << " " << endl;
    };
     
};
 
#endif // _COLLECTIONINT_H_