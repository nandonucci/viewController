//
//  ViewController.h
//  Exemplo_ObjC
//
//  Created by Usuário Convidado on 02/04/2018.
//  Copyright © 2018 Marcos Vaz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *txtNome;

@property (weak, nonatomic) IBOutlet UITextField *txtPeso;

@property (weak, nonatomic) IBOutlet UITextField *txtAltura;

@property (weak, nonatomic) IBOutlet UITextField *txtIMC;

- (IBAction)calcular:(id)sender;

@end

