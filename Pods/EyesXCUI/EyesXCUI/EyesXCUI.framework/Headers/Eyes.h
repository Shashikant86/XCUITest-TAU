//
//  ATXCUIEyes.h
//  ApplitoolsEyes
//
//  Created by Anton Chuev on 9/1/16.
//  Copyright © 2016 Applitools. All rights reserved.
//

#import "EyesBase.h"
#import "CheckSettings.h"
#import <XCTest/XCTest.h>

NS_ASSUME_NONNULL_BEGIN

@interface Eyes : EyesBase

/**
 Whether Eyes should force a full page screenshot or not.
 Current version of the SDK supports getting the full page screenshot only if scrollable view is UITableView or inherited from it.
 */
@property (assign, nonatomic) BOOL forceFullPageScreenshot;

/**
 The application that is supposed to be tested. [XCUIApplication new] instance by default.
 */
@property (strong, nonatomic, nullable) XCUIApplication *testedApplication;

/**
 @abstract Takes a snapshot of the application under test and matches it with the expected output.
 @param tag An optional tag to be associated with the snapshot.
 */
- (void)checkWindowWithTag:(nullable NSString *)tag;

/**
 @abstract Takes a snapshot of the application under test and matches a region of a specific element with the expected region output.
 @param element The element which represents the region to check.
 @param tag An optional tag to be associated with the snapshot.
 */
- (void)checkElement:(XCUIElement *)element tag:(nullable NSString *)tag;

/**
 @abstract Takes a snapshot of the application under test and matches a region of a specific element with the expected region output.
 @param region The region to check.
 @param tag An optional tag to be associated with the snapshot.
 */
- (void)checkRegion:(Region *)region tag:(nullable NSString *)tag;

/**
 @abstract Starts a test.
 @param appName The name of the application under test.
 @param testName The test name.
 */
- (void)openWithApplicationName:(NSString *)appName testName:(NSString *)testName;

/**
 @abstract Starts a test.
 @param appName The name of the application under test.
 @param testName The test name.
 @param viewportSize Determines the size used for the baseline. CGSizeZero will automatically grab the resolution from the screen minus status bar.
 */
- (void)openWithApplicationName:(NSString *)appName testName:(NSString *)testName viewportSize:(CGSize)viewportSize;

@end


@interface Eyes (FluentInterface)

- (void)checkWithTag:(nullable NSString *)tag andSettings:(id <CheckSettingsProtocol>)checkSettings;

@end

NS_ASSUME_NONNULL_END
