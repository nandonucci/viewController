//
//  Pessoa.h
//  Exemplo_ObjC
//
//  Created by Usuário Convidado on 02/04/2018.
//  Copyright © 2018 Marcos Vaz. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Pessoa : NSObject

@property(nonatomic, retain) NSString* nome;
@property(nonatomic) float peso;
@property(nonatomic) float altura;
@property(nonatomic) float imc;

-(void) calcularIMC;
-(float) calcularIMC_2;

@end
