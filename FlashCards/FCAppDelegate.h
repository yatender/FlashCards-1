//
//  FCAppDelegate.h
//  FlashCards
//
//  Created by Derek Bassett on 9/19/13.
//  Copyright (c) 2013 Derek Bassett. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FCViewController;

@interface FCAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) FCViewController *viewController;

@end
