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

make_background('background', %w[#fff5ee #ffe1cc #ffc499 #ffa666 #ff8833 #ff6a00])