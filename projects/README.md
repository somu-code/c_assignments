### A markdown editor with important parsing concepts - line by line parsing, inline parsing, nested structures, state machines. cmark is the inspiration here.
## Requirments
### Input
- Read from .md file passed as a command line argument.
- Read from stdin if no file is given.
### Output
- By default print HTML to terminal.
- With -o flag write to an HTML file.
## Markdown features to support
### Block level elements - one per line:
- Headings - #, ##, ###
- Paragraphs - plain text
- Unordered lists - - item
- Ordered lists - 1. item
- Blockquotes - > text
- Code blocks - triple backtick
- Horizontal rule - ---
### Inline elements - inside a line:
- Italic - *text*
- Inline code - `code`
- Links - [text](url)
- Images - ![alt](url)
### Tables:
# The learning value from each feature
Headings, paragraphs - Basic line by line parsing
Lists - Tracking state across multiple lines
code blocks - Multi line state, ignoring other patterns inside
Inline bold/italic - Parsing within a line, finding matching pairs
Links and images - Parsing structured patterns []()
Tables - Most complex - columns, alignment, multiple rows
