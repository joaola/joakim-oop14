using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace GuiNetA
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void HejLabel_Click(object sender, EventArgs e)
        {

        }

        private void ShowHideButton_Click(object sender, EventArgs e)
        {
            if (FotoPictureBox.Visible)
                FotoPictureBox.Hide();
            else
                FotoPictureBox.Show();
            if (this.HejLabel.Visible)
                this.HejLabel.Hide();
            else
                this.HejLabel.Show();
            if (MyTextBox.Text.Length == 0)
                MyTextBox.Text="Kalle Anka";
            else
            MyTextBox.Text=" ";

            MessageBox.Show("Hej", "Hälsning från Kalle Anka");
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void läsMenyStrip_Click(object sender, EventArgs e)
        {
            _fid.FormInputdialog();
        }
    }
}
