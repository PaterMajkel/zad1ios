//
//  ViewController.h
//  zad1ios
//
//  Created by student on 20/10/2021.
//  Copyright © 2021 pb.edu.ps1. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"

@interface ViewController : UIViewController

@property (nonatomic, weak) IBOutlet UILabel *messageLabel;
@property (nonatomic, weak) IBOutlet UITextField *inputField;
@property (nonatomic, weak) IBOutlet UITextField *inputField2;

-(IBAction)enter;

@end

