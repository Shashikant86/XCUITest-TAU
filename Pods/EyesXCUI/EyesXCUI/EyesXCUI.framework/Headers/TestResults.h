//
//  ATTestResults.h
//  ApplitoolsEyes
//
//  Created by Anton Chuev on 9/1/16.
//  Copyright © 2016 Applitools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "SessionUrls.h"
#import "StepInfo.h"
#import "DefaultMatchSettings.h"

typedef NS_ENUM(NSUInteger, TestResultStatus) {
    TestResultStatusPassed,
    TestResultStatusUnresolved,
    TestResultStatusFailed
};

@interface TestResults : NSObject

/**
 The total number of test steps.
 */
@property (assign, readonly, nonatomic) NSInteger steps;

/**
 The total number of test steps that matched the baseline.
 */
@property (assign, readonly, nonatomic) NSInteger matches;

/**
 The total number of test steps that did not match the baseline.
 */
@property (assign, readonly, nonatomic) NSInteger mismatches;

/**
 The total number of baseline test steps that were missing in the test.
 */
@property (assign, readonly, nonatomic) NSInteger missing;

/**
 The total number of test steps that exactly matched the baseline.
 */
@property (assign, readonly, nonatomic) NSInteger exactMatches;

/**
 The total number of test steps that strictly matched the baseline.
 */
@property (assign, readonly, nonatomic) NSInteger strictMatches;

/**
 The total number of test steps that matched the baseline by content.
 */
@property (assign, readonly, nonatomic) NSInteger contentMatches;

/**
 The total number of test steps that matched the baseline by layout.
 */
@property (assign, readonly, nonatomic) NSInteger layoutMatches;

/**
 The total number of test steps that matched the baseline without performing any comparison.
 */
@property (assign, readonly, nonatomic) NSInteger noneMatches;

/**
 The URL where test results can be viewed.
 */
@property (readonly, nonatomic) NSString *url;

/**
 Whether or not this is a new test.
 */
@property (assign, readonly, nonatomic) BOOL isNew;

/**
 The result status.
 */
@property (assign, readonly, nonatomic) TestResultStatus status;

/**
 Whether or not this test passed.
 */
@property (assign, readonly, nonatomic) BOOL isPassed;

@property (readonly, nonatomic) NSString *name;

@property (readonly, nonatomic) NSString *secretToken;

@property (readonly, nonatomic) NSString *resultsId;

@property (readonly, nonatomic) NSString *appName;

@property (readonly, nonatomic) NSString *batchName;

@property (readonly, nonatomic) NSString *batchId;

@property (readonly, nonatomic) NSString *branchName;

@property (readonly, nonatomic) NSString *hostOS;

@property (readonly, nonatomic) NSString *hostApp;

@property (assign, readonly, nonatomic) CGSize hostDisplaySize;

@property (readonly, nonatomic) NSString *startedAt;

@property (assign, readonly, nonatomic) NSInteger duration;

@property (assign, readonly, nonatomic) BOOL isDifferent;

@property (assign, readonly, nonatomic) BOOL isAborted;

@property (readonly, nonatomic) SessionUrls *appUrls;

@property (readonly, nonatomic) SessionUrls *apiUrls;

@property (readonly, nonatomic) DefaultMatchSettings *defaultMatchSettings;

@property (readonly, copy, nonatomic) NSArray<StepInfo *> *stepsInfo;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionary;

@end
