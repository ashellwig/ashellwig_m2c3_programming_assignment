USER_DOCS_DIR = \
	/home/ahellwig/Documents/School/CSC160/Module-2/Programming-Assignments/Chapter2/doc/user_docs

.PHONY = all
all: user-doc-build user-doc-clean

# Doc
## Clean
user-doc-clean:
	rm -rf \
	$(USER_DOCS_DIR)/*.aux $(USER_DOCS_DIR)/*.bbl $(USER_DOCS_DIR)/*.blg \
	$(USER_DOCS_DIR)/*.idx \
	$(USER_DOCS_DIR)/*.ind $(USER_DOCS_DIR)/*.lof $(USER_DOCS_DIR)/*.lot \
	$(USER_DOCS_DIR)/*.out \
	$(USER_DOCS_DIR)/*.toc $(USER_DOCS_DIR)/*.acn $(USER_DOCS_DIR)/*.acr \
	$(USER_DOCS_DIR)/*.alg \
	$(USER_DOCS_DIR)/*.glg $(USER_DOCS_DIR)/*.glo $(USER_DOCS_DIR)/*.gls \
	$(USER_DOCS_DIR)/*.ist \
	$(USER_DOCS_DIR)/*.fls $(USER_DOCS_DIR)/*.log \
	$(USER_DOCS_DIR)/*.fdblatexmk \
	$(USER_DOCS_DIR)/*.fdb_latexmk $(USER_DOCS_DIR)/*.synctex.gz
user-doc-clean-all: user-doc-clean
	$(user-doc-clean)
	rm -rf $(USER_DOCS_DIR)/*.pdf
## Build
user-doc-build: $(USER_DOCS_DIR)/%.tex
$(USER_DOCS_DIR)/%.tex: user-doc-clean
	$(user-doc-clean)
	cd $(USER_DOCS_DIR)
	latexmk -synctex=1 -interaction=nonstopmode -file-line-error \
	-jobname=$(USER_DOCS_DIR)/main -pdf $(USER_DOCS_DIR)/main.tex
