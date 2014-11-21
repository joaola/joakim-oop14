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
    class Obj
    {
        public Vector2 position;
        //public Vector2 mousePosition;
        public float rotation = 0.0f;
        public string spriteName = "block_null";
        public Texture2D spriteIndex;
        public float speed = 0.0f;
        public float scale = 1.0f;
        public Rectangle size;
        public Vector2 center;
        public Obj(Vector2 pos){
            position = pos;
        }

        public Obj()
        {

        }
        public virtual void Update()
        {
            pushTo(speed, rotation);
        }

        public virtual void LoadContent(ContentManager content)
        {
            spriteIndex = content.Load<Texture2D>("sprites\\" + spriteName);
        }
        public virtual void Draw(SpriteBatch spriteBatch)
        {
            Rectangle size;
            Vector2 center = new Vector2(spriteIndex.Width/2, spriteIndex.Height/2);
            spriteBatch.Draw(spriteIndex, position, null, Color.White, rotation, center, scale, SpriteEffects.None, 0); //MathHelper.ToRadians(rotation)
        }
        public virtual void pushTo(float pix, float dir)
        {
            float newX = (float)Math.Cos(MathHelper.ToRadians(dir));
            float newY = (float)Math.Sin(MathHelper.ToRadians(dir));
            position.X += pix * (float)newX;
            position.Y += dir * (float)newY;
        }
    }
}


