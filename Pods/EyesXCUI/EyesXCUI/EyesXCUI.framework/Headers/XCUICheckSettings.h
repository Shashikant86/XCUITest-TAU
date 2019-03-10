//
//  XCUICheckSettings.h
//  EyesXCUI
//
//  Created by Anton Chuev on 8/28/17.
//  Copyright © 2017 Applitools. All rights reserved.
//

#import "CheckSettings.h"
#import "Region.h"
#import <XCTest/XCTest.h>

NS_ASSUME_NONNULL_BEGIN

@protocol XCUICheckTargetProtocol <NSObject>

- (nullable XCUIElement *)targetElement;

@end

@interface XCUICheckSettings : CheckSettings <XCUICheckTargetProtocol>

- (instancetype)initWithTargetElement:(XCUIElement *)targetElement;

- (instancetype)ignoreXCUIElements:(NSArray<XCUIElement *> *)elements;
- (instancetype)layoutXCUIElements:(NSArray<XCUIElement *> *)elements;
- (instancetype)strictXCUIElements:(NSArray<XCUIElement *> *)elements;
- (instancetype)contentXCUIElements:(NSArray<XCUIElement *> *)elements;

- (instancetype)floatingXCUIElement:(XCUIElement *)element maxUpOffset:(NSInteger)maxUpOffset maxDownOffset:(NSInteger)maxDownOffset maxRightOffset:(NSInteger)maxRightOffset maxLeftOffset:(NSInteger)maxLeftOffset;

- (instancetype)region:(Region *)region;

@end

NS_ASSUME_NONNULL_END
