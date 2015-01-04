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
        //State enum
        public enum State
        {
            Menu,
            Playing,
            GameOver
        }
        GraphicsDeviceManager graphics;
        SpriteBatch spriteBatch;
        Random random = new Random();

        List<Asteroid> asteroidList = new List<Asteroid>();
        Player p = new Player();
        Field f = new Field();
        HUD h = new HUD();

        //Tillstånd vid uppstart
        State gameState = State.Menu;
        public Texture2D menuImage;
        public Texture2D gameOverImage;

        public Game1()
        {
            graphics = new GraphicsDeviceManager(this);
            graphics.IsFullScreen = false;
            graphics.PreferredBackBufferWidth = 750; //Fönsterbredd
            graphics.PreferredBackBufferHeight = 750; //Fönsterhöjd
            this.Window.Title = "Spelprojekt i OOP";
            Content.RootDirectory = "Content";
            menuImage = null;
            gameOverImage = null;
           
            
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
            h.LoadContent(Content);
            menuImage = Content.Load<Texture2D>("menu");
            gameOverImage = Content.Load<Texture2D>("gameOverPic");


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

            switch (gameState)
            {
                case State.Playing:
                    {

                        //Uppdatera för varje asteroid i listan + kolla om kollision = ta bort asteroid
                        f.speed = 5;
                        foreach (Asteroid a in asteroidList)
                        {


                            if (a.boundingBox.Intersects(p.boundingBox))
                            {
                                p.health -= 20;
                                a.isVisible = false;
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

                        //Om skeppets liv blir 0 så övergår spelet till "Game Over"
                        if (p.health <= 0)
                            gameState = State.GameOver;
                        //h.Update(gameTime);
                        p.Update(gameTime);
                        f.Update(gameTime);
                        LoadAsteroids();
                        break;

                    }
                    //Meny-tillstånd
                case State.Menu:
                    {
                        //Tangentbordstillstånd
                        KeyboardState keyState = Keyboard.GetState();

                        if (keyState.IsKeyDown(Keys.Enter))
                        {
                            gameState = State.Playing;
                        }
                        f.Update(gameTime);
                        f.speed = 1;
                        break;
                    }
                    //Game Over-tillstånd
                case State.GameOver:
                    {
                        //Tangentbords-tillstånd
                        KeyboardState keyState = Keyboard.GetState();

                        //Tryck på Escape för att komma till menyn igen
                        if (keyState.IsKeyDown(Keys.Escape))
                            gameState = State.Menu;
                        break;
                    }
            }

            base.Update(gameTime);
        }

        /// <summary>
        /// This is called when the game should draw itself.
        /// </summary>
        /// <param name="gameTime">Provides a snapshot of timing values.</param>
        protected override void Draw(GameTime gameTime)
        {

            // TODO: Add your drawing code here
            spriteBatch.Begin();
            //Draw, speltillstånd
            switch (gameState)
            {
                case State.Playing:
                    {
                        f.Draw(spriteBatch);
                        p.Draw(spriteBatch);

                        GraphicsDevice.Clear(Color.White);

                        foreach (Asteroid a in asteroidList)
                        {
                            a.Draw(spriteBatch);
                        }

                        break;
                    }
                    //Draw, meny
                case State.Menu:
                    {
                        f.Draw(spriteBatch);
                        spriteBatch.Draw(menuImage, new Vector2(-150,0), Color.White);
                        break;
                    }

                    //Draw, gameover-tillstånd
                case State.GameOver:
                    {

                        spriteBatch.Draw(gameOverImage, new Vector2(-20,0), Color.Black);                        
                        break;
                    }
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
