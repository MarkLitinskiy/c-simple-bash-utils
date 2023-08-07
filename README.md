# Simple Bash Utils

Project date: 10-2022

Development of Bash text utilities: cat, grep.

### cat Usage

Essentially, the task of the cat command is very simple - it reads data from a file or standard input and displays it on the screen. That's all the utility does. But you can do a lot with its options and output redirection operators.

`cat [OPTION] [FILE]...`

### cat Options

| No. | Options | Description |
| ------ | ------ | ------ |
| 1 | -b (GNU: --number-nonblank) | numbers only non-empty lines |
| 2 | -e implies -v (GNU only: -E the same, but without implying -v) | but also display end-of-line characters as $  |
| 3 | -n (GNU: --number) | number all output lines |
| 4 | -s (GNU: --squeeze-blank) | squeeze multiple adjacent blank lines |
| 5 | -t implies -v (GNU: -T the same, but without implying -v) | but also display tabs as ^I  |

### grep Usage

Grep gives you a lot of options for filtering text. You can select lines from text files, filter command output, and even search for files in the file system that contain certain lines. The utility is very popular because it is already pre-installed in almost all distributions.

`grep [options] template [file_name]`

### grep Options

| No. | Options | Description |
| ------ | ------ | ------ |
| 1 | -e | pattern |
| 2 | -i | Ignore uppercase vs. lowercase.  |
| 3 | -v | Invert match. |
| 4 | -c | Output count of matching lines only. |
| 5 | -l | Output matching files only.  |
| 6 | -n | Precede each matching line with a line number. |

## Project build
The project is build through a Makefile in the src/cat or src/grep folder with the command `make build`

## Project Description

- The programs are developed in C11 standard C language using gcc compiler   
- Programs represent an executable file with command line arguments
- The programs are assembled using Makefile with appropriate targets: s21_cat, s21_grep  
- The program is developed in accordance with the principles of structural programming