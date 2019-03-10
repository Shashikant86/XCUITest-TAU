//
//  ImageMatchSettings.h
//  ApplitoolsEyes
//
//  Created by Anton Chuev on 11/9/16.
//  Copyright © 2016 Applitools. All rights reserved.
//

#import "MatchLevel.h"
#import <Foundation/Foundation.h>

@class Region, FloatingMatchSettings;

NS_ASSUME_NONNULL_BEGIN

/**
 Encapsulates match settings for a session.
 */
@interface ImageMatchSettings : NSObject

/**
 The "strictness" level of the match.
 */
@property (assign, nonatomic) MatchLevel matchLevel;

/**
 The parameters for the "IgnoreCaret" match settings.
 */
@property (assign, nonatomic) BOOL ignoreCaret;

/**
 The array of regions to ignore.
 */
@property (copy, nonatomic) NSArray<Region *> *ignoredRegions;

/**
 The array of regions to check using the Layout method.
 */
@property (copy, nonatomic) NSArray<Region *> *layoutRegions;

/**
 The array of regions to check using the Strict method.
 */
@property (copy, nonatomic) NSArray<Region *> *strictRegions;

/**
 The arrayof regions to check using the Content method.
 */
@property (copy, nonatomic) NSArray<Region *> *contentRegions;

/**
 Sets an array of floating regions.
 */
@property (copy, nonatomic) NSArray<FloatingMatchSettings *> *floatingRegions;

+ (instancetype)defaultImageMatchSettings;
- (instancetype)initWithMatchLevel:(MatchLevel)matchLevel;
- (NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
