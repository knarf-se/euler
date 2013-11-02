-- The beauty of Haskell -- A oneliner!
main = putStrLn $show$ sum [x |x <-[1..1000-1], x`mod`3==0 || x`mod`5==0]
