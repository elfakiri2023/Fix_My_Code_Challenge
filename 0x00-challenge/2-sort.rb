###
#  Sort ascending function
###

data = []
ARGV.each do |arg|
    next if arg !~ /^-?[0-9]+$/

    i_arg = arg.to_i

    done = false
    i = 0
    l = data.size
    while !done && i < l do
        if data[i] < i_arg
            i += 1
        else
            data.insert(i, i_arg)
            done = true
            break
        end
    end
    data << i_arg if !done
end

puts data
