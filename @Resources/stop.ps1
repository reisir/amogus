# stop.ps1
# send a media stop key

function Update {

}

# https://superuser.com/questions/126617/can-i-make-a-bat-file-that-plays-the-next-track-like-multimedia-keys
function Stop {
    $wsh = New-Object -com wscript.shell
    $wsh.SendKeys([char]178)
}