 <font size = 3># Francisco Javier Mata Blanco - 2016106889

## Un usuario de telefonía móvil se encuentra en un auto en movimiento a 30 kms por hora, el mismo cruza el límite de una celda y de pronto la llamada actual se detiene de forma repentina, asumiendo que todo el sistema se encuentra funcionando de forma adecuada, ¿Por qué razón la llamada se detiene?

 Cuando un usuario está en una llamada, está utilizando un canal, cuando sale el teléfono móvil de una celda su estación base deja de obtener la señal (se va desvaneciendo), entonces pregunta a las estaciones base circundantes cual está recibiendo la señal con más fuerza, normalmente es la celda donde se encuentra el teléfono en ese preciso momento, entonces seguidamente se le informa al telefono de su nuevo jefe, al estar el celular en una llamada se le solicita al teléfono que cambie de canal por que los canales no se reutilizan en las celdas adyacentes. Este cambio se llama entrega o en inglés “handoff” y tarda un aproximado de 300 mseg. El encargado de asignar el canal es el MSC ya que las estaciones base son en realidad retransmisoras de radio sin inteligencia. Esa es la razón de la pequeña pausa de la llamada.



## ¿Explique de forma concisa porqué la transmisión de ondas de baja frecuencia no es práctica en medios inalámbricos?

Porque no es buena idea usar señales de muy baja frecuencia en los canales inalámbricos, ya que las antenas deben ser de una fracción de la longitud de onda de la señal. Es mejor usar un rango de frecuencia que no llegue a cero para enviar información por un canal. La elección de frecuencias se hace en base a las restricciones regulatorias y la necesidad de evitar interferencias. También sucede que la estación base que recibe una señal débil va a ocupar más potencia que la que recibe una señal fuerte.

## Ante una crisis como conflicto bélico o un desastre natural, que daña o afecta los canales de comunicación o infraestructura de un país, ¿Qué tipo de transmisión recomendaría a ese país para mantener comunicación con el resto del mundo? Explique

Todos tienen sus ventajas y desventajas pero en una guerra el espectro electromagnético es una buena idea ya que es inalámbrico entonces la infraestructura no es tan vulnerable  ya que no hay cables ni postes, pero también porque en el espectro disperso con salto de frecuencia el transmisor salta de frecuencia en frecuencia  cientos de veces en por segundo, entonces las transiciones son difíciles de detectar y casi imposibles de bloquear. Ya que el receptor no va a estar en una frecuencia dañada mucho tiempo como para detener la comunicación entonces ofrece una buena resistencia al desvanecimiento multitrayectoria y a la interferencia de banda estrecha.

## Explique el concepto ancho de banda en telecomunicaciones

Es la mayor cantidad de datos que se envían de un lugar a otro en un tiempo definido. El ancho de banda se mide en bit/s.

## Explique las diferencias entre conmutación de paquetes y conmutación de circuitos

Algunas diferencias son que la conmutación de circuitos requiere que un circuito se establece de extremo a extremo antes de que comience la comunicación, mientras que la de paquetes no ocupa un establecimiento previo. El primer paquete puede enviarse tan pronto esté disponible.
El resultado de que se establece la conmutación por circuito es la reserva de ancho de banda que se realiza desde el emisor hasta el receptor. Todos los paquetes siguen esta trayectoria lo que significa que nunca llegan en desorden. Con la conmutación de paquetes no hay trayectoria, entonces distintos paquetes pueden tener trayectorias distintas, esto depende de las condiciones de la red en el momento de enviarse, ósea pueden llegar en desorden.
En general la conmutación de paquetes es más tolerante a fallas que la conmutación de circuitos. Y esa es la razón principal por la que se creó.
Debido a que la de circuitos reserva ancho de banda entonces cuando llega un paquete puede ser enviado inmediatamente, mientras que el la conmutación de paquetes puede que el nuevo paquete deba esperar su turno ya que no se reserva ancho de banda.
Tener reservado el ancho de banda evita la congestión a no ser que lleguen más de los esperados.
Si un circuito reservado para un usuario en particular no tiene tráfico que enviar, ese ancho de banda se desperdicia y no se puede usar para otro tráfico, al contrario de la conmutación de paquetes que no reserva ancho de banda.
</font>