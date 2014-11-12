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
        private Vector2 position;
        private float rotation = 0.0f;
        private string spriteName;
        private Texture2D spriteIndex;
        private float speed = 0.0f;
        private float scale = 1.0f;
        private Rectangle size;
        private Vector2 center;
        private Obj(Vector2 pos){
            position = pos;
    }
        private Obj()
        {

        }
        private void LoadContent(ContentManager content, string spriteName)
        {
            spriteName = spriteName;
            spriteIndex = content.Load<Texture2D>("sprites\\" + spriteName);
        }
        private void Draw(SpriteBatch spriteBatch)
        {
            Rectangle size;
            Vector2 center = new Vector2(spriteIndex.Width/2, spriteIndex.Height/2);
            spriteBatch.Draw(spriteIndex, position, null, Color.White, rotation, center, scale,SpriteEffects.None, 0)
        }
    }
}
