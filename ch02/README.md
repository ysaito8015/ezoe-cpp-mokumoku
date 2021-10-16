# Ch.02 C++ の実行
## かんたんな１つのソースファイルからなるプログラムの実行

### サンプルコード


```c++
#include <iostream>

int main()
{
	std::cout << "hello";
}
```

### コンパイル

```shell
$ g++ -o hello ./hello.cpp
# or
$ clang++ -o hello ./hello.cpp
```


## GCC: C++ コンパイラ

`g++ その他のオプション -o 出力するファイル名 ソースファイル名...`

### コンパイラオプション

- `-std=` オプション
    - C++ の規格を選択するオプション
    - `-std=c++17`
- `-Wall` オプション
    - 警告メッセージのほぼ全てを有効にする
- `--pedantic-errors` オプション
    - C++ の規格を厳格に守るオプション
- これ以外は `man gcc`

- e.g.,


```shell
$ g++ -std=c++17 -Wall --pedantic-errors -o 出力ファイル名 入力ファイル名
```

### ヘッダファイルの省略
- #include ディレクティブ
    - プリプロセッサの一部


```c++
#include <cstddef>
#include <limits>
#include <climits>
#include <cfloat>
#include <cstdint>
#include <cstdlib>
#include <new>
#include <typeinfo>
#include <exception>
#include <initializer_list>
#include <cstdalign>
#include <stdexcept>
#include <cassert>
#include <cerrno>
#include <system_error>
#include <string>
#include <exception>
#include <initializer_list>
#include <cstdalign>
#include <stdexcept>
#include <cassert>
#include <cerrno>
#include <system_error>
#include <string>

#if __has_include(<string_view>)
#   include <string_view>
#endif

#include <array>
#include <deque>
#include <forward_list>

#if __has_include(<string_view>)
#   include <string_view>
#endif

#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <list>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <iterator>
#include <algorithm>
#include <cfenv>
#include <random>
#include <numeric>
#include <cmath>
#include <iosfwd>
#include <iostream>
#include <ios>
#include <streambuf>
#include <istream>
#include <ostream>
#include <iomanip>
#include <sstream>
#include <fstream>

#if __has_include(<filesystem>)
#   include <filesystem>
#endif

#include <cstdio>
#include <cinttypes>


#include <regex>
#include <atomic>
#include <thread>
#include <mutex>
#include <shared_mutex>
#include <condition_variable>
#include <future>

using namespace std::literals ;
```


- `all.h` を指定してコンパイルする


```shell
$ g++ -include all.h -o program main.cpp
```


- コンパイル時間の測定
    - `time` コマンド
- ヘッダファイルをコンパイルする


```shell
$ g++ -std=c++17 -Wall --pedantic-errors -x c++-header -o all.h.gch all.h
```


```shell
$ time g++ -std=c++17 -Wall --pedantic-errors -include all.h -o program hello.cpp 
g++ -std=c++17 -Wall --pedantic-errors -include all.h -o program hello.cpp \
5.66s user 0.36s system 89% cpu 6.715 total

$ time g++ -std=c++17 -Wall --pedantic-errors -o hello hello.cpp 
g++ -std=c++17 -Wall --pedantic-errors -o hello hello.cpp \
1.33s user 0.19s system 69% cpu 2.175 total

# ヘッダファイルをコンパイルする
$ g++ -std=c++17 -Wall --pedantic-errors -x c++-header -o all.h.gch all.h

$ time g++ -std=c++17 -Wall --pedantic-errors -include all.h -o program hello.cpp
g++ -std=c++17 -Wall --pedantic-errors -include all.h -o program hello.cpp \
0.95s user 0.28s system 98% cpu 1.243 total
```


## Makw ビルドシステム
