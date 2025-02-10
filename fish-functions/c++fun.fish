function c++run --description 'compilate and start c++ application'
        g++ -g (find $argv -type f -iregex ".*\.cpp") -o $argv/main && ./$argv/main
end