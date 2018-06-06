# MongoDB


## Getting Started
* When install, modify the folder of installation in the 'custom' option.
```
C:\Program Files (x86)\MongoDB\server\3.6
```
* Create the folder
```
C:\Program Files (x86)\MongoDB\data
```
```
C:\Program Files (x86)\MongoDB\data\log\mongo.log
```
* Using two CMD prompt command on Windows.
```
CDM1 >> cd "Program files (x86)\MongoDB\server\3.6\bin"
```
Start the services:
```
.\mongod.exe --install --logpath C:\Program Files (x86)\MongoDB\data\log --logappend --bind_ip 127.0.0.1 --dbpath C:\Program Files (x86)\MongoDB\data\db --directoryperdb
```
Configure the data path:
```
CDM1 >> echo dbpath=C:\Program Files (x86)\MongoDB\data\>> "mongod.cfg"
```
Configure the log path:
```
CDM1 >> echo logpath=c:\data\log\mongo.log>> "mongod.cfg"
```
```
CDM2 >> cd "Program files(x86)/MongoDB/server/3.2/bin".
```
```
CMD1 >> mongod
```
```
CMD2 >> mongo
```

## Built With

* [MongoDB](https://docs.mongodb.com/manual/tutorial/install-mongodb-on-windows/) - Document database with the scalability and flexibility that you want with the querying and indexing that you need.
