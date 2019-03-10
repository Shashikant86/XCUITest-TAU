//
//  Target.h
//  EyesXCUI
//
//  Created by Anton Chuev on 8/28/17.
//  Copyright © 2017 Applitools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <XCTest/XCTest.h>
#import "XCUICheckSettings.h"
#import "Region.h"

@interface Target : NSObject

+ (XCUICheckSettings *)window;
+ (XCUICheckSettings *)element:(XCUIElement *)element;
+ (XCUICheckSettings *)region:(Region *)region;

@end
