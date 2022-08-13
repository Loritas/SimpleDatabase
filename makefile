VPATH = lib core

.PHONY: tips clean build msg

msg:
	@echo "usage: make build"

build: tips SimpleDatabase clean

SimpleDatabase:  main.o reader.o
	@gcc -o $@ $^ -Wall

main.o: main.c
	@gcc -c $<

reader.o: reader.c reader.h 
	@gcc -c $<

clean:
	@echo "编译完成, 正在清理杂项"
	@rm -f *.o *.gch
	@echo "清理已完成, 程序工作结束"

tips: 
	@echo "编译中..."
	@echo "制作者: Loritas / lorias@foxmail.com"
