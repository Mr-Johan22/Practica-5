<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Informe del Proyecto Gestión de Concesionaria</title>
    <style>
        body { font-family: sans-serif; margin: 20px; color: #333; }
        h1, h2 { color: #0056b3; }
        h3 { color: #007bff; }
        .seccion { margin-bottom: 20px; padding: 15px; border: 1px solid #ddd; border-radius: 5px; background-color: #f9f9f9; }
        .objetivo { margin-left: 20px; }
        .diagrama { margin-top: 20px; text-align: center; }
        .diagrama img { max-width: 80%; height: auto; border: 1px solid #ccc; box-shadow: 2px 2px 5px #888888; }
        .conclusion { margin-top: 20px; font-style: italic; color: #555; }
    </style>
</head>
<body>
    <h1>Informe del Proyecto Gestión de Concesionaria</h1>

    <div class="seccion">
        <h2>Introducción</h2>
        <p>Este proyecto implementa un sistema de gestión para una concesionaria de automóviles. El sistema permite a los usuarios registrar información sobre vehículos y clientes, y ofrece la funcionalidad de consultar listados de ambos.</p>
    </div>

    <div class="seccion">
        <h2>Objetivos</h2>
        <ul>
            <li class="objetivo">Permitir el registro de vehículos con detalles como código, marca, modelo, año, kilometraje y precio.</li>
            <li class="objetivo">Almacenar información de clientes incluyendo DNI, nombre, teléfono y dirección.</li>
            <li class="objetivo">Proporcionar una interfaz de usuario por consola con un menú interactivo.</li>
            <li class="objetivo">Implementar opciones para listar todos los vehículos registrados y todos los clientes registrados.</li>
        </ul>
    </div>

    <div class="seccion">
        <h2>Resultados Obtenidos</h2>
        <div>
            <h3>Registro de Vehículos</h3>
            <p>Se ha implementado la funcionalidad para registrar nuevos vehículos en el sistema. Los usuarios pueden ingresar la información requerida a través de la consola.</p>
        </div>
        <div>
            <h3>Registro de Clientes</h3>
            <p>El sistema permite el registro de nuevos clientes, almacenando su información personal y de contacto.</p>
        </div>
        <div>
            <h3>Consulta de Listados</h3>
            <p>Se han añadido opciones en el menú para mostrar listados de todos los vehículos registrados y todos los clientes registrados.</p>
        </div>
        <div>
            <h3>Interfaz de Usuario por Consola</h3>
            <p>Se ha creado una interfaz de usuario por consola con un menú que facilita la navegación y el uso de las funcionalidades del sistema.</p>
        </div>
    </div>

    <div class="seccion diagrama">
        <h2>Diagrama de Clases</h2>
        <img src="diagrama_clases.png" alt="Diagrama de Clases del Proyecto">
        <p><em>Diagrama de clases que representa la estructura del sistema.</em></p>
        <p>Nota: Asegúrate de tener un archivo llamado 'diagrama_clases.png' en la raíz de tu repositorio con el diagrama de clases del proyecto.</p>
    </div>

    <div class="seccion conclusion">
        <h2>Conclusiones</h2>
        <p>El sistema de gestión de la concesionaria desarrollado proporciona las funcionalidades básicas para el registro y consulta de vehículos y clientes a través de una interfaz de usuario por consola. Esto permite un mejor control interno y organización de la información. Para futuras versiones, se podrían considerar mejoras como la persistencia de datos en archivos o bases de datos, funcionalidades de búsqueda y edición, y una interfaz gráfica de usuario.</p>
    </div>

</body>
</html>