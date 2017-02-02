#include <sqlite3.h>
#include <stdio.h>

int main()
{
    sqlite3 *db; //Apuntador hacia la base de datos
    char *err_msg = 0;
    int rc = sqlite3_open("becarios.db", &db);//Abre una nueva conexión a la base de datos
    if (rc != SQLITE_OK) {//Si rc es diferente a SQLITE_OK, no pudo abrir la base
        fprintf(stderr, "No pude abrir la base de datos: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return 1;
    }



/*
	struct becario bec[8];//arreglo de tipo becario
        bec[0] = crear("Alan",22,8.8,"Insurgentes",11,1);
        bec[1] = crear("Virgilio",22,9.8,"FI",11,1);
        bec[2] = crear("Angel",34,9,"La Salle",11,1);
        bec[3] = crear("Gonzalo",23,9.6,"Ciencias",11,1);
        bec[4] = crear("Saine",22,8.8,"FI",11,1);
        bec[5] = crear("Oscar",23,9.8,"ESCOM",11,1);
        bec[6] = crear("Jonathan",23,9.5,"FI",11,1);
        bec[7] = crear("Jenifer",22,8.8,"FCA",11,1);

*/
    char *sql = "DROP TABLE IF EXISTS Alumnos;" //Toda la sentencia a ejecutar
                "CREATE TABLE Alumnos(Nombre TEXT, Edad INT, Promedio REAL, Procedencia TEXT, Generacion INT, Proyecto INT);"
		"INSERT INTO Alumnos VALUES('Alan',22,8.8,'Insurgentes',11,1);"
		"INSERT INTO Alumnos VALUES(Virgilio',22,9.8,'FI',11,1);"
                "INSERT INTO Alumnos VALUES('Angel',34,9,'La Salle',11,1);"
                "INSERT INTO Alumnos VALUES('Gonzalo',23,9.6,'Ciencias',11,1);"
                "INSERT INTO Alumnos VALUES('Saine',22,8.8,'FI',11,1);"
                "INSERT INTO Alumnos VALUES('Oscar',23,9.8,'ESCOM',11,1);"
                "INSERT INTO Alumnos VALUES('Jonathan',23,9.5,'FI',11,1);"
                "INSERT INTO Alumnos VALUES('Jenifer',22,8.8,'FCA',11,1)";

/*sqlite3_exec() es una combinación de:
sqlite3_prepare_v2(), sqlite3_step() y sqlite3_finaliza().
Sirve para ejecutar varias sentencias sin necesidad de tener mucho código en C*/
    rc = sqlite3_exec(db, sql, 0, 0, &err_msg);
    if (rc != SQLITE_OK ) {
        fprintf(stderr, "Error SQL: %s\n", err_msg);
        sqlite3_free(err_msg);
        sqlite3_close(db);
        return 1;
    }
    sqlite3_close(db);
    return 0;
}
