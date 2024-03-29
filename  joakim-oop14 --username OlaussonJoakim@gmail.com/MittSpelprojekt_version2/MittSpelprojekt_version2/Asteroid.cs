﻿using System;
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
    public class Asteroid
    {
        public Rectangle boundingBox; //Osynlig rektangel omkring spriten
        public Texture2D texture;
        public Vector2 position;
        public Vector2 origin; //Mittpunkten av spriten
        public float rotationAngle;
        public int speed;
        public bool isVisible;
        Random random = new Random();
        public float randX, randY;

        //Konstruktor

        public Asteroid(Texture2D newTexture, Vector2 newPosition)
        {
            position = newPosition;
            texture = newTexture;
            speed = 4;

            isVisible = true;

            randX = random.Next(0,750);
            randY = random.Next(-600,-50);
            
        }

        //Load Content
        public void LoadContent(ContentManager Content)
        {
            
        }

        public void Update(GameTime gameTime)
        {
            //Kollisionsbox
            boundingBox = new Rectangle((int)position.X, (int)position.Y, 45, 45);

            //Uppdaterar rotation
            origin.X = texture.Width / 2;
            origin.Y = texture.Height / 2;

            //Asteroidens rörelse

            position.Y = position.Y + speed;
            if (position.Y >= 750)
                position.Y = -50;
        }

        //Draw
        public void Draw(SpriteBatch spriteBatch)
        {
            if (isVisible)
                spriteBatch.Draw(texture, position, Color.White); //spriteBatch.Draw(texture, position, null, Color.White, rotationAngle, origin, 1.0f, SpriteEffects.None, 0f);
        }
    }
}
