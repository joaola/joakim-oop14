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
        KeyboardState keyboard; //Nuvarande nedtryckta tangenten
        KeyboardState prevKeyboard; //Förra nedtryckta tangenten

        MouseState mouse;
        MouseState prevMouse;

        float spd;
        public Ship(Vector2 pos)
            : base(pos)
        {
            position = pos;
            spd = 2;
            spriteName = "ship_1";

        }
        public override void Update()
        {
            keyboard = Keyboard.GetState();
            mouse = Mouse.GetState();
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

            rotation = point_direction(position.X, position.Y, mouse.X, mouse.Y);
            prevKeyboard = keyboard;
            prevMouse = mouse;
            base.Update();
        }

            private float point_direction(float x, float y, float x2, float y2){

                float diffx = x - x2; 
                float diffy = y - y2; 
                float rot = (float)Math.Atan2(diffy, diffx); 
                return rot;
                
               
            }
            
    }
}

/*rotera objektet med muspekaren*/

//fungerar inte så bra
/*float diffx = x - x2;
               float diffy = y - y2;
               float adj = diffx;
               float opp = diffy;
               float tan = opp / adj;
               float res = MathHelper.ToDegrees((float)Math.Atan2(opp, adj));
               res = (res - 180) % 360;
               if (res < 0){
                   res += 360;}
               return res;*/

// eller

/*MouseState mouse = Mouse.GetState();
mousePosition = new Vector2(mouse.X, mouse.Y);

Vector2 direction = mousePosition - position;
direction.Normalize();
rotation = (float)Math.Atan2(
              (double)direction.Y,
              (double)direction.X);
//position += direction*speed;*/