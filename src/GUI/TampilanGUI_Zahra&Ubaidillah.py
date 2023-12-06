import tkinter as tk
from tkinter import PhotoImage
import serial

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

def read_serial():
    if ser.in_waiting:
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
    root.after(100, read_serial)
    

root = tk.Tk()
root.title("Kontrol Robot Humanoid")

ser = serial.Serial('COM8', 115200)  # Sesuaikan dengan port serial Arduino Anda

# Mengimpor gambar latar belakang
bg_image = PhotoImage(file="bgGUI.png")

# Membuat label untuk latar belakang
bg_label = tk.Label(root, image=bg_image)
bg_label.place(relwidth=1, relheight=1)

# Mengimpor gambar untuk tombol maju, mundur, dan pause
kanan_image = PhotoImage(file="kanan.png")
stop_image = PhotoImage(file="pause.png")
kiri_image = PhotoImage(file="kiri.png")
maju_image = PhotoImage(file="maju.png")
mundur_image = PhotoImage(file="mundur.png")


# Mengatur ukuran tombol dengan metode subsample
kiri_image = kiri_image.subsample(4)  # Mengurangi ukuran gambar menjadi setengah
stop_image = stop_image.subsample(4)  # Mengurangi ukuran gambar menjadi setengah
kanan_image = kanan_image.subsample(4)  # Mengurangi ukuran gambar menjadi setengah
maju_image = maju_image.subsample(4)  # Mengurangi ukuran gambar menjadi setengah
mundur_image = mundur_image.subsample(4)  # Mengurangi ukuran gambar menjadi setengah

# Membuat tombol dengan gambar sebagai elemen tombol
button_kiri = tk.Button(root, image=kiri_image, command=button_kiri_click)
button_stop = tk.Button(root, image=stop_image, command=button_stop_click)
button_kanan = tk.Button(root, image=kanan_image, command=button_kanan_click)
button_maju = tk.Button(root, image=maju_image, command=button_maju_click)
button_mundur = tk.Button(root, image=mundur_image, command=button_mundur_click)


# Mengatur tombol-tombol agar sejajar dan berada di tengah
button_kiri.grid(row=8, column=4, padx=10)
button_stop.grid(row=8, column=6, padx=10)
button_kanan.grid(row=8, column=8, padx=10)
button_maju.grid(row=7, column=6, padx=10)
button_mundur.grid(row=9, column=6, padx=10)

# Membuat label untuk menampilkan nilai ROLL, PITCH, dan YAW
label_roll = tk.Label(root, text="ROLL: ")
label_roll.grid(row=3, column=8, columnspan=2)

label_pitch = tk.Label(root, text="PITCH: ")
label_pitch.grid(row=4, column=8, columnspan=2)

label_yaw = tk.Label(root, text="YAW: ")
label_yaw.grid(row=5, column=8, columnspan=2)

# Membuat label untuk menampilkan pesan
label = tk.Label(root, text="")
label.grid(row=1, column=0, columnspan=3)

read_serial()
root.mainloop()