# 登录验证器

为了给所有我的网站增加一个统一的API接口。
方便管理所有的在线程序

# 目录结构
```
└───src
    ├───3rd    ------------------> 第三方库
    │   ├───dpool
    │   ├───filesystem
    │   ├───httplib
    │   ├───nlohmann
    │   └───spdlog
    └───func   ------------------> 自己的功能函数
```
`main.cpp`为整个程序的启动文件

`src/3rd`为三方库的存放目录

`src/func`为自己实现的功能

## 使用

编译

```shell
make
```

运行

```shell
make run  
# or
./main
```

# API
http://www.example.com/$func?$type=$body


