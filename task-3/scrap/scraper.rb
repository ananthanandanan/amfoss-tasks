require "httparty"
require "nokogiri"
require "byebug"

def scraper

 url = "https://en.wikipedia.org/wiki/Morgan_Freeman"

 unparsed_site = HTTParty.get(url)

 parsed_site = Nokogiri::HTML(unparsed_site)

 films = parsed_site.css('div.div-col')
 films.each do |films|

   film = {


names: films.css('li').text

   }

   byebug

 end










end

scraper
