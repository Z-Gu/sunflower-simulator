include conf/setup.conf

Z		= $(PATH):$(SUNFLOWERROOT)/tools/bin

DIRS =\
	sim\


all: sflr

sflr:
	@set -e; for dir in $(DIRS); do \
		(cd $$dir; \
			$(MAKE)\
		); \
	done

cross:
	cd $(TOOLS); $(MAKE) HOST=$(HOST) PATH=$(Z)\
	TARGET=$(TARGET) TARGET-ARCH=$(TARGET-ARCH) all;\

cross-all:
	cd $(TOOLS); $(MAKE) HOST=$(HOST) PATH=$(Z)\
	TARGET=superH TARGET-ARCH=sh-coff all;\
	cd $(TOOLS); $(MAKE) HOST=$(HOST) PATH=$(Z)\
	TARGET=msp430 TARGET-ARCH=msp430 all;\

clean:
	@set -e; for dir in $(DIRS); do \
		(cd $$dir; \
			($(MAKE) clean) \
		); \
	done; \

nuke: clean
	cd $(TOOLS); $(MAKE) nuke; \
	for dir in $(SUPPORTED-TARGETS); do ($(DEL) $(SUNFLOWERROOT)/tools/tools-lib/*/*.a); done
