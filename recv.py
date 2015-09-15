from YunMessenger import Console
import urllib2
import json

console = Console.Console()

def messageHandler1(msg):
	urllib2.urlopen(urllib.encode(json.loads(msg))
	response = urllib2.urlopen('http://localhost:8080/')
	print 'RESPONSE:', response
	print 'URL     :', response.geturl()

	headers = response.info()
	print 'DATE    :', headers['date']
	print 'HEADERS :'
	print '---------'
	print headers

	data = response.read()
	print 'LENGTH  :', len(data)
	print 'DATA    :'
	print '---------'
	print data



console.onMessage['subscriber_1'] = messageHandler1


console.run()
