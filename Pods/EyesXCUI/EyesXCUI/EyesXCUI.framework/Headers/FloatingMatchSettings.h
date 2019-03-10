//
//  FloatingMatchSettings.h
//  EyesXCUI
//
//  Created by Anton Chuev on 10/25/17.
//  Copyright © 2017 Applitools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

NS_ASSUME_NONNULL_BEGIN

@interface FloatingMatchSettings : NSObject

@property (assign, readonly, nonatomic) NSInteger left;
@property (assign, readonly, nonatomic) NSInteger top;
@property (assign, readonly, nonatomic) NSInteger width;
@property (assign, readonly, nonatomic) NSInteger height;

@property (assign, readonly, nonatomic) NSInteger maxUpOffset;
@property (assign, readonly, nonatomic) NSInteger maxDownOffset;
@property (assign, readonly, nonatomic) NSInteger maxLeftOffset;
@property (assign, readonly, nonatomic) NSInteger maxRightOffset;

- (instancetype)initWithLeft:(NSInteger)left
                         top:(NSInteger)top
                       width:(NSInteger)width
                      height:(NSInteger)height
                 maxUpOffset:(NSInteger)maxUpOffset
               maxDownOffset:(NSInteger)maxDownOffset
               maxLeftOffset:(NSInteger)maxLeftOffset
              maxRightOffset:(NSInteger)maxRightOffset;

- (instancetype)initWithRegion:(FloatingMatchSettings *)region;
- (NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
