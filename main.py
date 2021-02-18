import gen_password 
import PySimpleGUI as sg
import pyperclip
from notifypy import Notify

notification = Notify()
notification.title = 'Password Generated'
notification.message = 'Your password has been generated'

layout = [  [sg.Text('Which elements would you like to be in password:')], 
            [sg.Checkbox('Numbers')],
            [sg.Checkbox('Symbols')],
            [sg.Text('Enter the lenght of your password:'), sg.InputText()],
            [sg.OK()]]
           

window = sg.Window('Window Title', layout)
event, values = window.read()

password = gen_password.Password(values[0], values[1], values[2])
sg.popup(f'Your password is: {password}')
pyperclip.copy(password)
notification.send()
window.read()

window.close()

