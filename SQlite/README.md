# SQlite

## Using for a sample aplication.

* Create a database with .sql file
```
sqlite3 database_name.db < sql_file.sql
```

* Start or access your database 
```
sqlite3 database_name
```

* Create a table
```
create table table_name(name1 INT, name2 VARCHAR(45));
```

* Insert in to the table
```
INSERT INTO table_name values (10,'varchar');
```

* Show tables
```
.table
```

* Desc table
``` 
PRAGMA table_info([table_name]);
``` 

## Using Sqlite3 with Python

* Connect
```
conn = sqlite3.connect('your_db.db', check_same_thread=False)
```

* SELECT
```
your_session = []

conn = sqlite3.connect('your_db.db')
cursor = conn.cursor()
cursor.execute("""SELECT * FROM your_table""")
col = [tup for tup in cursor.fetchall()]
for col in col:
    your_session.append({'_id': col[0], 'register_1': col[1], 'register_2': col[2]})
conn.commit()
conn.close()

session['your_session'] = your_session

# Return your_session as you need
```

* INSERT in to the table
```
your_session = []

conn = sqlite3.connect('your_db.db')
cursor = conn.cursor()
cursor.executemany("""INSERT INTO your_table(_id,register_1, register_2) VALUES (NULL,?,?)""",[data])
conn.commit()
conn.close()

# Return 
```

## Install 

On ubuntu:

```
>> sudo su
>> apt-get install sqlitebrowser
>> apt-get install sqlite3
>> apt-get install libsqlite3-dev
``` 
