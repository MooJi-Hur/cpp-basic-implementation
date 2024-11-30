## multiset을 사용하게 된 배경
- 바둑판을 순회하면서 값을 반영하기 위해 오름찾순으로 정렬해야 함
- 입력을 받은 container를 미리 정렬하고자 set을 사용
- set을 사용할 경우, 십자 뒤집기를 두 번 하는 상황을 반영하지 못함
- set은 중복된 요소를 허용하지 않음
- 짝수일 때는 원상복구 되므로, 2로 나눈 나머지가 1일 때에만 바둑돌 색을 바꿈 

## set이란 무엇인가?
- Associative Containers (연관 컨테이너)의 일종
- set은 왜 미리 정렬을 하는가?
    - Ordered Associative Container는 key 순서를 기반으로 탐색
    - Binary Tree를 기반으로 함
    - 정렬을 하지 않는 경우, 해시 테이블을 기반으로 탐색
- map도 유사하나, set과 달리 key, value가 구분되어 있음
- p.909 31.4.3 Associative Containers 참고

## iterator에서 자주 쓰는 개념
- `auto` 키워드는 초기화 값을 활용하여 타입을 지정
    - p.163 6.3.6.1 The auto Type Specifier
- 반복문 사용 예시 
    - 순서값을 사용할 필요가 없는 경우 : `v.begin()`과 `v.end()`가 암묵적으로 사용됨
        ```c++
        for (auto& x:v) {
            cout << x << '\n';
        }
        ```
    - 순서값을 사용하는 경우
        ```c++
        for (auto p = v.begin(); p != v.end(); ++p) {
            if (p != v.begin() && *(p-1) == *p) 
                cout << "duplicate " << *p << '\n';
        }
        ```
- 함수 설명
    - `p = c.begin()`: 컨테이너의 첫 번째 요소를 가리키는 포인터
    - `p = c.end()`: 컨테이너에서 마지막 요소 바로 뒤 (one-past-last)를 가리키는 포인터
        - 마지막 요소를 가리키는 것이 **아니며** 종료 조건으로 사용하곤 함
    - `p = c.rbegin()`: 컨테이너의 마지막 요소를 가리키는 포인터
    - `p = c.rend()`: 컨테이너에서 역순으로 마지막 요소 바로 뒤를 가리키는 포인터, 즉 오름차순 첫 요소 바로 앞
        - 마찬가지로 요소 실제 값을 가리키는 것이 **아님**
    - `p = c.cbegin()`, `p = c.cend()`, `p = c.crbegin()`, `p = c.crend()`: 요소를 상수로 사용하는 포인터
        - 반복자의 값을 변경하지 않을 때 사용하여 안정성을 확보

- 반복문 사용 예시 및 함수 설명은 p.899 31.3.4 Iterators 참고

