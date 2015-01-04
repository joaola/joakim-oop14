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
    class HUD
    {
        public int playerScore, screenWidth, screenHeight;
        public SpriteFont playerScoreFont;
        public Vector2 playerScorePos;
        public bool showHud;

        //Konstruktor

        public HUD()
        {
            playerScore = 0;
            showHud = true;
            screenHeight = 750;
            screenWidth = 750;
            playerScoreFont = null;
            playerScorePos = new Vector2(screenWidth / 2, 50);
            
        }
        //Load content
        public void LoadContent(ContentManager Content)
        {
            playerScoreFont = Content.Load<SpriteFont>("Font1");

        }

        //Update
        public void Update(GameTime gameTime)
        {
            //Tangentbords-tillstånd
            KeyboardState keyState = Keyboard.GetState();
        }

        //Draw
        public void Draw(SpriteBatch spriteBatch)
        {
            if (showHud)
            {
                spriteBatch.DrawString(playerScoreFont, "Score: " + playerScore, playerScorePos, Color.White);
            }
        }
    }
}
