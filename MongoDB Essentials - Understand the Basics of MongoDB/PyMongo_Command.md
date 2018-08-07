# MongoDB

* Show the created database
```
show dbs
```
* Show your collections
```
show collections
```
* Show your scheme. The scheme will find the informations about your collections.
```
show collections
```
* Show information about the things in collection. Show a BSON format ("id":ObjectId<"1234","name":"will")
```
db.things.find()
```
* Show information about the things in collection. But with an easier format.
```
db.article.find().pretty()
```
* Create database
```
use name_example
```
* Delete database
```
use Database_name
db.dropDatabase();
```
* Use created database example
```
use name_example
```
* Create a collection
```
db.createCollection("NewCollection_name")
```
* Insert new document (Collection name : car).

*You don't need to create an ID attribute*

```
db.Actuator.insert({
  "name": name,
  "type": ttype,
  "maxim_Voltage": maxim_Voltage
  })
```

* Modify a document, modify an atributte.

```
db.Actuator.update(
  { name: "Teste"},
  {name:"Teste",type:"OO",maxim_voltage:"5",maxim_Current:"5",tradeMark:"IU",Model:"IU",feature_id:"22"},
  {upsert:true })
```

* Modify a document, insert an atributte.

```
db.car.update({
  name: 'ford'},
  {$set: {
    transmission: 'automatic'
  }
},{$upsert:true});
```
* Remove a document.
```
db.car.remove({})
```

* Remove a specific document.
```
db.car.remove({name: "ford"})
```

* MongoDB is based on JavaScript. Insert ten documents in a collection.
```
for(var i=0; i<10; i++)(db.things.insert(("x":i)))
```

## Types of data

Data types available to use : *String*,*Number*,*Date*,*Array*,*Boolean* and *ObjectId*.

* *String :*
```
{
  name:"John"
}
```

* *Number :*
```
{
  likes:5
}
```

* *Date :*
```
{
  timeStamp: ISODate("...")
}
```

* *Array :*
```
{
  "array_name" : [
    "value1",
    "value2",
  ]
}
```

* *Boolean :*
```
{
  published:true
}
```

* *ObjectId :*
```
{
  _creator:"4811588"
}
```
* *Buffer :* Used for video, images and audio.

* *Mixed :* Combines different types.

## Query

* Find metody.

*Sort:* Used for select a specific attribute;

*limit:* Used for limit the search.
```
{
  db.student.find({}).sort({'name':'Leticia'}).limit(2)
}
```
