# frozen_string_literal: true

require 'victor'

def make_background(file_name, colors)
  svg = Victor::SVG.new(width: 1280, height: 1280)

  svg.build do
    (1..64).each do |i|
      (1..64).each do |j|
        rect x: i * 12, y: j * 12, width: 12, height: 12, rx: 1,
             fill: colors[colatz_count(i * j + 1 + i + j) % colors.length]
      end
    end
  end

  svg.save file_name
end

def colatz_count(number)
  count = 0

  loop do
    if number.even?
      number /= 2
    else
      number = number * 3 + 1
    end

    count += 1

    return count if number == 1
  end
end

# cf. https://www.colordic.org/colorscheme/4070
make_background('background', %w[#eddc44 #ede8be #ede48e #eddf5f #edda2f #edd500])
