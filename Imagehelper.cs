using System;
using System.Collections.Generic;
using System.Drawing;
using System.Drawing.Imaging;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace cSharpIntroWinForms
{
    public class Imagehelper
    {

        static public byte[] FromImagetobyte(Image Slika)
        {
            MemoryStream Ms = new MemoryStream();
            Slika.Save(Ms, ImageFormat.Jpeg);
            return Ms.ToArray();
        }
        static public Image FrombytetoImage(byte[] slika)
        {
            MemoryStream Ms = new MemoryStream(slika);
            return Image.FromStream(Ms);
        }

    }
}
