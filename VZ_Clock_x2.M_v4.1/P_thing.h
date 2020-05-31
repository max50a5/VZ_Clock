const char P_thing[] PROGMEM =  R"=====(
<html>
    <head>
        <!--meta name = "viewport" content = "width=device-width, initial-scale=1.0"-->
        <meta http-equiv = "Content-type" content = "text/html; charset=utf-8">
        <title>Часы-метеостанция VZ_Clock_x2.M_v4.1 (by IvanZah)</title>
        <link rel="shortcut icon" href="#" />
        <link rel = "stylesheet" type = "text/css" href = "/style.css">
        <script type = "text/javascript" src = "/function.js"></script>
        <script type = "text/javascript">
            function set_thing_ust(submit) {
                server = "/thingUst?writeapikey=" + val('writeapikey') + "&channelid=" + val('channelid') + "&humThinkOnOff=" + val_sw('humThinkOnOff');
                server += "&sendThing=" + val_sw('sendThing') + "&sendtemp=" + val_sw('sendtemp') + "&sendtempul=" + val_sw('sendtempul') + "&sendother=" + val_sw('sendother');
                server += "&sendhum=" + val_sw('sendhum') + "&sendpress=" + val_sw('sendpress') + "&getThing=" + val_sw('getThing');
                send_request(submit,server);
            }
        </script>
    </head>
    <body onload = "load_thing();">
        <header>
            <span class="opt_cn">Часы-метеостанция VZ_Clock_x2.M_v4.1 (by IvanZah)</span><br>
        </header>       
        <central-unit>
            <div class="menu_unit">
                <a class="link__img" href="/index.html"><span class="ico__text">Wifi</span></a>
                <a class="link__img" href="/time.html"><span class="ico__text">Время</span></a>
                <a class="link__img" href="/thing.html"><span class="ico__text">thing</span></a>  
                <a class="link__img" href="/mqtt.html"><span class="ico__text">Mqtt</span></a>
                <a class="link__img" href="/weather.html"><span class="ico__text">Прогноз</span></a>
                <a class="link__img" href="/setup.html"><span class="ico__text">Настройки</span></a>
                <a class="link__img" href="/help.html"><span class="ico__text">Помощь</span></a>
            </div>
            <titles>
                <div class="opt_cn">Настройки ThingSpeak.com</div>
            </titles>
            <div class="informer">
                <span class="opt_cn">Здесь нужно ввести ключ записи (Write API Key) или номер канала (Channel ID)</span>
            </div>        
            <br>                
            <div id="main_unit">
                <hr>                    
                    <label class="switch"><span class="opt_cn">Отправлять данные на ThingSpeak (Да/Нет)</span>
                        <input type="checkbox" id="sendThing">
                        <span class="switch-btn"></span>
                    </label>
                <hr> 
                 <br>     
                    <tr>
                        <td align = "right"><span class="opt_cn">API ключ записи</span></td>
                        <td><input type="text" class="field form-control" id="writeapikey" value="{{writeapikey}}" pattern="[- 0-9a-zA-Z._/]{1,20}"></td>
                    </tr>
                 <br>
                 <br> 
                    <label class="switch"><span class="opt_cn">Отправлять температуру (Да/Нет)</span>
                        <input type="checkbox" id="sendtemp">
                        <span class="switch-btn"></span>
                    </label>
                    <br>
                    <label class="switch"><span class="opt_cn">Отправлять уличную температуру (Да/Нет)</span>
                        <input type="checkbox" id="sendtempul">
                        <span class="switch-btn"></span>
                    </label>
                    <br>
                    <label class="switch"><span class="opt_cn">Отправлять дополнительные данные (Да/Нет)</span>
                        <input type="checkbox" id="sendother">
                        <span class="switch-btn"></span>
                    </label>
                    <br>
                     <label class="switch"><span class="opt_cn">Отправлять влажность (Да/Нет)</span>
                        <input type="checkbox" id="sendhum">
                        <span class="switch-btn"></span>
                    </label>
                    <br>                   
                    <label class="switch"><span class="opt_cn">Отправлять давление (Да/Нет)</span>
                        <input type="checkbox" id="sendpress">
                        <span class="switch-btn"></span>
                    </label>
                    <br>  
                    <br>                   
                <hr>                    
                    <label class="switch"><span class="opt_cn">Получать данные с ThingSpeak (Да/Нет)</span>
                        <input type="checkbox" id="getThing">
                        <span class="switch-btn"></span>
                    </label>
                <hr> 
                    <br>        
                    <tr>
                        <td align = "right"><span class="opt_cn">Номер канала</span></td>
                        <td><input type="text" class="field form-control" id="channelid" value="{{channelid}}" pattern="[- 0-9a-zA-Z._/]{1,20}"></td>
                    </tr>
                    <br>     
                    <br>                
                     <label class="switch"><span class="opt_cn">Показывать влажность (Да/Нет)</span>                     
                        <input type="checkbox" id="humThinkOnOff">
                        <span class="switch-btn"></span>
                    </label> 
                    <br>   
                    <div class="informer">
                        <span class="opt_cn">Влажность будет показываться по нечетным минутам ("капелька" закрашена)</span>
                    </div>    
                    <br>                          
                <span class="save_booton" onclick="set_thing_ust(this);">Сохранить настройки</span>
                <br>
            </div>
            <div>
                <a href="http://forum.amperka.ru/threads/%D0%A7%D0%B0%D1%81%D1%8B-%D0%BD%D0%B0-esp-01-nodemcu-max7219-web-%D0%B8%D0%BD%D1%82%D0%B5%D1%80%D1%84%D0%B5%D0%B9%D1%81.12767/">Форум</a>
                <a href="https://github.com/IZ76/ESP8266_Clock_Weather-station_Informer_with_WEB_interface">GitHub</a>
                <a href="https://www.youtube.com/channel/UCGkErLs3cwCeTj5mcsObgVA">YouTube</a>
                <a href="https://play.google.com/store/apps/details?id=com.vz_clock.clock">Приложение</a>                
                <a href="https://github.com/max50a5/VZ_Clock" class = "right">Форк max50a5</a>
            </div>
        </central-unit>
    </body>
</html>
)=====";
