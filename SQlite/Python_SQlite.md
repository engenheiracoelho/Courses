# Basic Python instructions - SQlite3

## START a database
```
sqlite3 database_name
```

## CREATE a table
```
CREATE TABLE table_name(
        _id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT,
        name VARCHAR(256) NOT NULL,
        date DATE NOT NULL
);
```

## INSERT  
```
conn = sqlite3.connect('database_name.db')
cursor = conn.cursor()
cursor.executemany("""INSERT INTO table_name(_id,name,date) VALUES (NULL,?,?)""",[data])
conn.commit()
conn.close()
```

## DELETE
```
conn = sqlite3.connect('database_name.db')
cursor = conn.cursor()
cursor.execute("""DELETE FROM table_name WHERE _id=?""",[_id])
conn.commit()
conn.close()
```
