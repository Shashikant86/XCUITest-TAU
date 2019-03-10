//
//  DefaultMatchSettings.h
//  Applitools
//
//  Created by Anton Chuev on 5/10/18.
//  Copyright © 2018 Applitools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "Region.h"

@interface DefaultMatchSettings : NSObject

@property (readonly, nonatomic) NSArray<Region *> *content;
@property (readonly, nonatomic) NSArray<Region *> *floating;
@property (readonly, nonatomic) NSArray<Region *> *ignore;
@property (assign, readonly, nonatomic) BOOL ignoreCaret;
@property (readonly, nonatomic) NSArray<Region *> *layout;
@property (readonly, nonatomic) NSString *matchLevel;
@property (assign, readonly, nonatomic) BOOL reminder;
@property (assign, readonly, nonatomic) CGFloat scale;
@property (assign, readonly, nonatomic) BOOL splitBottomHeight;
@property (assign, readonly, nonatomic) BOOL splitTopHeight;
@property (readonly, nonatomic) NSArray<Region *> *strict;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionary;

@end
