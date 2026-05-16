### Note

Right now this markdown editor sucessfully parse headings, unordered lists, and code blocks. Now as the project growws i feeling more like handling edge cases than praticing C fundamentals. So i decided to move on to **Network Programming in C**.

# Markdown Editor

A markdown parser built around important parsing concepts — line-by-line parsing,
inline parsing, nested structures, and state machines. Inspired by [cmark](https://github.com/commonmark/cmark).

---

## Input

| Source | Behaviour |
|--------|-----------|
| File   | Read from a `.md` file passed as a command-line argument |
| Stdin  | Read from stdin when no file argument is given |

---

## Output

| Flag       | Behaviour                       |
|------------|---------------------------------|
| *(default)*| Print generated HTML to terminal |
| `-o <file>`| Write generated HTML to a file  |

---

## Supported Markdown Features

### Block-level Elements *(one per line)*

| Syntax         | Element          |
|----------------|------------------|
| `# Heading`    | Heading (h1–h3)  |
| Plain text     | Paragraph        |
| Two spaces     | Line Breaks      |
| `- item`       | Unordered list   |
| `1. item`      | Ordered list     |
| `> text`       | Blockquote       |
| ` ``` `        | Code block       |
| `---`          | Horizontal rule  |

### Inline Elements *(inside a line)*

| Syntax            | Element      |
|-------------------|--------------|
| **bold**          | Bold         |
| `*text*`          | Italic       |
| `` `code` ``      | Inline code  |
| `[text](url)`     | Link         |
| `![alt](url)`     | Image        |

### Tables

Standard pipe-delimited tables with optional alignment rows.

---

## Learning Value by Feature

| Feature                  | Parsing Concept                                          |
|--------------------------|----------------------------------------------------------|
| Headings & paragraphs    | Basic line-by-line parsing                               |
| Lists                    | Tracking state across multiple lines                     |
| Code blocks              | Multi-line state; ignoring all other patterns inside     |
| Inline bold / italic     | Parsing within a line; finding matching delimiter pairs  |
| Links & images           | Parsing structured `[…](…)` patterns                    |
| Tables                   | Most complex — columns, alignment rows, multiple rows    |
