<?php

class conexion{
   
    const user='root';
    const pass='';
    const db='servidoriot';
    const servidor='localhost';

    public function conectardb(){
        $conectar = new mysqli(self::servidor, self::user,self::pass,self::db);
        if($conectar->connect_errno){
            die("Error en la coneccion".$conectar->connect_error);
        }
        return $conectar;
    }   
}

?>