using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
namespace Railway_Reservation_System
{
    public partial class Form1 : Form
    {
        
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void cutToolStripButton_Click(object sender, EventArgs e)
        {
           
        }

        private void copyToolStripButton_Click(object sender, EventArgs e)
        {
            
        }

        private void toolStripButton2_Click(object sender, EventArgs e)
        {
            webBrowser1.Navigate(txtURL.Text);
        }

        private void newToolStripButton_Click(object sender, EventArgs e)
        {
            rtReceipt.Text = String.Empty;
        }

        private void openToolStripButton_Click(object sender, EventArgs e)
        {
            OpenFileDialog openFileDialog1 = new OpenFileDialog
            {
                InitialDirectory = @"E:\",
                Title = "Browse Text Files",

                CheckFileExists = true,
                CheckPathExists = true,

                DefaultExt = "txt",
                Filter = "txt files (*.txt)|*.txt",
                FilterIndex = 2,
                RestoreDirectory = true,

                ReadOnlyChecked = true,
                ShowReadOnly = true
            };

            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                rtReceipt.Text = openFileDialog1.FileName;
            }
        }

        private void saveToolStripButton_Click(object sender, EventArgs e)
        {
            SaveFileDialog saveFile = new SaveFileDialog();
            saveFile.FileName = "Notepad Text";
            saveFile.Filter = "Text File (*.txt)|*.txt| All files (*.*)|*.*";
            if(saveFile.ShowDialog() == DialogResult.OK)
            {
                using (System.IO.StreamWriter sw = new System.IO.StreamWriter(saveFile.FileName))
                    sw.WriteLine(rtReceipt.Text);
            }
        }

        private void webBrowser1_DocumentCompleted(object sender, WebBrowserDocumentCompletedEventArgs e)
        {

        }

        private void groupBox1_Enter(object sender, EventArgs e)
        {

        }

        private void label1_Click_1(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            webBrowser1.Visible = false;
       
        }

        private void label16_Click(object sender, EventArgs e)
        {

        }

        private void textBox8_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox9_TextChanged(object sender, EventArgs e)
        {
            textBox10.Text = DateTime.Now.ToLongDateString();
        }

        private void textBox10_TextChanged(object sender, EventArgs e)
        {
            textBox10.Text = DateTime.Now.ToLongTimeString();

        }

        private void label14_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void label15_Click(object sender, EventArgs e)
        {
            foreach (var c in this.Controls)
            {
                if (c is TextBox)
                {
                    ((TextBox)c).Text = String.Empty;
                }
            }
        }

        private void textBox10_Click(object sender, EventArgs e)
        {
            textBox10.Text = DateTime.Now.ToLongTimeString();
        }
    }
    
}
