SUBDIRS := \
src/c++11 \
src/c++14 \
src/c++17

.PHONY: all clean run format format-check $(SUBDIRS)

all: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

clean: $(SUBDIRS:%=clean-%)

$(SUBDIRS:%=clean-%):
	-$(MAKE) -C $(@:clean-%=%) clean

run: $(SUBDIRS:%=run-%)

$(SUBDIRS:%=run-%):
	$(MAKE) -C $(@:run-%=%) run

format: $(SUBDIRS:%=format-%)

$(SUBDIRS:%=format-%):
	$(MAKE) -C $(@:format-%=%) format

format-check: $(SUBDIRS:%=format-check-%)

$(SUBDIRS:%=format-check-%):
	$(MAKE) -C $(@:format-check-%=%) format-check