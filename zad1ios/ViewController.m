//
//  ViewController.m
//  zad1ios
//
//  Created by student on 20/10/2021.
//  Copyright © 2021 pb.edu.ps1. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

-(IBAction)enter {
    NSString *yourName = self.inputField.text;
    NSString *yourSurname = self.inputField2.text;
    NSString *myName = @"Michal";
    NSString *message;
    
    if ([yourName length] == 0) {
        yourName = @"World";
    }
    if ([yourSurname length] == 0) {
        yourName = @"World";
    }
    if ([yourName isEqualToString:myName]) {
        message = [NSString stringWithFormat:@"Hello %@! We have the same name :)", yourName];
                   }else {
                       message = [NSString stringWithFormat:@"Hello %@!", yourName
                                  ];
                   }
    
    self.messageLabel.text = message;
}

-(void) prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender{
 if([segue.identifier isEqualToString:@"sendSurnameSegue"])
 {
     SecondViewController *controller = ( SecondViewController *) segue.destinationViewController;
     controller.surname=self.inputField2.text;
 }

}

@end
