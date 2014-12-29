using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Audio;
using Microsoft.Xna.Framework.Content;
using Microsoft.Xna.Framework.GamerServices;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using Microsoft.Xna.Framework.Media;

namespace MittSpelprojekt
{
    class Items
    {
        public static List<Obj> objList = new List<Obj>();

        public static void Initilize()
        {
            for (int i = 0; i < 64; i++)
            {
                Obj o = new Bullet(new Vector2(0,0));
                o.alive = false;
                objList.Add(o);
            }

            objList.Add(new Ship(new Vector2 (50, 50)));
            objList.Add(new crosshair(new Vector2(0, 50)));
        }

        public static void Reset(){
            foreach (Obj o in objList) //loopar igenom listan objList
            {
                o.alive = false;
            }
        }
    }
}
