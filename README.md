# Antman

### Introduction

L'antman est un programme qui permet de compresser des données. Il traite la lecture et écriture de fichiers.



### Fonctionnement

Le projet utilise un système de compression via un dictionnaire. Comme on peut le constater sur l'exemple d'un fichier HTML simple comme ci-dessous, on retrouve souvent les mêmes mots clé.

```html
<!DOCTYPE html>
<html>
  <head>
    <meta charset="UTF-8">
    <title>Service Worker Toolbox</title>
  </head>
  <body>
    <!-- Images -->
    <img src="/images/contact.svg" height="80" width="80" />
    <img src="/images/info.svg" height="80" width="80" />
    <img src="/images/cv.svg" height="80" width="80" />
    <!-- JavaScript -->
    <script async src="https://ajax.googleapis.com/ajax/libs/angularjs/1.3.15/angular.min.js"></script>
  </body>
</html>
```

Par exemple les mots-clés "img", "height" ou encore "images" sont des mots qu'on retrouve souvent dans le texte. L'idée est donc de les remplacer par des nombres, par exemple "img" deviendra "0", "height" deviendra "1" et "images" "2". Les indices correspondants aux mots-clés sont ensuite sauvegardés dans un dictionnaire en entête du fichier.

### Utilisation

La commande ./antman permet de compresser un fichier tandis que le ./giantman décompresse un fichier.

./antman file\_name 1

Où filename est le nom du fichier et 1 est le type de compression. Il y a 3 types de compression;

* 1, correspond aux fichiers contenant des paroles de musique
* 2, correspond aux fichiers contenant du code HTML
* 3, correspond aux fichiers contenant du P3 PPM images
