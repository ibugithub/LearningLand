Add-Type -AssemblyName System.Windows.Forms 

$FormObject = [System.windows.Forms.Form] 
$LabelObject = [System.Windows.Forms.Label] 

$HelloForm = New-Object $FormObject
$HelloForm.ClientSize = "500, 300"
$HelloForm.Text = "hello world Project" 
$HelloForm.BackColor = "blue"

$Title = New-Object $LabelObject
$Title.Text = "Hello World"
$Title.AutoSize = $true 
$Title.Location = New-Object System.Drawing.Point(140, 100) 
$Title.Font = "verdana, 24, style=bold"

$HelloForm.Controls.AddRange(@($Title))
$Title.ForeColor= 'red'


#Display the form
$HelloForm.ShowDialog()

#Cleans up the form 
$HelloForm.Dispose()