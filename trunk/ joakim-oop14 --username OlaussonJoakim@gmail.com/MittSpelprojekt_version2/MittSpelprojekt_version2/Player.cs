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
    public class Player
    {
       
        public Texture2D texture, bulletTexture;
        public Vector2 position;
        public int speed;
        public float bulletDelay;
        public List<Bullet>bulletList;

        //Variabler för kollision
        public Rectangle boundingBox;
        public bool isColiding;

        //Konstruktor

        public Player(){
            bulletList = new List<Bullet>();
            texture = null;
            position = new Vector2(335, 335);
            bulletDelay = 20;
            speed = 10;
            isColiding = false;

        }

        //Load content

        public void LoadContent(ContentManager Content)
        {
            texture = Content.Load<Texture2D>("ship_2");
            bulletTexture = Content.Load<Texture2D>("playerbullet");

        }
        //Draw
        public void Draw(SpriteBatch spriteBatch)
        {
            spriteBatch.Draw(texture, position, Color.White);
            foreach (Bullet b in bulletList)
            {
                b.Draw(spriteBatch);
            }
        }
        

        //Update

        public void Update(GameTime gameTime)
        {
            
            KeyboardState keyState = Keyboard.GetState();
            //Avfyra vapen
            if (keyState.IsKeyDown(Keys.Space))
            {
                Shoot();
            }
            
            UpdateBullet();

            //Styrning
            if (keyState.IsKeyDown(Keys.W))
                position.Y = position.Y - speed;

            if (keyState.IsKeyDown(Keys.A))
                position.X = position.X - speed;

            if (keyState.IsKeyDown(Keys.S))
                position.Y = position.Y + speed;

            if (keyState.IsKeyDown(Keys.D))
                position.X = position.X + speed;

            //Hålla skeppet inom spelfönstret
            if (position.X <= 0)
                position.X = 0;
            if (position.X >= 750 - texture.Width)
                position.X = 750 - texture.Width;

            if (position.Y <= 0)
                position.Y = 0;
            if (position.Y >= 750 - texture.Height)
                position.Y = 750 - texture.Height;

        }

        //Avfyra vapen
        public void Shoot()
        {
            //När bulletDelay återställs, då avfyras vapnet
            if (bulletDelay >= 0)
                bulletDelay--;
            //När bulletDelay är 0, då skapas en ny kula vid spelarens position.
            if(bulletDelay <= 0)
            {
                Bullet newBullet = new Bullet(bulletTexture);
                newBullet.position = new Vector2(position.X + 32 - newBullet.texture.Width / 2, position.Y + 10);

                newBullet.isVisible = true;

                if (bulletList.Count() < 20)
                    bulletList.Add(newBullet);

            }

            //Återställer bulletDelay
            if (bulletDelay == 0)
                bulletDelay = 15;
        }

        //Update bullet
        public void UpdateBullet()
        {
            //Varje Bullet i bulletList uppdaterar dess rörelse och om en Bullet når slutet av spelfönstret så raderas Bullet från listan
            foreach (Bullet b in bulletList)
            {

                //Bullets rörelse
                b.position.Y = b.position.Y - b.speed;

                //Om bullet når fönstrets slut, sätt isVisible till false
                if (b.position.Y <= 0)
                    b.isVisible = false;

            }

            //Iterera genom bulletList och kontrollera att någon Bullet i listan är osynlig, om de är det så tas de bort from bulletList
            for (int i = 0; i < bulletList.Count; i++)
            {
                if (!bulletList[i].isVisible)
                {
                    bulletList.RemoveAt(i);
                    i--;
                }
            }

        }
    }
}
