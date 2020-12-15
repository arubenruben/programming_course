package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);

        System.out.println("Inserir Coordenadas X");
        double xCoordinate=scanner.nextDouble();

        System.out.println("Inserir Coordenadas Y");
        double yCoordinate= scanner.nextDouble();


        if(xCoordinate>0&&yCoordinate>0){
            System.out.println("Primeiro Quadrante");
        }
        else if(xCoordinate>0&&yCoordinate<0){
            System.out.println("Quarto Quadrante");
        }else if(xCoordinate<0&&yCoordinate>0){
            System.out.println("Segundo Quadrante");
        }else if(xCoordinate<0&&yCoordinate<0){
            System.out.println("Terceiro Quadrante");
        }else{
            System.out.println("Erro");
        }

        return;
    }
}
