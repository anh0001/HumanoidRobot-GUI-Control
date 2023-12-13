import tkinter as tk
from tkinter import PhotoImage
import serial
from tkinter import ttk
import serial.tools.list_ports
ser = None

def button_kanan_click():
    label.config(text="Tombol Kanan")
    command = 'R'
    ser.write(command.encode())
    

def button_stop_click():
    label.config(text="Tombol STOP")
    command = 'S'
    ser.write(command.encode())

def button_kiri_click():
    label.config(text="Tombol Kiri")
    command = 'L'
    ser.write(command.encode())

def button_maju_click():
    label.config(text="Tombol Maju")
    command = 'F'
    ser.write(command.encode())

def button_mundur_click():
    label.config(text="Tombol Mundur")
    command = 'B'
    ser.write(command.encode())

def button_run_click():
    label.config(text="Tombol Run")
    command = 'M'
    ser.write(command.encode())

def button_hand_click():
    label.config(text="Tombol Hand")
    command = 'H'
    ser.write(command.encode())

def read_serial():
    global ser
    if ser and ser.in_waiting:
        data = ser.readline().decode().strip()  # Membaca data serial dari Arduino
        # Proses data yang diterima
        if "ROLL" in data and "PITCH" in data and "YAW" in data:
            values = data.split(',')
            roll = float(values[0].split(':')[-1])
            pitch = float(values[1].split(':')[-1])
            yaw = float(values[2].split(':')[-1])
            # Memperbarui label GUI dengan nilai ROLL, PITCH, dan YAW
            label_roll.config(text="ROLL    : " + str(roll))
            label_pitch.config(text="PITCH  : " + str(pitch))
            label_yaw.config(text="YAW  : " +  str(yaw))

            # Memperbarui label GUI dengan nilai servo
            label_servo1.config(text=f"Servo 1: {int(values[3])}")
            label_servo2.config(text=f"Servo 2: {int(values[4])}")
            label_servo3.config(text=f"Servo 3: {int(values[5])}")
            label_servo4.config(text=f"Servo 4: {int(values[6])}")
            label_servo5.config(text=f"Servo 5: {int(values[7])}")
            label_servo6.config(text=f"Servo 6: {int(values[8])}")
            label_servo7.config(text=f"Servo 7: {int(values[9])}")
            label_servo8.config(text=f"Servo 8: {int(values[10])}")
            label_servo9.config(text=f"Servo 9: {int(values[11])}")
            label_servo10.config(text=f"Servo 10: {int(values[12])}")
            label_servo11.config(text=f"Servo 11: {int(values[13])}")
            label_servo12.config(text=f"Servo 12: {int(values[14])}")

    root.after(100, read_serial)

def connect_serial():
    global ser
    selected_port = port_combo.get()
    selected_baudrate = baud_combo.get()

    try:
        ser = serial.Serial(selected_port, int(selected_baudrate))
        print(f"Connected to {selected_port} with baudrate {selected_baudrate}")
        read_serial()
        # Do something with the serial connection, e.g., start reading data
    except serial.SerialException as e:
        print("Failed to connect:", e)


root = tk.Tk()
root.title("Kontrol Motion Humanoid")

# Get available serial ports
ports = [port.device for port in serial.tools.list_ports.comports()]

# Baud rates list
baud_rates = [300, 1200, 2400, 4800, 9600, 19200, 38400, 57600, 115200, 230400]
    
#ser = serial.Serial('COM23', 115200)  # Sesuaikan dengan port serial Arduino Anda

# Create a frame
frame = ttk.Frame(root, padding="20")
frame.grid(row=0, column=0)

# Serial Port selection
port_label = ttk.Label(frame, text="Select Serial Port:")
port_label.grid(row=0, column=0, padx=5, pady=5)

port_combo = ttk.Combobox(frame, values=ports)
port_combo.grid(row=0, column=1, padx=5, pady=5)
port_combo.current(0)  # Set the default selection

# Baud Rate selection
baud_label = ttk.Label(frame, text="Select Baud Rate:")
baud_label.grid(row=1, column=0, padx=5, pady=5)

baud_combo = ttk.Combobox(frame, values=baud_rates)
baud_combo.grid(row=1, column=1, padx=5, pady=5)
baud_combo.current(4)  # Set the default selection to 9600

# Connect button
connect_button = ttk.Button(frame, text="Connect", command=connect_serial)
connect_button.grid(row=2, columnspan=2, padx=5, pady=15)

# Mengimpor gambar untuk tombol maju, mundur, dan pause
kanan_image = PhotoImage(file="RIGHT.png")
stop_image = PhotoImage(file="Stop.png")
kiri_image = PhotoImage(file="LEFT.png")
maju_image = PhotoImage(file="FWD.png")
mundur_image = PhotoImage(file="BWD.png")
hand_image = PhotoImage(file="Hand.png")
run_image = PhotoImage(file="Run.png")
humanoid_image = PhotoImage(file="Humanoid.png")

# Mengatur ukuran tombol dengan metode subsample
kiri_image = kiri_image.subsample(3)  # Mengurangi ukuran gambar menjadi setengah
stop_image = stop_image.subsample(3)  # Mengurangi ukuran gambar menjadi setengah
kanan_image = kanan_image.subsample(3)  # Mengurangi ukuran gambar menjadi setengah
maju_image = maju_image.subsample(3)  # Mengurangi ukuran gambar menjadi setengah
mundur_image = mundur_image.subsample(3)  # Mengurangi ukuran gambar menjadi setengah
hand_image = hand_image.subsample(4)  # Mengurangi ukuran gambar menjadi setengah
run_image = run_image.subsample(4)  # Mengurangi ukuran gambar menjadi setengah

# Memperbesar gambar humanoid
humanoid_image = humanoid_image.zoom(2)

# Membuat tombol dengan gambar sebagai elemen tombol
button_kiri = tk.Button(root, image=kiri_image, command=button_kiri_click)
button_stop = tk.Button(root, image=stop_image, command=button_stop_click)
button_kanan = tk.Button(root, image=kanan_image, command=button_kanan_click)
button_maju = tk.Button(root, image=maju_image, command=button_maju_click)
button_mundur = tk.Button(root, image=mundur_image, command=button_mundur_click)
button_hand = tk.Button(root, image=hand_image, command=button_hand_click)
button_run = tk.Button(root, image=run_image, command=button_run_click)


# Mengatur tombol-tombol agar sejajar dan berada di tengah
button_kiri.grid(row=7, column=2, padx=10)
button_stop.grid(row=7, column=3, padx=10)
button_kanan.grid(row=7, column=4, padx=10)
button_maju.grid(row=6, column=3, padx=10)
button_mundur.grid(row=8, column=3, padx=10)
button_hand.grid(row=7, column=20, padx=10)
button_run.grid(row=7, column=55, padx=10)

# Membuat label untuk menampilkan nilai ROLL, PITCH, dan YAW
label_roll = tk.Label(root, text="ROLL: ")
label_roll.grid(row=3, column=4, columnspan=2)

label_pitch = tk.Label(root, text="PITCH: ")
label_pitch.grid(row=4, column=4, columnspan=2)

label_yaw = tk.Label(root, text="YAW: ")
label_yaw.grid(row=5, column=4, columnspan=2)

label_servo1 = tk.Label(root, text="Servo 1: ")
label_servo2 = tk.Label(root, text="Servo 2: ")
label_servo3 = tk.Label(root, text="Servo 3: ")
label_servo4 = tk.Label(root, text="Servo 4: ")
label_servo5 = tk.Label(root, text="Servo 5: ")
label_servo6 = tk.Label(root, text="Servo 6: ")
label_servo7 = tk.Label(root, text="Servo 7: ")
label_servo8 = tk.Label(root, text="Servo 8: ")
label_servo9 = tk.Label(root, text="Servo 9: ")
label_servo10 = tk.Label(root, text="Servo 10: ")
label_servo11 = tk.Label(root, text="Servo 11: ")
label_servo12 = tk.Label(root, text="Servo 12: ")

label_servo1.grid(row=3, column=25, padx=0, pady=1)
label_servo2.grid(row=4, column=25, padx=0, pady=1)
label_servo3.grid(row=5, column=25, padx=0, pady=1)
label_servo4.grid(row=6, column=25, padx=0, pady=1)
label_servo5.grid(row=7, column=25, padx=0, pady=1)
label_servo6.grid(row=8, column=25, padx=0, pady=1)

label_servo7.grid(row=3, column=50, padx=0, pady=1)
label_servo8.grid(row=4, column=50, padx=0, pady=1)
label_servo9.grid(row=5, column=50, padx=0, pady=1)
label_servo10.grid(row=6, column=50, padx=0, pady=1)
label_servo11.grid(row=7, column=50, padx=0, pady=1)
label_servo12.grid(row=8, column=50, padx=0, pady=1)

# Membuat gambar humanoid
humanoid_image = humanoid_image.subsample(3)
humanoid_label = tk.Label(root, image=humanoid_image)
humanoid_label.grid(row=7, column=40)

label = tk.Label(root, text="")
label.grid(row=1, column=0, columnspan=3)

read_serial()
root.mainloop()