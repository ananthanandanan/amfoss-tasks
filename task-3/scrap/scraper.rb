
require "nokogiri"

require "open-uri"






 doc = Nokogiri::HTML(open("https://www.google.com/search?ei=H65vXcmjJ8qNvQSx_ZqYBQ&q=linux&oq=linux&gs_l=psy-ab.3..35i39l2j0i67l8.8029469.8031744..8032140...1.3..0.1199.1199.7-1......0....1..gws-wiz.....10..0i71.jtEbAY6-cck&ved=0ahUKEwiJr6nVlbfkAhXKRo8KHbG-BlMQ4dUDCAs&uact=5"))

doc.xpath( doc.xpath("(//div/a/div[@class'ellip'])[1]")).each do |linux|

 puts linux.content





end
