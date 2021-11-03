//
//  AppDelegate.h
//  zad1ios
//
//  Created by student on 20/10/2021.
//  Copyright © 2021 pb.edu.ps1. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

