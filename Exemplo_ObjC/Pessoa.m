//
//  Pessoa.m
//  Exemplo_ObjC
//
//  Created by Usuário Convidado on 02/04/2018.
//  Copyright © 2018 Marcos Vaz. All rights reserved.
//

#import "Pessoa.h"

@implementation Pessoa

-(void) calcularIMC{
    self.imc = self.peso / pow(self.altura, 2);
}

-(float) calcularIMC_2{
    return self.peso / (self.altura*self.altura);
}


@end
