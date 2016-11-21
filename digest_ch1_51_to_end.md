# 내용 정리

## Ch 1

### lesson51 :: ファイルのススメ
- ファイルを扱うにはメモリを介さなければならない。
- ファイルを使うには、ファイルを開く必要がある。
- ファイルを使った後は、きちんと閉じる。

ファイル：ディスク上にあるデータの整理、管理したもの。

> ディスク上にはデータがときにバラバラに、ときにまとまって存在しています。
それらの位置をＯＳが管理しています。ファイルには主データの他に、ＯＳから名前や更新日時などの情報が与えられています。このように、ただのデータをＯＳがユーザーに分かりやすいようにしたもの、それがファイルです。

> ファイルは**ディスク上に存在**しています。つまり**メモリ上ではありません。**
なので、その内容を利用するには、メモリに読み込んだり、メモリから書き出したりする必要があります。

```cpp
#include <iostream>

using namespace std;

int main()
{
  FILE* pFile; // pFile is a pointer for FILE* type value => FILE(structure type)

  // submit file name and flag.
  // If it cannot open file, return NULL(0)
  pFile = fopen("test.txt","w"); 
  // the character is placed on memory.
  // then, write it to file.
  fputs("ファイルに書き込んじゃえ。",pFile);
  // close file
  fclose(pFile);

  return 0;
}
```

### lesson52 :: ファイルのススメ2
- 読み出しには、読み出しための場所を用意する必要がある。
- 読み出しは r 、書き込みは w 。

```cpp

#include <iostream>

using namespace std;

int main()
{
  FILE *pFile;
  char buffer[128];

  pFile = fopen("test.txt", "r");
  fgets(buffer, 128, pFile);
  printf(buffer);
  fclose(pFile);
  return 0;
}

### **lesson53 :: テキストとバイナリ**
- ファイルは１バイト単位のデータが、**メモリと同じように**詰まっているだけ。
- ファイルの内容を変換するモードにはバイナリ、テキストの２種類がある。
- バイナリモードはファイルのByteデータをそのまま持ち出す。(しかし、OSによって改行のコードが違う)
- テキストモードでは改行が \n として読み出され、ＯＳに合わせた形で書き込まれる。
- ファイルに本質的にバイナリ、テキストの区別があるわけではない。
- バイナリーモードとテキストモードの違いはただ、改行にある。

```