CXX := clang++
CXXFLAGS := -std=c++23 -Wall -Wextra -Werror -I.
LDLIBS :=
BUILD_DIR := build

SRCS := $(wildcard *.cpp)

ifeq ($(shell uname),Darwin)
    SRCS := $(filter-out std-stacktrace.cpp,$(SRCS))
else
    $(BUILD_DIR)/std-stacktrace: LDLIBS += -lstdc++exp
endif

BINS := $(addprefix $(BUILD_DIR)/,$(SRCS:.cpp=))

.PHONY: all clean run format format-check

all: $(BINS)

$(BUILD_DIR)/%: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@ $(LDLIBS)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

run: $(BINS)
	@for bin in $(BINS); do \
		echo "=== Running $$bin ==="; \
		./$$bin; \
	done

clean:
	rm -rf $(BUILD_DIR)

format:
	clang-format -i $(SRCS)

format-check:
	clang-format --dry-run -Werror $(SRCS)