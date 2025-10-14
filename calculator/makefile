# コンパイラ
CC = gcc

# コンパイルオプション
CFLAGS = -Wall -g

# 実行ファイル名
TARGET = myprogram

# ソースファイル
SRCS = calculator.c opration.c

# オブジェクトファイル
OBJS = $(SRCS:.c=.o)

# デフォルトターゲット（makeと入力した時に最初に実行されるターゲット）
all: $(TARGET)

# ターゲット: 依存関係
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# オブジェクトファイル生成
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# クリーンターゲット
clean:
	rm -f $(TARGET) $(OBJS)
