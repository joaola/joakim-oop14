using System;
using System.Collections.Generic;
using System.Linq;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Audio;
using Microsoft.Xna.Framework.Content;
using Microsoft.Xna.Framework.GamerServices;
using Microsoft.Xna.Framework.Graphics;
using Microsoft.Xna.Framework.Input;
using Microsoft.Xna.Framework.Media;

namespace MittSpelprojekt_version2
{
    class Field
    {
        public Texture2D texture;
        public Vector2 bgPosition1, bgPosition2; //background
        public int speed;

        //Konstruktor
        public Field()
        {
            texture = null;
            bgPosition1 = new Vector2(0, 0);
            bgPosition2 = new Vector2(0, -750);
            speed = 5;
        }

        //Load Content
        public void LoadContent(ContentManager Content)
        {
            texture = Content.Load<Texture2D>("seamless space_0");
        }
        //Draw
        public void Draw(SpriteBatch spriteBatch)
        {
            spriteBatch.Draw(texture, bgPosition1, Color.White);
            spriteBatch.Draw(texture, bgPosition2, Color.White);
        }

        public void Update(GameTime gameTime)
        {
            //Hastigheten för bakgrunden
            bgPosition1.Y = bgPosition1.Y + speed;
            bgPosition2.Y = bgPosition2.Y + speed;

            //Upprepar bakgrunden
            if (bgPosition1.Y >= 750)
            {
                bgPosition1.Y = 0;
                bgPosition2.Y = -750;
            }
        }
    }
}
