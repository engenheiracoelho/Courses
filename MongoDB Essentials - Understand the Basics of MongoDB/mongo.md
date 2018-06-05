# MongoDB


## Getting Started
* When install, modify the folder of installation in the 'custom' option.
```
C:\MongoDB
```
* Create the folder
```
C:\MongoDB\data\db
```
```
C:\MongoDB\data\log\mongo.log
```
* Using two CMD prompt command on Windows.
```
CDM1 >> cd "Program files(x86)/MongoDB/server/3.2/bin".
```
Start the services:
```
.\mongod.exe --install --logpath c:\data\log --logappend --bind_ip 127.0.0.1 --dbpath c:\data\db --directoryperdb
```
Configure the data path:
```
CDM1 >> echo dbpath=c:\data\db>> "mongod.cfg"
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
