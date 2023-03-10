# Git

[TOC]

## Hinter der Bühne

### git-init

**git init** erzeugt ein neues Repository. Dabei wird ein *.git* Verzeichnis angelegt. 

- HEAD
  HEAD  ist eine Datei und teilt mit, welches der aktuelle checked-out Branch, Commit oder TAG ist.
- config
  Git basierende Konfiguration. Üblicherweise maschinenweit gültig.
- objects
  Alle unsere Daten wandern in dieses Verzeichnis.
- refs
  Referenzen wie Branches, Remote Branches oder Tags sind hier gespeichert. 

```
D:\Projects\cookbook\my_repo>git init
Initialized empty Git repository in D:/Projects/cookbook/my_repo/.git/
```

### Three stages of a git repository

- Working Directory
- Index
- Repository

Beim Arbeiten in einem Repository durchwandern wir immer den gleichen Weg. 

1. Make Changes (Working Directory)
2. Add Changes (Index)
3. Commit Changes (Repository)

### git status

**git status** zeigt den aktuellen Zustand unserer Arbeit. 

```
D:\Projects\cookbook\my_repo>echo "Hallo Welt" >> hello
D:\Projects\cookbook\my_repo>git status
On branch master

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)
        hello

nothing added to commit but untracked files present (use "git add" to track)
```

### git add

**git add** fügt unsere Arbeit zum (Repository) Index hinzu,

Schon damit erzeugt *git* ein Objekt mit den Änderungen unterhalb des Verzeichnisses *objects*. Außerdem erzeugt *git* den Index dieser Änderung und legt ihn in *.git/index* ab. 

```
D:\Projects\cookbook\my_repo>git add .

D:\Projects\cookbook\my_repo>git status
On branch master

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
        new file:   hello
```

### git commit

**git commit** schließlich fügt unsere Arbeit dem *Repository* hinzu.

Mit *git commit* wird auch eine neue Datei erzeugt *refs/head/master* mit einem Hash als Inhalt. 

```
D:\Projects\cookbook\my_repo>git commit -m "add hallo welt"
[master (root-commit) 213b3d6] add hallo welt
 1 file changed, 1 insertion(+)
 create mode 100644 hello
```

### Merke 

- Alle unsere Daten, Änderungen und Commits sind irgendwie als Hashes auf unserem Dateisystem gelandet.
- Auch wenn mir unsere Änderungen nicht 'Committen' und wir unsere Änderungen nur zum Index hinzufügen, sind diese Änderungen gesichert und können nicht mehr verlorengehen.

## Anatomie eines git commit

### Hash Funktion

- sha-1

Wir sehen also eine Ansammlung von Hash-Werten, die aufgrund eines *Commits* entstanden sind. In *git* heissen diese Hashes **object IDs**. Wobei *git* sich den SHA-1 Hash-Algorithmus zunutze macht. SHA-1 erzeugt einen 160 Bit grossen Hash, welcher dann durch Hexadezimal-Ziffern dargestellt wird.

### git hash-object

Mit dem Befehl **git hash-object** kann man einen Hash seines Objekts erzeugen. Wenn wir also z.B. eine Datei mit Namen '*hello*' und dem Inhalt '*Hallo Welt*' im Repository haben, dann kann man sich den Hash mit **git hash-object hello** erzeugen. Und vergleicht man dann den Hash mit einem der Hashes aus dem Repository, kann man den Hash wiedererkennen. Tatsächlich erzeugt **git has-object** den Hash nur aus den Daten, die in der Datei vorhanden sind. 

```
D:\Projects\cookbook\my_repo>git hash-object hello
7132836c3d64077eee1dd306a6c9944f84e53bbc
```

### git cat-file

Eine andere Möglichkeit, unsere Daten zu verifizieren, ist das Kommando **git cat-file** zusammen mit der Object ID. Also quasi das entgegensetzte Kommando zu git hash-object. 

```
D:\Projects\cookbook\my_repo>git cat-file -p 7132836c3d64077eee1dd306a6c9944f84e53bbc
"Hallo Welt"
```

Mit **git cat-file** kann auch der Typ der *Object ID* ermittelt werden. *blob* bedeutet z.B. *binary large object*.

```
D:\Projects\cookbook\my_repo>git cat-file -t 7132836c3d64077eee1dd306a6c9944f84e53bbc
blob
```

### git Objekte

- blobs, trees, commits, and annotated tags

Wenn man sich das Repository unseres ersten Commits anschaut, dann erkennt man drei Objekte in der Datenbank (im Verzeichnis objects). Mit git cat-file können wir jetzt den Inhalt und den Typ für diesen Commit uns anzeigen lassen. 

```
D:\PROJECTS\COOKBOOK\MY_REPO\.GIT
│   COMMIT_EDITMSG
│   config
│   description
│   HEAD
│   index
│
├───hooks
│       applypatch-msg.sample
│       commit-msg.sample
│       fsmonitor-watchman.sample
│       post-update.sample
│       pre-applypatch.sample
│       pre-commit.sample
│       pre-merge-commit.sample
│       pre-push.sample
│       pre-rebase.sample
│       pre-receive.sample
│       prepare-commit-msg.sample
│       update.sample
│
├───info
│       exclude
│
├───logs
│   │   HEAD
│   │
│   └───refs
│       └───heads
│               master
│
├───objects
│   ├───21
│   │       3b3d65cbf74f11ac75035215ba3f8bf97045fb
│   │
│   ├───5b
│   │       b3e43e5dd835b4a49fd95f58e730323c388cf7
│   │
│   ├───71
│   │       32836c3d64077eee1dd306a6c9944f84e53bbc
│   │
│   ├───info
│   └───pack
└───refs
    ├───heads
    │       master
    │
    └───tags
```

```
D:\Projects\cookbook\my_repo>git cat-file -p 213b3d65cbf74f11ac75035215ba3f8bf97045fb
tree 5bb3e43e5dd835b4a49fd95f58e730323c388cf7
author unknown <mstephan.mail@gmx.de> 1672309269 +0100
committer unknown <mstephan.mail@gmx.de> 1672309269 +0100

add hallo welt

D:\Projects\cookbook\my_repo>git cat-file -t 213b3d65cbf74f11ac75035215ba3f8bf97045fb
commit
```

```
D:\Projects\cookbook\my_repo>git cat-file -p 5bb3e43e5dd835b4a49fd95f58e730323c388cf7
100644 blob 7132836c3d64077eee1dd306a6c9944f84e53bbc    hello

D:\Projects\cookbook\my_repo>git cat-file -t 5bb3e43e5dd835b4a49fd95f58e730323c388cf7
tree
```

```
D:\Projects\cookbook\my_repo>git cat-file -p 7132836c3d64077eee1dd306a6c9944f84e53bbc
"Hallo Welt"

D:\Projects\cookbook\my_repo>git cat-file -t 7132836c3d64077eee1dd306a6c9944f84e53bbc
blob
```

Ein Commit besteht also immer aus drei Object IDs: commit, tree, blob

### git log

Mit git log kann man sich den die git Hisorie anschauen und kann auch hier den Hash-Wert unseres Commits sehen. 

```
D:\Projects\cookbook\my_repo>git log
commit 213b3d65cbf74f11ac75035215ba3f8bf97045fb (HEAD -> master)
Author: unknown <mstephan.mail@gmx.de>
Date:   Thu Dec 29 11:21:09 2022 +0100

    add hallo welt
```

### Merkle Tree

Git arbeitet also mit einigen wenigen Objekt-Typen: blobs, trees, commits und annotated tags (die noch kommen werden). Ein Commit ist ein Hash mit Metadata und einem weiteren Hash-Wert, der auf ein Tree-Objekt zeigt. Ein Tree-Objekt besteht ebenfalls aus Metadata und einem Hash-Wert, der auf einen anderen Tree oder Blob zeigt. Der Blob beinhaltet dann die eigentlichen Nutzdaten. Es ist ein sogenannter "Merkle Tree" entstanden. 

### Commit Anatomie

Ein Commit besteht also aus dem Commit selbst, der wiederum auf einen Tree zeigt, der wiederum auf einen Blob zeigt. In unserem Falle handelt es sich um den ersten Commit. Dieser erster Commit hat eine Besonderheit: er hat keinen Eltern-Commit. 

commit --> tree --> blob

### Commit Histories

Falls wir einen zweiten Commit in diesem Repository erzeugen, dann sehen wir genau die Dinge, die wir bisher gelernt haben. Mit einer Ausnahme. Der zweite Commit hat eine Referenz auf den Eltern-Commit. Mit dieser Information ist es git möglich, mit einem einzigen commit hash die komplette commit-Kette bis zum Anfang zurückzuverfolgen. 

```
D:\Projects\cookbook\my_repo>echo "Noch mehr" >> mehr

D:\Projects\cookbook\my_repo>git status
On branch master
Untracked files:
  (use "git add <file>..." to include in what will be committed)
        mehr

nothing added to commit but untracked files present (use "git add" to track)

D:\Projects\cookbook\my_repo>git add mehr

D:\Projects\cookbook\my_repo>git commit -m "noch mehr Zeugs"
[master fbadb8e] noch mehr Zeugs
 1 file changed, 1 insertion(+)
 create mode 100644 mehr

D:\Projects\cookbook\my_repo>
```

```
D:\Projects\cookbook\my_repo>git log
commit fbadb8e47dbb30cf1cf0c07fa155860228ffd7a7 (HEAD -> master)
Author: unknown <mstephan.mail@gmx.de>
Date:   Thu Dec 29 17:09:40 2022 +0100

    noch mehr Zeugs

commit 213b3d65cbf74f11ac75035215ba3f8bf97045fb
Author: unknown <mstephan.mail@gmx.de>
Date:   Thu Dec 29 11:21:09 2022 +0100

    add hallo welt

D:\Projects\cookbook\my_repo>
```

```
D:\Projects\cookbook\my_repo>git cat-file -p fbadb8e47dbb30cf1cf0c07fa155860228ffd7a7
tree f556e55e7957607516beb7f181c65fbafc78fb79
parent 213b3d65cbf74f11ac75035215ba3f8bf97045fb
author unknown <mstephan.mail@gmx.de> 1672330180 +0100
committer unknown <mstephan.mail@gmx.de> 1672330180 +0100

noch mehr Zeugs

D:\Projects\cookbook\my_repo>
```

### Merke

- Git benutzt den SHA-1 Hash Algorithmus um Integrität sicherzustellen. Git benutzt verschiedene Objekt-Typen und Metadata zusammen mit den eigentlichen Daten um jede Änderung und jeden Commit addressierbar zu machen.
- Es gibt vier verschiedene Objekt-Typen: blobs, trees, commits und annotated tags. 
- Mit einem einzigen Commit kann eine ganze Commit-Historie wiederhergestellt bzw. nachvollzogen werden. 

## Ein Branch ist nur ein Zeiger

Das Wichtigste voraus: Auch ein Branch ist nur ein Zeiger. Wenn man sich den Inhalt von .git/refs/heads/master anschaut, dann zeigt der Inhalt auf den letzten Commit dieses Repositories. Hier ist der Inhalt von ../master 'fbadb8e47dbb30cf1cf0c07fa155860228ffd7a7'.

```
D:\Projects\cookbook\my_repo>git log
commit fbadb8e47dbb30cf1cf0c07fa155860228ffd7a7 (HEAD -> master)
Author: unknown <mstephan.mail@gmx.de>
Date:   Thu Dec 29 17:09:40 2022 +0100

    noch mehr Zeugs

commit 213b3d65cbf74f11ac75035215ba3f8bf97045fb
Author: unknown <mstephan.mail@gmx.de>
Date:   Thu Dec 29 11:21:09 2022 +0100

    add hallo welt

D:\Projects\cookbook\my_repo>
```

### git branch und git checkout

Einen neuen Branch kann man mit git branch erstellen um danach mit git checkout darauf zu arbeiten. Machen wir das mal. 

```
D:\Projects\cookbook\my_repo>git branch feature1

D:\Projects\cookbook\my_repo>
D:\Projects\cookbook\my_repo>git branch
  feature1
* master

D:\Projects\cookbook\my_repo>git checkout

D:\Projects\cookbook\my_repo>git branch
  feature1
* master

D:\Projects\cookbook\my_repo>git checkout feature1
Switched to branch 'feature1'

D:\Projects\cookbook\my_repo>git branch
* feature1
  master

D:\Projects\cookbook\my_repo>
```

Damit hat man im Repository einen neuen Branch erzeugt,

```
└───refs
    ├───heads
    │       feature1
    │       master
    │
    └───tags
```

Genau wie der Master Branch zeigt der neue Feature1 Branch auf den letzten Commit. 

```
D:\Projects\cookbook\my_repo>git log
commit fbadb8e47dbb30cf1cf0c07fa155860228ffd7a7 (HEAD -> feature1, master)
Author: unknown <mstephan.mail@gmx.de>
Date:   Thu Dec 29 17:09:40 2022 +0100

    noch mehr Zeugs

commit 213b3d65cbf74f11ac75035215ba3f8bf97045fb
Author: unknown <mstephan.mail@gmx.de>
Date:   Thu Dec 29 11:21:09 2022 +0100

    add hallo welt

D:\Projects\cookbook\my_repo>
```

Wir können sogar einen neuen Branch manuell erstellen, indem wir den letzten Commit nehmen und ihn in eine neue Datei unter .git/refs/heads/... ablegen. 

```
D:\Projects\cookbook\my_repo>git log
commit fbadb8e47dbb30cf1cf0c07fa155860228ffd7a7 (HEAD -> feature1, master)
Author: unknown <mstephan.mail@gmx.de>
Date:   Thu Dec 29 17:09:40 2022 +0100

    noch mehr Zeugs

commit 213b3d65cbf74f11ac75035215ba3f8bf97045fb
Author: unknown <mstephan.mail@gmx.de>
Date:   Thu Dec 29 11:21:09 2022 +0100

    add hallo welt

D:\Projects\cookbook\my_repo>echo fbadb8e47dbb30cf1cf0c07fa155860228ffd7a7 >> .git\refs\heads\feature2

D:\Projects\cookbook\my_repo>git log
commit fbadb8e47dbb30cf1cf0c07fa155860228ffd7a7 (HEAD -> feature1, master, feature2)
Author: unknown <mstephan.mail@gmx.de>
Date:   Thu Dec 29 17:09:40 2022 +0100

    noch mehr Zeugs

commit 213b3d65cbf74f11ac75035215ba3f8bf97045fb
Author: unknown <mstephan.mail@gmx.de>
Date:   Thu Dec 29 11:21:09 2022 +0100

    add hallo welt

D:\Projects\cookbook\my_repo>git branch
* feature1
  feature2
  master

D:\Projects\cookbook\my_repo>git checkout feature2
Switched to branch 'feature2'

D:\Projects\cookbook\my_repo>
D:\Projects\cookbook\my_repo>git branch
  feature1
* feature2
  master

D:\Projects\cookbook\my_repo>
```

Wir sind jetzt auf dem neu erstellten Branch feature2 und können dort Commits einstellen. 

```
D:\Projects\cookbook\my_repo>
D:\Projects\cookbook\my_repo>echo echo Some random changes >> another-file

D:\Projects\cookbook\my_repo>
D:\Projects\cookbook\my_repo>git status
On branch feature2
Untracked files:
  (use "git add <file>..." to include in what will be committed)
        another-file

nothing added to commit but untracked files present (use "git add" to track)

D:\Projects\cookbook\my_repo>git add another-file

D:\Projects\cookbook\my_repo>git commit -m "Adding another file"
[feature2 8d1be3a] Adding another file
 1 file changed, 1 insertion(+)
 create mode 100644 another-file

D:\Projects\cookbook\my_repo>
```

### HEAD

Genau wie ein Branch ist auch HEAD (.git/HEAD) ein Zeiger, der uns in diesem Fall mitteilt, welches gerade der Checkout-Branch oder Commit ist. Der Inhalt von HEAD sieht bei uns dann aktuell so aus:

```
ref: refs/heads/feature2
```

**Detached HEAD**

Üblicherweise arbeitet man auf einem Checkout-Branch. Tatsächlich kann man auch auf einem Commit-Checkout arbeiten. In git nennt man das dann detached HEAD. Man kann hier dann weitere Commits und/oder einen Branch aufsetzen. Wichtig zu wissen: git besitzt einen built-in garbage collector und von Zeit zu Zeit werden git Objekte, die nicht erreichbar sind, automatisch gelöscht. Also z.B. ein detached HEAD. 

Man kann auf einem detached HEAD mit git checkout -b <new-branch-name> einen neuen Branch aufsetzen. 

```
D:\Projects\cookbook\my_repo>git checkout 8d1be3a45f63fab8d46b59c1fa6e2e013634fa20
Note: switching to '8d1be3a45f63fab8d46b59c1fa6e2e013634fa20'.

You are in 'detached HEAD' state. You can look around, make experimental
changes and commit them, and you can discard any commits you make in this
state without impacting any branches by switching back to a branch.

If you want to create a new branch to retain commits you create, you may
do so (now or later) by using -c with the switch command. Example:

  git switch -c <new-branch-name>

Or undo this operation with:

  git switch -

Turn off this advice by setting config variable advice.detachedHead to false

HEAD is now at 8d1be3a Adding another file

D:\Projects\cookbook\my_repo>
D:\Projects\cookbook\my_repo>git checkout -b another
Switched to a new branch 'another'

D:\Projects\cookbook\my_repo>git branch
* another
  feature1
  feature2
  master

D:\Projects\cookbook\my_repo>
```

### Merke

- Ein Branch ist nur ein Zeiger auf einen spezifischen Commit Hash. Dieser Zeiger wird mit jedem weiteren Commit auf diesem Branch aktualisiert.
- HEAD ist ebenfalls ein Zeiger, der entweder auf einen Branch, Tag oder einen Commit zeigt. Falls HEAD auf einen Tag oder Commit zeigt, ist HEAD in einem detached HEAD Zustand.
- Commits, die nicht via Branch oder Tag erreicht werden können, können von git's Garbage Collection in der Zukunft aufgeräumt und entfernt werden. Also am besten immer Tags oder Branches auf einen Commit zeigen lassen. 

## Merge Strategien

Die zwei gebräuchlichsten Merge-Strategien in git sind 

- Three-way merge
- Fast-forward merge

### Three-way merge

Der **Three-way merge** ist der Default-Merge für git. Dabei ermittelt *git* den nächsten gemeinsamen Vorfahren der zwei Commits, die für den Merge spezifiziert wurden. Im Beispiel gehen wir auf feature1 und wollen feature2 mergen. 

```
D:\Projects\cookbook\my_repo>git branch
  another
  feature1
* feature2
  master
  
D:\Projects\cookbook\my_repo>git checkout feature1
Switched to branch 'feature1'

D:\Projects\cookbook\my_repo>git branch
  another
* feature1
  feature2
  master
  
D:\Projects\cookbook\my_repo>git merge feature2
```

Falls keine Konflikte vorhanden sind, dann erzeugt git jetzt einen neuen Commit und fordert auf, eine Commit-Nachricht zu schreiben. Danach zeigt in unserem Beispiel der Branch *feature1* auf den neu erstellten Commit und der Branch enthält die Commits von *feature1* und *feature2*. 

### Fast-forward merge

Fast-forward merges sind schneller als Three-way merges und können niemals zu Merge-Konflikten führen. Sie sind allerdings auch nur bei linearen Commit-Historien nutzbar. Machen wir jetzt einen Fast-forward merge, um Master auf den aktuellen Commit-Stand zu bringen

```
D:\Projects\cookbook\my_repo>git log --graph --decorate --oneline
* 8d1be3a (HEAD -> feature1, feature2, another) Adding another file
* fbadb8e (master) noch mehr Zeugs
* 213b3d6 add hallo welt

D:\Projects\cookbook\my_repo>git branch
  another
* feature1
  feature2
  master
  
D:\Projects\cookbook\my_repo>git checkout master
Switched to branch 'master'

D:\Projects\cookbook\my_repo>git branch
  another
  feature1
  feature2
* master

D:\Projects\cookbook\my_repo>git merge feature1
Updating fbadb8e..8d1be3a
Fast-forward
 another-file | 1 +
 1 file changed, 1 insertion(+)
 create mode 100644 another-file

D:\Projects\cookbook\my_repo>
```

### Rollback a merge in case of conflict

Falls git dich auf einen Konflikt hinweist und du dir tatsächlich unsicher bist, dann kannst du jederzeit den noch nicht vollendeten Merge zurücknehmen, indem die Option --abort angegeben wird.

```
D:\Projects\cookbook\my_repo>git merge --abort
```

### Undoing a merge

Tatsächlich wird es jedem früher oder später passieren, dass er einen schon vollendeten Merge wieder zurücknehmen will. Das Mittel der Wahl in git ist der Befehle git reset. In git ist das einfach möglich, da - wie wir inzwischen wissen - ein Branch einfach ein Zeiger ist. Wollen wir also unseren Merge des Master-Branch mit dem Feature1-Branch wieder zurücknehmen, können wir das einfach mit git reset. 

```
D:\Projects\cookbook\my_repo>git log --graph --decorate --oneline
* 8d1be3a (HEAD -> master, feature2, feature1, another) Adding another file
* fbadb8e noch mehr Zeugs
* 213b3d6 add hallo welt

D:\Projects\cookbook\my_repo>git branch
  another
  feature1
  feature2
* master

D:\Projects\cookbook\my_repo>git reset --hard fbadb8e
HEAD is now at fbadb8e noch mehr Zeugs

D:\Projects\cookbook\my_repo>git log --graph --decorate --oneline
* fbadb8e (HEAD -> master) noch mehr Zeugs
* 213b3d6 add hallo welt
```

### Other merge strategies

Es gibt noch einige andere Merge Strategien. Eine davon ist **ours**, welches auch zum Handwerkszeugs eines erfahrenen git Anwenders gehören sollte. Also: anschauen. 

### Log Graphen

Mit dem Log Kommando und der Option --graph kann man sich den aktuellen Zustand der Commits grafisch anzeigen lassen. Mit anderen Optionen kombiniert sieht es dann z.B. folgendermaßen aus. 

```
D:\Projects\cookbook\my_repo>git log --graph --decorate --oneline
* 8d1be3a (HEAD -> feature1, feature2, another) Adding another file
* fbadb8e (master) noch mehr Zeugs
* 213b3d6 add hallo welt
```

### Merke

- Git bietet dir mehrere Merge-Strategien. Die bekanntesten sind *Three-way merge* und *Fast-forward merge*.
- Der *Three-way merge* ermittelt den letzten gemeinsamen Vorfahren der zwei zu mergenden Branches und erzeugt dann einen neuen Commit, auf den der aktuelle Branch dann zeigt. 
- Wie in anderen Repository-Systemen auch: Es kann bei einem Merge immer auch zu Konflikten kommen, die dann vom Anwender aufgelöst werden müssen.
- Merges können mit dem Befehl *git reset* rückgängig gemacht werden.

## Reset Methoden

Es gibt eine Handvoll verschiedener Reset Modis. Die gebräuchlichsten sind: 

- Soft
- Mixed
- Hard

### Soft Mode

Mit dem Soft Mode wird HEAD auf den angegebenen Commit gesetzt. Dabei werden Änderungen im Index und im Working Directory nicht angefasst. Diese bleiben auf dem aktuellen Stand. Nur das Respository (aka HEAD) zeigt jetzt auf den angegebenen Commit. 

Den Soft Mode kann verwendet werden, um noch zusätzliche Änderungen am letzten Commit durchzuführen, ohne die Änderungen im Index oder im  Working Directory anzutasten. 

### Mixed Mode

Der Mixed Mode unternimmt einen zusätzlichen Schritt im Vergleich zum Soft Mode. Nicht nur, dass HEAD auf den angegebenen Commit gesetzt wird, sondern auch der Index zeigt auf den angegebenen Commit. Während das Working Directory nicht angefasst wird. 

Mit dem Mixed Mode kann man also die lokalen Änderungen im Working Directory noch einmal (z.B. in anderer Weise) ausliefern. 

### Hard Mode

Der Hard Mode führt tatsächlich zu einem 'fire and forget'. Sowohl HEAD als auch der Index als auch das Working Directory zeigen jetzt auf den angegebenen Commit. Der 'verlorene' Commit ist zwar noch vorhanden aber im Detached HEAD Zustand und wird möglicherweise in Zukunft von der Garbage Collection entfernt werden. 

### Merke

- Git's Reset Kommando kann mit verschiedensten Modis aufgerufen werden; die gebräuchlichsten sind Soft Mode, Mixed Mode, Hard Mode.
- Der Soft Mode setzt HEAD auf einen anderen Commit und belässt den Index und das Working Directory. 
- Der Mixed Mode setzt sowohl HEAD als auch den Index auf einen anderen Commit und belässt das Working Directory. 
- Der Hard Mode setzt alle Stages (HEAD, Index, Working Directory) auf einen anderen Commit. 

## Rebasing



## Links

[1] REBASE, rebase book