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

        /*För avfyrningskoden*/
        int bulletSpeed = 10; //projektilens rörelsehastighet
        const int maxAmmo = 32; //max antalet ammunition
        int ammo = 32;
        float rate = 20; //eldgivningshastighet
        int firingTimer = 0;

        public Ship(Vector2 pos)
            : base(pos)
        {
            position = pos;
            spd = 2;
            spriteName = "block_null"; //"ship_1"

        }
        public override void Update() //styr skeppet fram, bak, sidorna och roterar
        {
            if (!alive) return;
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

            firingTimer++;
            if (mouse.LeftButton == ButtonState.Pressed){
                CheckShooting();

            }

            rotation = point_direction(position.X, position.Y, mouse.X, mouse.Y);
            prevKeyboard = keyboard;
            prevMouse = mouse;
            base.Update();
        }

        private void CheckShooting()
        {
            if (firingTimer > rate && ammo > 0)
            {
                firingTimer = 0;
                Shoot();
            }
        }

        private void Shoot()
        {
            ammo--;

            foreach (Obj o in Items.objList) //loopar igenom listan
            {
                if (o.GetType() == typeof(Bullet) && !o.alive) //om det är en Bullet och den är inaktiv
                {
                    o.position = position;
                    o.rotation = rotation;
                    o.speed = bulletSpeed;
                    o.alive = true;

                    break;
                }
            }
        }

            public float point_direction(float x, float y, float x2, float y2){ //skeppets riktning

                float diffx = x - x2; 
                float diffy = y - y2; 
                float adj = diffx; 
                float opp = diffy; 
                float tan = opp / adj; 
                float res = MathHelper.ToDegrees((float)Math.Atan2(opp, adj)); 
                res = (res - 180) % 360; 
                if (res < 0) { 
                    res += 360; } 
                return res; 
         

                /*float diffx = x - x2; 
                float diffy = y - y2; 
                float rot = (float)Math.Atan2(diffy, diffx); 
                return rot;*/
                
               
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