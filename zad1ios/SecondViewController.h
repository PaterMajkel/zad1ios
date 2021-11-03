//
//  SecondViewController.h
//  zad1ios
//
//  Created by student on 20/10/2021.
//  Copyright © 2021 pb.edu.ps1. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SecondViewController;

@protocol SecondViewControllerDelegate <NSObject>

-(void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem: (NSString*) item;

@end

@interface SecondViewController : UIViewController



@property (nonatomic, weak) IBOutlet UITextField *modifiedSurnameTextField;
@property (nonatomic, weak) id <SecondViewControllerDelegate> dekegate;

@property NSString *surname;


@end

NS_ASSUME_NONNULL_END
