# Makefile for the Paper

SRC=$(shell ls *.tex styles/*.sty *.bib sections/*.tex)

default: pdf

#web: webversion.pdf

pdf: acsac09-full.pdf

ps: acsac09-full.ps

acsac09-full.ps: $(SRC)
	latex main
	bibtex main
	latex main
	latex main
	dvips -o main.ps main.dvi
	rm -f *.cb *.bak *.bbl *.blg *.log *.aux *.out sections/*.bak

acsac09-full.pdf: $(SRC)
	pdflatex main
	bibtex main
	pdflatex main
	pdflatex main
	mv main.pdf acsac09-full.pdf
	rm -f *.cb2 *.cb *.bak *.bbl *.blg *.log *.aux *.out sections/*.bak

clean:
	rm -f *.cb *.bak *.bbl *.blg *.log *.aux *.ps *.dvi *.pdf *.out sections/*.bak
