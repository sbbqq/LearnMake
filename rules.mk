.ONESHELL:
txt= hello,wqq
hello.txt:
	cat * >hello.txt
test:
	@echo $(txt)

