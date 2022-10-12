import requests

# Put your api key and base url 
API_KEY = "" 
BASE_URL = ""

city = input("Enter a city name: ")
request_url = f"{BASE_URL}?appid={API_KEY}&q={city}"
response = requests.get(request_url)

if response.status_code == 200:
    data = response.json()
    # print(data)
    weather = data['weather'][0]['description']
    print(weather)
    temperature = data['main']['temp']
    print(round(temperature-273.15, 2))
    humidity = data['main']['humidity']
    print(f"Humidity in {city} is", humidity)
else:
    print("An error occurred.")