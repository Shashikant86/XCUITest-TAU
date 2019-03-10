//
//  ATEyesBase.h
//  ApplitoolsEyes
//
//  Created by Anton Chuev on 8/31/16.
//  Copyright © 2016 Applitools. All rights reserved.
//

#import "MatchLevel.h"
#import "ImageMatchSettings.h"
#import "CheckSettings.h"
#import "BatchInfo.h"
#import "MatchResult.h"
#import "TestResults.h"
#import "Region.h"
#import "RegionProviderProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface EyesBase : NSObject {
@protected
    NSString *_apiKey;
    NSString *_serverURL;
    BatchInfo *_batch;
    MatchLevel _matchLevel;
    ImageMatchSettings *_defaultMatchSettings;
    BOOL _saveDiffs;
    NSString *_branchName;
    NSString *_parentBranchName;
    NSString *_baselineBranchName;
}

/**
 The API key of your applitools Eyes account.
 */
@property (copy, nonatomic) NSString *apiKey;

/**
 The URI of the eyes server.
 */
@property (copy, nonatomic, nullable) NSString *serverURL;

/**
 Please use osInfo instead.
 @deprecated This property is deprecated.
 */
@property (copy, nonatomic, nullable) NSString *hostOS __attribute__((deprecated));

/**
 Info of the operation system on the device or simulator where tested application is running.
 */
@property (copy, nonatomic, nullable) NSString *osInfo;

/**
 Information about tested application.
 */
@property (copy, nonatomic, nullable) NSString *hostingAppInfo;

/**
 Device's or simulator's info where tested application is running.
 */
@property (copy, nonatomic, nullable) NSString *deviceInfo;

/**
 The name of the baseline's environment.
 */
@property (strong, nonatomic, nullable) NSString *baselineEnvName;

/**
 The batch in which context future tests will run or nil if tests are to run standalone.
 */
@property (strong, nonatomic, nullable) BatchInfo *batch;

/**
 The test-wide match level to use when checking application screenshot with the expected output. 'Strict' by default.
 */
@property (assign, nonatomic) MatchLevel matchLevel;

/**
 Whether to ignore the blinking caret or not when comparing images. NO by default.
 */
@property (assign, nonatomic) BOOL ignoreCaret;

/**
 The maximum time (in seconds) a match operation tries to perform a match.
 */
@property (assign, nonatomic) NSUInteger matchTimeout;

/**
 The match settings to be used for the session.
 */
@property (strong, nonatomic) ImageMatchSettings *defaultMatchSettings;

/**
 Whether or not new tests are saved by default. YES by default.
 */
@property (assign, nonatomic) BOOL saveNewTests;

/**
 Set whether or not failed tests are saved by default.
 True if failed tests should be saved by default, false otherwise.
 */
@property (assign, nonatomic) BOOL saveFailedTests;

/**
 Automatically save differences as a baseline. NO by default.
 */
@property (assign, nonatomic) BOOL saveDiffs;

/**
 The branch in which the baseline for subsequent test runs resides. If the branch does not already exist it will be created under the specified parent branch.
 Changes to the baseline or model of a branch do not propagate to other branches.
 */
@property (copy, nonatomic, nullable) NSString *branchName;

/**
 Sets the branch under which new branches are created.
 */
@property (copy, nonatomic, nullable) NSString *parentBranchName;

/**
 Sets the branch under which new branches are created.
 */
@property (copy, nonatomic, nullable) NSString *baselineBranchName;

/**
 Creates a new Eyes instance that interacts with the Eyes Server at the specified url.
 @param serverURL The Eyes server URL string.
 */
- (instancetype)initWithServerURL:(NSString *)serverURL;

/**
 Starts a test.
 @param appName The name of the application under test.
 @param testName The test name.
 @param viewportSize The client's viewport size (i.e., the visible part screen without status bar) or CGSizeZero to allow any viewport size.
 */
- (void)openBaseWithApplicationName:(nullable NSString *)appName testName:(nullable NSString *)testName viewportSize:(CGSize)viewportSize;

/**
 Ends a test.
 @param error Error that can occur.
 @throws TestFailedException if a mismatch was found.
 @throws NewTestException if this is a new test was found.
 @return The test results.
 */
- (nullable TestResults *)close:(NSError **)error;

/**
 Ends a test.
 @param throwEx If true, an exception will be thrown for failed/new tests.
 @param error Error that can occur.
 @return The test results.
 @throws TestFailedException if a mismatch was found and throwEx is true.
 @throws NewTestException if this is a new test was found and throwEx is true.
 */
- (nullable TestResults *)closeWithThrow:(BOOL)throwEx error:(NSError **)error;

/**
 If a test is running, aborts it. Otherwise, does nothing.
 */
- (void)abortIfNotClosed;

/**
 Adds a property to be sent to the server.
 @param name The property name.
 @param value The property value.
 */
- (void)addProperty:(NSString *)name value:(NSString *)value;

/**
 Returns default server url string.
 */
+ (NSString *)defaultServerURL;

@end


@interface EyesBase (FluentInterface)

/**
 @abstract Takes a snapshot of the application under test and sends it to the server.
 @param regionProvider Returns the region to check or the empty rectangle to check the entire window.
 @param tag An optional tag to be associated with the snapshot.
 @param ignoreMismatch Whether to ignore this check if a mismatch is found.
 @param checkSettings The settings to use.
 @param completionHandler A handler block to execute.
 */
- (void)checkWindowBase:(nullable id<RegionProviderProtocol>)regionProvider tag:(nullable NSString *)tag ignoreMismatch:(BOOL)ignoreMismatch checkSettings:(id<CheckSettingsProtocol>)checkSettings completionHandler:(nullable void(^)(MatchResult * _Nullable ))completionHandler;

@end

NS_ASSUME_NONNULL_END
