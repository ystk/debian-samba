# simple makefile wrapper to run waf

PYTHON?=python
WAF_BINARY=$(PYTHON) ./buildtools/bin/waf
WAF=WAF_MAKE=1 $(WAF_BINARY)

all:
	$(WAF) build

install:
	$(WAF) install

uninstall:
	$(WAF) uninstall

test:
	$(WAF) test $(TEST_OPTIONS)

help:
	@echo NOTE: to run extended waf options use $(WAF_BINARY) or modify your PATH
	$(WAF) --help

subunit-test:
	$(WAF) test --filtered-subunit $(TEST_OPTIONS)

testenv:
	$(WAF) test --testenv $(TEST_OPTIONS)

quicktest:
	$(WAF) test --quick $(TEST_OPTIONS)

dist:
	touch .tmplock
	WAFLOCK=.tmplock $(WAF) dist

distcheck:
	touch .tmplock
	WAFLOCK=.tmplock $(WAF) distcheck

clean:
	$(WAF) clean

distclean:
	$(WAF) distclean

reconfigure: configure
	$(WAF) reconfigure

show_waf_options:
	$(WAF) --help

# some compatibility make targets
everything: all

testsuite: all

check: test

torture: all

# this should do an install as well, once install is finished
installcheck: test

etags:
	$(WAF) etags

ctags:
	$(WAF) ctags

# this allows for things like "make bin/smbtorture"
bin/%:: FORCE
	$(WAF) --targets=$@
FORCE:

pydoctor:
	$(WAF) pydoctor

pep8:
	$(WAF) pep8
