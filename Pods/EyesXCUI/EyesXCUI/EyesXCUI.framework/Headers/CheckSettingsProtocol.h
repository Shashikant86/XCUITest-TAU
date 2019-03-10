//
//  CheckSettingsProtocol.h
//  Applitools
//
//  Created by Anton Chuev on 8/20/18.
//  Copyright © 2018 Applitools. All rights reserved.
//

#import "Region.h"
#import "MatchLevel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CheckSettingsProtocol <NSObject>

/**
 Adds one or more ignore regions.
 @param regions Array of regions to ignore when validating the screenshot.
 @return This instance of the settings object.
 */
- (id<CheckSettingsProtocol>)ignore:(NSArray<Region *> *)regions;

/**
 * Adds one or more layout regions.
 * @param regions Regions to match using the Layout method.
 * @return An updated clone of this settings object.
 */
- (id<CheckSettingsProtocol>)layout:(NSArray<Region *> *)regions;

/**
 * Adds one or more strict regions.
 * @param regions Regions to match using the Strict method.
 * @return An updated clone of this settings object.
 */
- (id<CheckSettingsProtocol>)strict:(NSArray<Region *> *)regions;

/**
 * Adds one or more layout regions.
 * @param regions Regions to match using the Content method.
 * @return An updated clone of this settings object.
 */
- (id<CheckSettingsProtocol>)content:(NSArray<Region *> *)regions;

/**
 Defines that the screenshot will contain the entire element or region, even if it's outside the view.
 @return This instance of the settings object.
 */
- (id<CheckSettingsProtocol>)fully;

/**
 Adds a floating region. A floating region is a a region that can be placed within the boundaries of a bigger region.
 @param regions One or more content rectangles.
 @param maxOffset How much each of the content rectangles can move in any direction.
 @return This instance of the settings object.
 */
- (id<CheckSettingsProtocol>)floating:(NSArray<Region *> *)regions maxOffset:(NSInteger)maxOffset;

/**
 Adds a floating region. A floating region is a a region that can be placed within the boundaries of a bigger region.
 @param region The content rectangle.
 @param maxUpOffset How much the content can move up.
 @param maxDownOffset How much the content can move down.
 @param maxLeftOffset How much the content can move to the left.
 @param maxRightOffset How much the content can move to the right.
 @return This instance of the settings object.
 */
- (id<CheckSettingsProtocol>)floating:(Region *)region maxUpOffset:(NSInteger)maxUpOffset maxDownOffset:(NSInteger)maxDownOffset maxRightOffset:(NSInteger)maxRightOffset maxLeftOffset:(NSInteger)maxLeftOffset;

/**
 Defines the timeout to use when acquiring and comparing screenshots.
 @param timeoutInSeconds The timeout to use in seconds.
 @return This instance of the settings object.
 */
- (id<CheckSettingsProtocol>)timeoutInSeconds:(NSUInteger)timeoutInSeconds;

/**
 Shortcut to set the match level to MatchLevelLayout.
 @return This instance of the settings object.
 */
- (id<CheckSettingsProtocol>)layout;

/**
 Shortcut to set the match level to MatchLevelExact.
 @return This instance of the settings object.
 */
- (id<CheckSettingsProtocol>)exact;

/**
 Shortcut to set the match level to MatchLevelStrict.
 @return This instance of the settings object.
 */
- (id<CheckSettingsProtocol>)strict;

/**
 Shortcut to set the match level to MatchLevelContent.
 @return This instance of the settings object.
 */
- (id<CheckSettingsProtocol>)content;

/**
 Set the match level by which to compare the screenshot.
 @param matchLevel The match level to use.
 @return This instance of the settings object.
 */
- (id<CheckSettingsProtocol>)matchLevel:(MatchLevel)matchLevel;

/**
 Defines if to detect and ignore a blinking caret in the screenshot.
 @param ignoreCaret Whether or not to detect and ignore a blinking caret in the screenshot.
 @return This instance of the settings object.
 */
- (id<CheckSettingsProtocol>)ignoreCaret:(BOOL)ignoreCaret;

/**
 Defines to ignore a blinking caret in the screenshot.
 @return This instance of the settings object.
 */
- (id<CheckSettingsProtocol>)ignoreCaret;

/**
 Defines to leave status bar in the screenshot if it is visible.
 @return This instance of the settings object.
 */
- (id<CheckSettingsProtocol>)withStatusBar;

@end

NS_ASSUME_NONNULL_END
