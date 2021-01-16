#!/usr/bin/guile -s
!#

(newline)
(newline)
(display "Hello World")
(newline)
(display (+ 2 3 4 5 5))
(newline)

(define (square x)
  (* x x) )


(define val 5)
(display (square 5) )
(newline)


(define (circleArea r)
  (* 3.14159 (square r) ) )


(define (ringArea r1 r2)
  (- (circleArea r2) (circleArea r1) ) )

(display (circleArea 1) )
(newline)
(display (circleArea 9))
(newline)
(display (circleArea 15))
(newline)
(display "ring: ")
(display (ringArea 3 10) )
(newline)
(define (sum-of-squares a b)
  (+ (square a) (square b) ) )

(display (sum-of-squares 98 123))
(newline)


;;Define a procedure that takes three numbers as arguments and returns the sum of the squares of the two larger numbers. 


(define (isgreater a b)
  (cond ((> a b) a)
		((< a b) b)
		((= a b) a)
		))

(display (isgreater 4 5))
(newline)


(define (greaterSquare a b) 
  (square (isgreater a b)))

(display (greaterSquare 7 9))
(newline)

(define (abs x)
  (cond ((> x 0) x)
		(else (- x))))

(define (neg x)
  (- x))


(display (neg 7))
(newline)
(display (abs (neg 7)))
(newline)

(define (return-square-of-two-largest x y z) 
  (cond ((and (> x y) (> z y)) (sum-of-squares x z))
		((and (> x z) (> y z)) (sum-of-squares x y))
		((and (> y x) (> z x)) (sum-of-squares y z))))

(display (return-square-of-two-largest 11 24 32))
(newline)
(display (return-square-of-two-largest 1 3 5))

(newline)


  

