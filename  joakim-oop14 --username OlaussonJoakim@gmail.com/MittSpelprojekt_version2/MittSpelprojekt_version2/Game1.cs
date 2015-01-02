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
    /// <summary>
    /// This is the main type for your game
    /// </summary>
    public class Game1 : Microsoft.Xna.Framework.Game
    {
        GraphicsDeviceManager graphics;
        SpriteBatch spriteBatch;
        Random random = new Random();

        List<Asteroid> asteroidList = new List<Asteroid>();
        Player p = new Player();
        Field f = new Field();
        //Asteroid a = new Asteroid();

        public Game1()
        {
            graphics = new GraphicsDeviceManager(this);
            graphics.IsFullScreen = false;
            graphics.PreferredBackBufferWidth = 750; //Fönsterbredd
            graphics.PreferredBackBufferHeight = 750; //Fönsterhöjd
            this.Window.Title = "Spelprojekt i OOP";
            Content.RootDirectory = "Content";
        }

        /// <summary>
        /// Allows the game to perform any initialization it needs to before starting to run.
        /// This is where it can query for any required services and load any non-graphic
        /// related content.  Calling base.Initialize will enumerate through any components
        /// and initialize them as well.
        /// </summary>
        protected override void Initialize()
        {
            // TODO: Add your initialization logic here

            base.Initialize();
        }

        /// <summary>
        /// LoadContent will be called once per game and is the place to load
        /// all of your content.
        /// </summary>
        protected override void LoadContent()
        {
            // Create a new SpriteBatch, which can be used to draw textures.
            spriteBatch = new SpriteBatch(GraphicsDevice);

            // TODO: use this.Content to load your game content here
            p.LoadContent(Content);
            f.LoadContent(Content);
            //a.LoadContent(Content);
        }

        /// <summary>
        /// UnloadContent will be called once per game and is the place to unload
        /// all content.
        /// </summary>
        protected override void UnloadContent()
        {
            // TODO: Unload any non ContentManager content here
        }

        /// <summary>
        /// Allows the game to run logic such as updating the world,
        /// checking for collisions, gathering input, and playing audio.
        /// </summary>
        /// <param name="gameTime">Provides a snapshot of timing values.</param>
        protected override void Update(GameTime gameTime)
        {
            // Allows the game to exit
            if (GamePad.GetState(PlayerIndex.One).Buttons.Back == ButtonState.Pressed)
                this.Exit();
            // TODO: Add your update logic here

            //a.Update(gameTime);

            //Uppdatera för varje asteroid i listan + kolla om kollision = ta bort asteroid
            foreach (Asteroid a in asteroidList)
            {
                

                if (a.boundingBox.Intersects(p.boundingBox))
                {
                    p.health -= 20;
                    a.isVisible = false;
                    if (p.health <= 0) //Om player får slut på liv
                    {
                        
                    }
                }

                //Iterera genom bulletList och kolla om någon Bullet kolliderar med en asteroid
                for (int i = 0; i < p.bulletList.Count; i++)
                {
                    if (a.boundingBox.Intersects(p.bulletList[i].boundingBox))
                    {
                        a.isVisible = false;
                        p.bulletList.ElementAt(i).isVisible = false;
                    }
                }

                    a.Update(gameTime);
            }

            p.Update(gameTime);
            f.Update(gameTime);
            LoadAsteroids();

            base.Update(gameTime);
        }

        /// <summary>
        /// This is called when the game should draw itself.
        /// </summary>
        /// <param name="gameTime">Provides a snapshot of timing values.</param>
        protected override void Draw(GameTime gameTime)
        {
            GraphicsDevice.Clear(Color.CornflowerBlue);

            // TODO: Add your drawing code here
            spriteBatch.Begin();

            f.Draw(spriteBatch);
            p.Draw(spriteBatch);

            //a.Draw(spriteBatch);

            foreach (Asteroid a in asteroidList)
            {
                a.Draw(spriteBatch);
            }

            spriteBatch.End();


            base.Draw(gameTime);
        }
        //Ladda in asteroider i spelet
        public void LoadAsteroids()
        {
            //Random variabler för x- och y-axlarna 
            int randY = random.Next(-600, -50);
            int randX = random.Next(0,750);

            if (asteroidList.Count() < 15)
            {
                asteroidList.Add(new Asteroid(Content.Load<Texture2D>("asteroid"), new Vector2(randX, randY)));
            }

            //Tar bort asteroider som blir förstörda av skeppet
            for (int i = 0; i < asteroidList.Count; i++)
            {
                if (!asteroidList[i].isVisible)
                {
                    asteroidList.RemoveAt(i);
                    i--;
                }
            }
        }
    }
}
