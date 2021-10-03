import speech_recognition as sr 
import winsound
r=sr.Recognizer()
#sppech recognizer
x=int(input('enter the duration of your message in seconds '))
print('please talk !')
with sr.Microphone() as source:
	audio_data=r.record(source,duration=x)
	print('Recognizing...')
	text=r.recognize_google(audio_data)
	if 'what is your name' in text:
		print('My name is Leo')

	
