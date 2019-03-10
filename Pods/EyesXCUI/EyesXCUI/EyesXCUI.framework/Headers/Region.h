//
//  Region.h
//  EyesXCUI
//
//  Created by Anton Chuev on 10/24/17.
//  Copyright © 2017 Applitools. All rights reserved.
//

#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Represents a CGRect.
 */
@interface Region : NSObject

@property (assign, readonly, nonatomic) NSInteger left;
@property (assign, readonly, nonatomic) NSInteger top;
@property (assign, readonly, nonatomic) NSInteger width;
@property (assign, readonly, nonatomic) NSInteger height;
    
/**
 The (top,left) position of the current region.
 */
@property (assign, nonatomic) CGPoint location;

/**
 The size of the region.
 */
@property (assign, nonatomic) CGSize size;

- (instancetype)initWithRect:(CGRect)rect;
- (instancetype)initWithLeft:(NSInteger)left top:(NSInteger)top width:(NSInteger)width height:(NSInteger)height;
+ (instancetype)emptyRegion;

- (void)makeEmpty;
- (BOOL)isEmpty;
+ (Region *)scaledRegionFromRegion:(Region *)region scaleRatio:(CGFloat)scaleRatio;

/**
 Check if a region is intersected with the current region.
 @param region The initial region.
 @param anotherRegion The region to check intersection with.
 @return YES if the regions are intersected, NO otherwise.
 */
+ (BOOL)region:(Region *)region isIntersectedWithRegion:(Region *)anotherRegion;

/**
 Returns the intersection of two region or empty region if regions don't intersect.
 @param region The initial region.
 @param anotherRegion The region with which to intersect.
 */
+ (Region *)intersectionBetweenRegion:(Region *)region andRegion:(Region *)anotherRegion;

/**
 Check if a specified frame is contained within this region.
 @param rect The frame to test.
 @return YES if the frame is contained within this region, false otherwise.
 */
- (BOOL)containsRect:(CGRect)rect;
- (BOOL)insideRect:(CGRect)rect;
- (NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
