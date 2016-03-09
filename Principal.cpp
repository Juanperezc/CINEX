/*
 * Principal.cpp
 *
 *  Created on: 2/3/2016
 *      Author: LuisA
 */





#include "Controlador.h"
#include "VGeneral.h"

int main()
{
   int opc;
   VGeneral  vg;
   Controlador c;
   do
   {
     vg.Limpiar();
     vg.ImprimirLineasBlanco(2);
     vg.Limpiar();
     vg.ImprimirEncabezado("\n      M E N U  O P C I O N E S\n","      =======  ===============");
     vg.ImprimirMensaje("   1. CARGAR DATOS PELICULAS\n");
     vg.ImprimirMensaje("   2. CARGARr LAS SALAS\n");
     vg.ImprimirMensaje("   3. PROCESAR ENTRADAS\n");
     vg.ImprimirMensaje("   4. REPORTE CINEX\n");
     vg.ImprimirMensaje("   5. FINALIZAR\n\n");
     opc = vg.LeerValidarNro("   SELECCIONE SU OPCION : ",1,5);
     switch (opc)
     {
      case 1: c.CargarPeliculas();
              break;
      case 2: c.CargarSalas();
              break;
      case 3: c.ProcesarEntradas();
              break;
      case 4: c.ReporteCinex();
              break;
     }
   }
   while(opc != 5);
   return 0;
}

