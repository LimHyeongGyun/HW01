#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    int* arr = 0;

    int sum = 0;
    int average = 0;

    int sortNum = 0;
    int temp = 0;


    ////////////배열에 숫자 입력하고 합과 평균 구하기////////////

    //사용할 배열의 길이를 입력하기
    cout << "입력받을 숫자의 갯수를 입력하세요.: ";
    cin >> size;

    //입력받은 길이로 배열 생성하기
    arr = new int[size];


    //배열에 저장할 숫자 입력받기
    for (int i = 0; i < size; i++) {
        cout << "입력할" << i + 1 << "번째 숫자를 입력해 주세요.";
        cin >> arr[i];
    }

    //배열의 요소 합 구하기
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    //배열의 요소 평균 구하기
    average = sum / size;

    //결과 출력
    cout << "배열에 저장된 숫자들의 합계:" << sum << endl;
    cout << "더한 숫자들의 평균:" << average << endl;

    ////////////배열 정렬하기////////////

    //입력한 숫자 배열 정렬하기
    cout << "입력한 배열의 정렬 방식을 숫자로 입력해 주세요(오름차순: 1, 내림차순: 2) : ";
    cin >> sortNum;

    //배열 정렬 - 버블정렬
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < i; j++) {
            //오름차순 정렬
            if (sortNum == 1) {
                if (arr[i] < arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            //내림차순 정렬
            else if (sortNum == 2) {
                if (arr[i] > arr[j]) {
                    temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }

    //메모리 할당 해제
    delete[] arr;

    return 0;
}