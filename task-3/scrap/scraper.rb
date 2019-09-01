require "httparty"
require "nokogiri"
require "byebug"

def scraper

 url = "https://www.nike.com/in/"

 unparsed_site = HTTParty.get(url)

 parsed_site = Nokogiri::HTML(unparsed_site)

 byebug




end

scraper
