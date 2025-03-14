<!DOCTYPE html>
<html lang="sv">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Show Page</title>
    <link rel="stylesheet" href="index.css">
</head>
<body>
    <nav>
        <a href="#" onclick="showPage('home'); return false;">Hem</a>
        <a href="#" onclick="showPage('printers'); return false;">Information 3D-Scanning/Printing</a>
        <a href="#" onclick="showPage('contact'); return false;">Kontakt</a>
    </nav>
    <div id="content" class="container"></div>
    <script>
        function showPage(page) {
            document.getElementById("content").style.opacity = "0";
            setTimeout(() => {
                let content = {
                    'home': `
					<H1>3D PRINTING</H1>
					<h1>BARA <STRONG>DIN</STRONG> FANTASI OCH KUNSKAP SOM KAN SÄTTA STOPP!!!</H1>
					   
					   <h2>Vad är då 3D-Printing och 3D-Scanning?</h2>
                        <p><strong>3D-Printing</strong> är en teknik där tredimensionella objekt skapas genom att lager av material byggs upp baserat på en digital modell. Detta möjliggör snabb och anpassad tillverkning inom olika industrier, inklusive medicin, bilindustrin och design.</p>
                        <p><strong>3D-Scanning</strong> används för att digitalisera fysiska objekt genom att skapa en exakt digital representation. Det används ofta inom reverse engineering, medicinsk forskning, konstbevaring och industriella tillämpningar.</p>
                        <h2>Hur fungerar tekniken?</h2>
                        <ul>
                            <p><li><strong>FDM (Fused Deposition Modeling):</strong> Smälter och extruderar plasttråd lager för lager.</li></p>
							
	<div id="prettyWrapper">
    <div class="inblock">
 <img src="images/fdm skrivare.jpg" alt="Beskrivning">  <img src="images/filament.jpg" alt="Beskrivning"> <img src="images/lok.jpg" alt="Beskrivning">
 <div class="caption"><p style='color: red;'><strong>Exempel på FDM Skrivare sen vanlig PLA FDM Plasttråd till en färdig produkt. På denna bild ett lok</strong></p>
                            
							<p><li><strong>SLA (Stereolithography):</strong> Härdar flytande resin med en laser.</li></p>
							<div id="prettyWrapper">
    <div class="inblock">
 <img src="images/sla.jpg" alt="Beskrivning">  <img src="images/sla medel.jpg" alt="Beskrivning"> <img src="images/sla slut.jpg" alt="Beskrivning">
 <div class="caption"><p style='color: red;'><strong>Vanlig prisvärd SLA Skrivare, sem här använder man flytande material och till sist en färdig detaljerad produkt.</strong></p>
                            
                            <p><li><strong>SLS (Selective Laser Sintering):</strong> Använder en laser för att smälta pulvermaterial och skapa detaljerade objekt.</li></p>
                        </ul>
<div class="inblock">
 <img src="images/sls maskin.jpg" alt="Beskrivning">  <img src="images/sls medel.jpg" alt="Beskrivning"> <img src="images/sls klar.jpg" alt="Beskrivning">
 <div class="caption"><p style='color: red;'><strong>SLS Skrivare och som ni kan se så är det för företag. Materialet är då till denna maskin pulver och ja ni ser ju resultatet själv.</strong></p>						
                        
						<h2>Användningsområden</h2>
                        <p>3D-teknologi används inom en rad områden:</p>
                        <ul>
                            <li><strong>Medicin:</strong> Proteser, implantat och anatomiska modeller.</li>
                            <li><strong>Industri:</strong> Prototyper och anpassade verktyg.</li>
                            <li><strong>Konst och design:</strong> Skulpturer, mode och specialdesignade produkter.</li>
                            <li><strong>Arkitektur:</strong> Skapande av modeller för byggnadsprojekt.</li>
                        </ul>
                    
                    `,
                    'printers': `
                        <h1>Arbetsgång för ”3D-Scannat objekt till 3D-Printbar fil”</h1>
                        
<p>När ett objekt har scannats så får man en mesh fil, ett skal av den scannade ytan bestående av referenspunkter som bildar trianglar. När filen importeras i programmet, ex Fusion 360, så behöver man se över eventuell missad data som kan generera hål i meshen eller direkta fel i den avbildade scanningen. Det kan även komma med oönskad scannat material från omgivningen som behöver rensas undan.
När filen väl är lagad och meshen är rensad och hel sparas den bara som en .stl fil och importeras i slicer programmet.
I slicer programmet väljer man de inställningar man önskar och sparar som .gcode fil, den filen innehåller inställningsvärden för skrivaren, så som temperatur, hastighet, matning och koordinater i X-Y-Z led som skrivaren sedan följer.</p>
                        
                        <h2>Skillnader mellan Ipad, Artec och ATOS scanners</h2>
                       <p>Vi testade att scanna med iPad, Artec Eva och Atos scanner, och just funktionellt fungerar ju scanningen på liknande sätt. Man fotograferar objektet från de sidor man vill få med. 

<Strong>iPad eller iPhone</strong>/Android telefon kan man i dag scanna av objekt och få ett resultat som passar för enklare modellering, så som mindre skulpturer, byster eller saker med mindre noggrannhet. <em>Användningsområde:</em> Lämpar det sig mest åt enklare avbildningar för hemma användare, lägre detaljrik.</p>
						 
<div id="prettyWrapper">
    <div class="inblock">
        <img src="images/clone.jpg" alt="Beskrivning">     <img src="images/clone-2.jpg" alt="Beskrivning">
        <div class="caption"><p style='color: red;'><strong>Scanning med iPhone och Appen </strong><em>Qlone</em></p></div>
    </div>
    <p><strong>Artec Eva</strong> är en handhållen scanner som levererar ett väldigt bra resultat, med en noggrannhet upp till 0,1mm och är lämplig för medel till stora objekt. Man scannar av objektet genom att föra scannern över eller runt tills alla ytor är scannade, scannern tar kontinuerligt bilder och det gäller att försöka scanna snabbt men samtidigt få med alla vinklar, vilket kräver övning, eftersom scannern hela tiden samlar data i bilderna så kan filerna bli väldigt tunga om man är för långsam.
                Man får en hög detaljrikedom men det krävs att objektet är helt stilla under processen. 
                <em>Användningsområde:</em> 
För professionell användning, för medelstora föremål, enkel och snabb användning med hög detaljrikedom, skapa virtuella 3d modeller, konst, design, sjukvård, enkel att ha med ut i fält, även reverse engineering.</p>
<p><strong>Atos</strong> scanner skiljer sig mot föregående scanners på det sättet att scannern monteras fast och man snurrar objektet och tar en stillbild/scanning och sedan roterar objektet och tar en ny bild och upprepar tills man täckt av alla vinklar, Atos kan också monteras på en robot som då tar bilderna runt objektet från de vinklar som krävs.  
Den har hög noggrannhet, Upp till 0,02mm.
<em>Användningsområde:</em> 
Reverse engineering, inspektioner/analyser, uppmätning och kontroller.</p>  

<div id="prettyWrapper">
    <div class="inblock">
        <img src="images/Atos1.jpg" alt="Beskrivning">     <img src="images/Atos2.jpg" alt="Beskrivning">
        <div class="caption"><p style='color: red;'><strong>Scanning med Atos scanner <em>Qlone</em></strong></p></div>
    </div>

                        <h2>Jämförelse scannat objekt (stl) med CAD-fil (stl eller stp).</h2>
                       <p>En scannad fil innehåller mätpunkter från det scannade objektet, dessa mätpunkter bildar trianglar så som ett nät, en mesh. Det har alltså ingen egentlig yta eller innehåll, men alla punkter har en referens i koordinatsystemet.  
Egentligen så saknar ett mesh objekt mycket data då det bara är dessa punkter som har en koordinat i filens koordinatsystem som har referens och det hänger på upplösningen, punkttätheten/storleken på trienglarna, hur detaljerad filen är. 
En CAD fil bildar en solid modell och har alltså volym och fasta referenser överallt, du kan ta fram all data du vill från CAD filen.</p>

<div id="prettyWrapper">
    <div class="inblock">
        <img src="images/meshfilihålig.jpg" alt="Beskrivning"> <img src="images/stpfilsolid.jpg" alt="Beskrivning">
        <div class="caption"><p style='color: red;'><strong>Meshfil ihålig se bild vänster. .stp fil, dvs solid bild höger</strong></p></div>
    
	<h2>Arbetsprocess och användningsområde.</h2> 
<p>I ett mätprogram, som ex GOM Inspect, kan man importera både den scannade geometrin och original CAD filen, lägga samman den de båda geometrierna och mäta avvikelser och eventuella defekter i den tillverkade detaljen. 
Man kan enkelt mäta avvikelser på små ytor och detaljer och även den totala avvikelsen på detaljen som helhet. 
I tillverkningsindustrin kan den här metoden användas för kvalitetssäkring och man kan upptäcka väldigt små avvikelser.</p>

<div id="prettyWrapper">
    <div class="inblock">
        <img src="images/gom.jpg" alt="Beskrivning">
        <div class="caption">
            <p style='color: red;'><strong>Exempel på mätdata i GOM Inspect</strong></p>
        </div>
        <h2>Branscher 3D-Scanning</h2> 
<p>Några få exempel på branscher där 3d scanning används i dag är:</p>
 <ol>
                <ul>
                   <li><strong>Tillverkningsindustrin:</strong> kontroll/kvalitetssäkring, reverse engineering, prototypframtagning, CAD konstruktion.</li>
<li><strong>Arkitektur.</strong></li>
<li><strong>Sjukvård:</strong> ortopedi, proteser, plastikkirurgi, personligt anpassade hjälpmedel och produkter.</li>
<li><strong>Design/mode:</strong> framtagning av VR/AR miljöer, skapande av ex kläder och möbler.</li>
<li><strong>Arkeologi:</strong> bevaring av kulturarv och fornlämningar, skapa kopior eller virtuella miljöer.</li>
<li><strong>CSI, brottsplatsundersökningar:</strong> Scanning av prottsplatser, föremål eller direkta skador.</li>
<li><strong>Fordonsindustrin:</strong> kvalitetssäkring i tillverkningsprocessen, design av nya modeller, analyser och simuleringar.</li>
<li><strong>Bygg:</strong> scanning av lokaler, ytor och även landskap.</li>
                </ul>
            </li>
      
        </ol>
                    `,
                    'contact': `
                        <h1>Kontakta mig</h1>
                        <p>Har du frågor kring 3D-printing eller Scanning? Tveka inte att höra av dig!</p>
                        <form onsubmit="return submitForm(event)">
                            <input type="text" placeholder="Ditt namn" required>
                            <input type="email" placeholder="Din e-post" required>
                            <textarea placeholder="Ditt meddelande" rows="4" required></textarea>
                            <button type="submit">Skicka</button>
                        </form>
                       <p id="confirmation" style="color: gold; display: none;">Ditt meddelande har skickats!</p>
                    `
                };
                document.getElementById("content").innerHTML = content[page];
                document.getElementById("content").style.opacity = "1";
            }, 300);
        }
        
        function submitForm(event) {
            event.preventDefault();
            document.getElementById("confirmation").style.display = "block";
            setTimeout(() => {
                document.getElementById("confirmation").style.display = "none";
            }, 5000);
        }
        
        document.addEventListener("DOMContentLoaded", function () {
            showPage('home');
        });
    </script>
	    <footer>
        <p>&copy; 2024 3D-Printing Website. All rights reserved.</p>
        <p>Adress: 3D-Tech Street 123, 12345 Stockholm, Sverige</p>
    </footer>
</body>
</html>
