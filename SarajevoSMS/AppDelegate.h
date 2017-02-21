//
//  AppDelegate.h
//  SarajevoSMS
//
//  Created by Chase Frommm on 2/21/17.
//  Copyright © 2017 Chase Fromm. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

