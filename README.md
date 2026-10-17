# 창의적 소프트웨어 프로그래밍 실습

한양대학교 컴퓨터소프트웨어학부 **창의적 소프트웨어 프로그래밍** 실습 자료를 정리한 저장소입니다.  
설웅 교수님의 실습 강의 자료를 바탕으로 C와 C++의 메모리 구조, 객체지향 프로그래밍, 빌드 시스템, STL을 단계적으로 학습합니다.

## 학습 범위

- C 포인터, 배열, 구조체
- C/C++ 동적 메모리 할당과 메모리 구조
- C++ 표준 입출력, `std::string`, 함수 오버로딩, 기본 인자
- 포인터와 참조자, 함수의 out-parameter
- 컴파일과 링크, 헤더/소스 파일 분리
- `Makefile`, CMake, 명령행 인자, 파일 입출력
- 클래스, 멤버 함수, 생성자/소멸자, `this` 포인터
- 템플릿과 STL 컨테이너·알고리즘

## 디렉터리 구조

각 디렉터리는 강의 자료의 주차와 실습 번호에 대응합니다.

| 디렉터리 | 주제 | 실습 자료 |
| --- | --- | --- |
| `week02_1` | C 포인터와 배열 | [Pointers](<week02_1/02. lab1-pointers_4P.pdf>) |
| `week02_2` | C `struct`, 구조체 포인터와 배열 | [struct](<week02_2/02. lab2-struct_4P.pdf>) |
| `week03_1` | C++ `iostream` 입출력 | [iostream](<week03_1/03. lab1-c++_4P.pdf>) |
| `week03_2` | `std::string`, 함수 오버로딩, 기본 인자 | [string & overloading](<week03_2/03. lab2-c++_4P.pdf>) |
| `week04_1` | 프로세스 메모리 구조, 동적 메모리 할당 | [malloc / new / delete](<week04_1/04. lab1-malloc_4P.pdf>) |
| `week04_2` | C++ 참조자와 포인터 기반 함수 호출 | [references](<week04_2/04. lab2-references_4P.pdf>) |
| `week05_1` | 컴파일, 링크, 헤더와 소스 파일 분리 | [compilation & linking](<week05_1/05. lab1-compile_4P.pdf>) |
| `week05_2` | Makefile, CMake, 명령행 인자, 파일 입출력 | [Make & command-line arguments](<week05_2/05. lab2-compile_4P.pdf>) |
| `week06_1` | 클래스, 접근 지정자, 멤버 함수 | [class](<week06_1/06. lab1-class_4P.pdf>) |
| `week06_2` | 생성자, 소멸자, 멤버 초기화 리스트, `this` | [constructors & destructors](<week06_2/06. lab2-class_4P.pdf>) |
| `week07_1` | 템플릿과 STL 컨테이너·반복자·알고리즘 | [STL 1](<week07_1/07. lab1-STL.pdf>) |
| `week07_2` | STL 정렬, 비교 함수, `set`, `map`, 문자열 | [STL 2](<week07_2/07. lab2-STL.pdf>) |

## 실습 진행 방법

1. 해당 주차 디렉터리로 이동합니다.
2. PDF의 예제와 요구사항을 확인합니다.
3. 소스 코드를 작성하고 컴파일 경고와 실행 결과를 확인합니다.
4. 필요한 경우 `gdb`로 변수와 메모리 주소를 확인합니다.
5. 실습이 끝나면 변경 사항을 커밋하고 GitLab에 push합니다.

## 기본 명령어

### C/C++ 컴파일

```bash
# C
gcc example01.c -o example01 -g

# C++
g++ example01.cpp -o example01

# 여러 소스 파일을 별도로 컴파일한 뒤 링크
g++ -c main.cpp add.cpp
g++ -o example01 main.o add.o
```

가능하면 경고를 활성화해 작성한 코드의 문제를 일찍 확인합니다.

```bash
g++ -Wall -Wextra -std=c++17 example01.cpp -o example01
```

### 디버깅

```bash
gdb ./example01

# gdb 내부 명령어 예시
(gdb) break main
(gdb) run
(gdb) next
(gdb) print variable
(gdb) info local
```

포인터 실습에서는 `print`, `print &variable`, `x/20b address` 등을 이용해 실제 메모리 값을 확인할 수 있습니다.

### Makefile과 CMake

```bash
# Makefile 사용
make

# CMake 사용
mkdir -p build
cd build
cmake ..
make
```

## GitLab 제출 흐름

실습 시작 전 최신 내용을 받고, 실습 후 해당 주차의 파일만 커밋하여 push합니다.

```bash
cd Projects/<your-project>
git pull origin main
cd weekXX_X

# 실습 파일 확인 후 추가
git add *.cpp *.h Makefile
git commit -m "submission of XX-X"
git push origin main
```

실습 자료에 따라 제출 대상이 다를 수 있으므로, 각 주차의 PDF에 안내된 파일 확장자와 파일명을 반드시 확인합니다. 특히 `week05_1`, `week05_2`에서는 파일명이 `example0x.cpp` 형식인지 확인해야 합니다.

## 실습 체크리스트

- [ ] 올바른 주차 디렉터리에서 작업했는가?
- [ ] PDF에서 요구한 파일명과 함수명을 지켰는가?
- [ ] 컴파일 오류와 경고를 해결했는가?
- [ ] 정상 입력뿐 아니라 경계 입력도 확인했는가?
- [ ] 동적 메모리를 올바른 방식으로 해제했는가?
- [ ] 실행 결과가 예시와 일치하는가?
- [ ] 필요한 파일만 Git에 추가했는가?
- [ ] 커밋 후 GitLab에 push했는가?

## 참고

- 이 저장소의 PDF는 실습 설명 및 참고 자료입니다.
- 과제의 정확한 요구사항, 파일명, 제출 대상은 해당 주차 PDF의 안내를 우선합니다.
- 실습 코드는 각 주차 디렉터리 안에서 작성하고, 루트 디렉터리에는 공통 문서만 두는 것을 권장합니다.

