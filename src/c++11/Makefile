CXX := clang++
CXXFLAGS := -std=c++11 -Wall

SRCS := $(wildcard *.cpp)
BINS := $(SRCS:.cpp=)

.PHONY: all clean run format format-check

all: $(BINS)

%: %.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

run: $(BINS)
	@for bin in $(BINS); do \
		echo "--- Running $$bin. ---"; \
		./$$bin; \
	done

clean:
	rm -f $(BINS)

format:
	clang-format -i $(SRCS)

format-check:
	clang-format --dry-run -Werror $(SRCS)