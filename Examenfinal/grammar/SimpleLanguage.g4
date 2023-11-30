grammar SimpleLanguage;

program: statement+;

statement: ifStatement
    | expression
    | fibonacciCall // Nueva regla para calcular Fibonacci
    ;

ifStatement: 'IF' expression 'THEN' statement ('ELSE' statement)?;

expression: NUMBER
    | '(' expression ')' // Para agrupar expresiones
    | expression '+' expression
    | expression '-' expression
    | expression '*' expression
    | expression '/' expression
    ;

fibonacciCall: 'FIB' '(' NUMBER ')' ; // Regla para la llamada a Fibonacci

NUMBER: ('0'..'9')+;

WS: [ \t\r\n]+ -> skip; // Ignorar espacios en blanco

