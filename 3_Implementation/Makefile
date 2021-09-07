PROJECT_NAME = all

BUILD_DIR = Build

SRC = src/studentAdd.c\
src/studentDelete.c\
src/studentDisplay.c\
src/studentModify.c\
src/studentSearch.c\

INC = -Iinc\
-Iunity

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
          EXEC = out
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all:$(BUILD_DIR)
	gcc student.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME).$(EXEC))

doc:
	make -C doc

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make clean -C doc
	rmdir $(BUILD_DIR) doc/html
