(identifier) @variable

((identifier) @constant
 (#match? @constant "^[A-Z][A-Z_]*$"))

(decorator) @function

(argument) @property

(type_block repr: (type) @type)
(enum_block repr: (type) @type)
(type) @type

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

[
  "map"
  "array"
  "tuple"
  "boolean"
  "integer"
  "natural"
  "none"
  "string"
] @type.builtin
