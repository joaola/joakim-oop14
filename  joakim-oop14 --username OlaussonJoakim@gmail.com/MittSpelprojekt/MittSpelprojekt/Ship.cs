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
    class Ship : Obj
    {
        KeyboardState keyboard;
        KeyboardState prevKeyboard;

        float spd;
        public Ship(Vector2 pos)
            : base(pos)
        {
            position = pos;
            spd = 2;
        }
        public override void Update()
        {
            keyboard = Keyboard.GetState();
            if (keyboard.IsKeyDown(Keys.W)) //rör sig uppåt
            {
                position.Y -= spd;
            }
            
                if (keyboard.IsKeyDown(Keys.A)) //rör sig åt vänster
            {
                position.X -= spd;
            }
                if (keyboard.IsKeyDown(Keys.S)) //rör sig nedåt
            {
                position.Y += spd;
            }
                if (keyboard.IsKeyDown(Keys.D)) //rör sig åt höger
            {
                position.X += spd;
            }


            prevKeyboard = keyboard;
            base.Update();
        }
    }
}
