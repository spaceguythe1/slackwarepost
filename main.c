#include <stdio.h>
#include <stdlib.h>
#include <string.h>  
  
  
void title(){
printf("  _________                                                __  .__           ____/\              .__                 __                                                           __                         \n");
printf(" /   _____/__________    ____  ____   ____  __ __ ___.__._/  |_|  |__   ____/_   )/______   _____|  | _____    ____ |  | ____  _  _______ _______   ____     ____  __ __  _______/  |_  ____   _____   ______\n");
printf(" \_____  \\____ \__  \ _/ ___\/ __ \ / ___\|  |  <   |  |\   __\  |  \_/ __ \|   |/  ___/  /  ___/  | \__  \ _/ ___\|  |/ /\ \/ \/ /\__  \\_  __ \_/ __ \  _/ ___\|  |  \/  ___/\   __\/  _ \ /     \ /  ___/\n");
printf(" /        \  |_> > __ \\  \__\  ___// /_/  >  |  /\___  | |  | |   Y  \  ___/|   |\___ \   \___ \|  |__/ __ \\  \___|    <  \     /  / __ \|  | \/\  ___/  \  \___|  |  /\___ \  |  | (  <_> )  Y Y  \\___ \ \n");
printf("/_______  /   __(____  /\___  >___  >___  /|____/ / ____| |__| |___|  /\___  >___/____  > /____  >____(____  /\___  >__|_ \  \/\_/  (____  /__|    \___  >  \___  >____//____  > |__|  \____/|__|_|  /____  >\n");
printf("        \/|__|       \/     \/    \/_____/        \/                \/     \/         \/       \/          \/     \/     \/              \/            \/       \/           \/                    \/     \/ \n");
};

int main(){
    char ans[1] = "n";
    int res = 0;
    res = system("ls /usr/local/bin/seatbelt");
    if(res != 0){
        printf("Seatbelt not found. Install?\n");
        scanf("y/N: %s\n", ans);
        if((strcmp(ans, "y")) == 0){
            system("cd ~ && git clone https://github.com/spaceguythe1/seatbelt");
            system("chmod +x ~/seatbelt/install.sh");
            res = system("cd ~/seatbelt && sudo ./install.sh");
            if(res != 0){
                printf("Seatbelt installation failed for some reason.\n");
                return 1;
            };
        }
        else{
            printf("Install cannot continue without seatbelt.\n");
            return 1;
        }

        // after seatbelt install
        printf("This script will begin to install the dotfiles. This can delete data;\n so its advised that you only run this script of freshly installed copy of slackware.");
        _sleep(1);
        printf("Proceed? y/N: ");
        scanf("%s", ans);
        printf("\n");
        if((strcmp(ans, "y")) == 0){
            printf("OK\n");
        }
        else{
            printf("Canceling...\n");
            return 1;
        };

        // begin mass installation
        res = system("seatbelt -g kitty");
        if(res != 0){
            printf("Package kitty failed to install\n");
            return 1;
        };
        res = system("seatbelt -g fastfetch");
        if(res != 0){
            printf("Package fastfetch failed to install\n");
            return 1;
        };
        res = system("seatbelt -g btop");
        if(res != 0){
            printf("Package btop failed to install\n");
            return 1;
        };
        res = system("seatbelt -g i3");
        if(res != 0){
            printf("Package i3 failed to install\n");
            return 1;
        };
        res = system("seatbelt -g i3status");
        if(res != 0){
            printf("Package i3status failed to install\n");
            return 1;
        };
        res = system("seatbelt -g i3lock");
        if(res != 0){
            printf("Package i3lock failed to install\n");
            return 1;
        };
        res = system("seatbelt -g flatpak");
        if(res != 0){
            printf("Package flatpak failed to install\n");
            return 1;
        };
        res = system("seatbelt -g qsstv");
        if(res != 0){
            printf("Package qsstv failed to install\n");
            return 1;
        };
        res = system("seatbelt -g rofi");
        if(res != 0){
            printf("Package rofi failed to install\n");
            return 1;
        };
        res = system("seatbelt -g mpv");
        if(res != 0){
            printf("Package mpv failed to install\n");
            return 1;
        };
        res = system("seatbelt -g supertuxkart");
        if(res != 0){
            printf("Package supertuxkart failed to install\n");
            return 1;
        };
        res = system("seatbelt -g vscodium");
        if(res != 0){
            printf("Package vscodium failed to install\n");
            return 1;
        };
        res = system("seatbelt -g libreoffice");
        if(res != 0){
            printf("Package libreoffice failed to install\n");
            return 1;
        };
        res = system("seatbelt -g librewolf");
        if(res != 0){
            printf("Package librewolf failed to install\n");
            return 1;
        };
        res = system("seatbelt -g dosbox");
        if(res != 0){
            printf("Package dosbox failed to install\n");
            return 1;
        };
        res = system("seatbelt -g virt-manager");
        if(res != 0){
            printf("Package virt-manager failed to install\n");
            return 1;
        };
        res = system("seatbelt -g qemu");
        if(res != 0){
            printf("Package qemu failed to install\n");
            return 1;
        };
        res = system("seatbelt -g wine");
        if(res != 0){
            printf("Package wine failed to install\n");
            return 1;
        };

        res = system("seatbelt -g greetd");
        if(res != 0){
            printf("Package greetd failed to install\n");
            return 1;
        };
        system("bash greetd-setup.sh");

        // flatpak setup
        res = system("flatpak remote-add --user --if-not-exists flathub https://dl.flathub.org/repo/flathub.flatpakrepo");
        if(res != 0){
            printf("flatpak failed to add the flathub repo.\n");
            return 1;
        }; 

        res = system("flatpak install flathub com.valvesoftware.Steam");
        if(res != 0){
            printf("Flatpak failed to install steam\n");
            return 1;
        };
        res = system("flatpak install flathub org.vinegarhq.Sober");
        if(res != 0){
            printf("Flatpak failed to install sober\n");
            return 1;
        };
        res = system("flatpak install flathub org.prismlauncher.PrismLauncher");
        if(res != 0){
            printf("Flatpak failed to install prismlauncher\n");
            return 1;
        };
        res = system("flatpak install flathub org.videolan.VLC");
        if(res != 0){
            printf("Flatpak failed to install VLC\n");
            return 1;
        };
        res = system("flatpak install flathub fr.handbrake.ghb");
        if(res != 0){
            printf("Flatpak failed to install handbrake\n");
            return 1;
        };
        res = system("flatpak install flathub org.kde.kdenlive");
        if(res != 0){
            printf("Flatpak failed to install kdenlive\n");
            return 1;
        };
        res = system("flatpak install flathub com.obsproject.Studio");
        if(res != 0){
            printf("Flatpak failed to install obs studio\n");
            return 1;
        };

        // fastfetch shiiii
        system("mkdir -p ~/.config/fastfetch/");
        system("mv fastfetchascii.txt ~/.config/fastfetch/ascii.txt");
        system("mv fastfetch.jsonc ~/.config/fastfetch/config.jsonc");

        // i3 shiii
        system("mkdir ~/.config/i3");
        system("mkdir ~/.config/i3status");
        system("mv i3config ~/.config/i3/config");
        system("sudo mv i3config /etc/i3status.conf");
        system("mv wall.jpg ~/Pictures/wall");

        // bash corrections
        system("rm ~/.bashrc");
        system("mv .bashrc ~/.bashrc");

        return 0;
    };
}