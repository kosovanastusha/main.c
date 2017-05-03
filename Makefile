# Project: Project1
# Makefile created by Dev-C++ 5.11

 client: make.o        # зависимость
       g++ make.c make.o -o client    # команда
 
 conn.o: make.c make.h
   g++ -c make.c -o make.o


# Задается цель -- исполняемый файл client, который зависит от объектоного файла make.o
# Правило для сборки данной цели
# В  строке задается цель make.o и файлы, от которых она зависит -- make.c и make.h.
# В  строке описывается действие по сборке цели make.o.