namespace GuiNetA
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.HejLabel = new System.Windows.Forms.Label();
            this.ShowHideButton = new System.Windows.Forms.Button();
            this.FotoPictureBox = new System.Windows.Forms.PictureBox();
            this.MyTextBox = new System.Windows.Forms.TextBox();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.läsMenyStrip = new System.Windows.Forms.ToolStripMenuItem();
            this.skrivToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.avslutaToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            ((System.ComponentModel.ISupportInitialize)(this.FotoPictureBox)).BeginInit();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // HejLabel
            // 
            this.HejLabel.AutoSize = true;
            this.HejLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 20F);
            this.HejLabel.Location = new System.Drawing.Point(117, 133);
            this.HejLabel.Name = "HejLabel";
            this.HejLabel.Size = new System.Drawing.Size(55, 31);
            this.HejLabel.TabIndex = 0;
            this.HejLabel.Text = "Hej";
            this.HejLabel.Visible = false;
            this.HejLabel.Click += new System.EventHandler(this.HejLabel_Click);
            // 
            // ShowHideButton
            // 
            this.ShowHideButton.Location = new System.Drawing.Point(108, 170);
            this.ShowHideButton.Name = "ShowHideButton";
            this.ShowHideButton.Size = new System.Drawing.Size(75, 23);
            this.ShowHideButton.TabIndex = 1;
            this.ShowHideButton.Text = "Show/Hide";
            this.ShowHideButton.UseVisualStyleBackColor = true;
            this.ShowHideButton.Click += new System.EventHandler(this.ShowHideButton_Click);
            // 
            // FotoPictureBox
            // 
            this.FotoPictureBox.Image = global::GuiNetA.Properties.Resources._2pzkwf;
            this.FotoPictureBox.Location = new System.Drawing.Point(63, 53);
            this.FotoPictureBox.Name = "FotoPictureBox";
            this.FotoPictureBox.Size = new System.Drawing.Size(153, 77);
            this.FotoPictureBox.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.FotoPictureBox.TabIndex = 2;
            this.FotoPictureBox.TabStop = false;
            this.FotoPictureBox.Click += new System.EventHandler(this.pictureBox1_Click);
            // 
            // MyTextBox
            // 
            this.MyTextBox.Location = new System.Drawing.Point(108, 27);
            this.MyTextBox.Name = "MyTextBox";
            this.MyTextBox.Size = new System.Drawing.Size(75, 20);
            this.MyTextBox.TabIndex = 3;
            this.MyTextBox.TextChanged += new System.EventHandler(this.textBox1_TextChanged);
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.läsMenyStrip,
            this.skrivToolStripMenuItem,
            this.avslutaToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(284, 24);
            this.menuStrip1.TabIndex = 4;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // läsMenyStrip
            // 
            this.läsMenyStrip.Name = "läsMenyStrip";
            this.läsMenyStrip.Size = new System.Drawing.Size(36, 20);
            this.läsMenyStrip.Text = "Läs";
            this.läsMenyStrip.Click += new System.EventHandler(this.läsMenyStrip_Click);
            // 
            // skrivToolStripMenuItem
            // 
            this.skrivToolStripMenuItem.Name = "skrivToolStripMenuItem";
            this.skrivToolStripMenuItem.Size = new System.Drawing.Size(44, 20);
            this.skrivToolStripMenuItem.Text = "Skriv";
            // 
            // avslutaToolStripMenuItem
            // 
            this.avslutaToolStripMenuItem.Name = "avslutaToolStripMenuItem";
            this.avslutaToolStripMenuItem.Size = new System.Drawing.Size(58, 20);
            this.avslutaToolStripMenuItem.Text = "Avsluta";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(284, 261);
            this.Controls.Add(this.MyTextBox);
            this.Controls.Add(this.FotoPictureBox);
            this.Controls.Add(this.ShowHideButton);
            this.Controls.Add(this.HejLabel);
            this.Controls.Add(this.menuStrip1);
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "Form1";
            this.Text = "En hälsning från Joakim";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.FotoPictureBox)).EndInit();
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label HejLabel;
        private System.Windows.Forms.Button ShowHideButton;
        private System.Windows.Forms.PictureBox FotoPictureBox;
        private System.Windows.Forms.TextBox MyTextBox;
        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem läsMenyStrip;
        private System.Windows.Forms.ToolStripMenuItem skrivToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem avslutaToolStripMenuItem;
    }
}

