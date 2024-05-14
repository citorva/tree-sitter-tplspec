(identifier) @variable

((identifier) @constant
 (#match? @constant "^[A-Z][A-Z_]*$"))

(decorator) @function

(argument) @property

(type_block repr: (identifier) @type)
(enum_block repr: (identifier) @type)
(type) @type
(option) @type

; Literals

[
  (none)
  (true)
  (false)
] @constant.builtin

[
  (integer)
  (float)
] @number

(comment) @comment
(string) @string
(escape_sequence) @escape

[
  "!="
  "->"
  "<"
  "<="
  "<>"
  "="
  ":="
  "=="
  ">"
  ">="
  "|"
  "and"
  "in"
  "is"
  "not"
  "or"
] @operator

[
  "("
  ")"
  "["
  "]"
] @punctuation.bracket

[
  ":"
  ","
  "."
] @punctuation.delimiter

[
  "from"
  "import"
  "enum"
  "type"
  "struct"
  "condition"
  "filter"
] @keyword
