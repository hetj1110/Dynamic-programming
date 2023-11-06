@count = 0;

def initialize()
   sum()
end

def sum()
    if count == 500
        return;
    end
    puts "1\n";
    @count++
    sum();
end