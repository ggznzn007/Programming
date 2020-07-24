﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace _22_InterfaceInheritance
{
    class HandPhone
    {
        public virtual void Send()
        { Console.WriteLine("띠리리리"); }
        public virtual void Receive()
        { Console.WriteLine("여보세요"); }
    }

    interface IMp3
    {
        void PlayMusic();
    }
    interface ICamera
    {
        void TakePhoto();
    }
    class MusicPhone : HandPhone, IMp3, ICamera
    {
        public void PlayMusic()
        { Console.WriteLine("동해물과 백두산이"); }
        public void TakePhoto()
        { Console.WriteLine("찰칵"); }
    }
    class Program
    {
        static void Main(string[] args)
        {
            MusicPhone EveryCall = new MusicPhone();
            EveryCall.Send();
            EveryCall.Receive();
            EveryCall.PlayMusic();
            EveryCall.TakePhoto();

            IMp3 mp3 = EveryCall;
            mp3.PlayMusic();
            ICamera cam = EveryCall;
            cam.TakePhoto();
        }
    }
}
