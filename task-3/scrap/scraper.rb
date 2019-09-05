
require "nokogiri"

require "open-uri"






 doc = Nokogiri::HTML(open("https://www.google.com/search?q=linux"))

doc.xpath('//div/div/a/div').each do |linux|

 puts linux.content





end
