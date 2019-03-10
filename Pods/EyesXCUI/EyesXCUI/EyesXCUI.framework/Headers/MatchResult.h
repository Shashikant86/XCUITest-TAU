//
//  ATMatchResult.h
//  ApplitoolsEyes
//
//  Created by Anton Chuev on 9/1/16.
//  Copyright © 2016 Applitools. All rights reserved.
//

#import "EyesScreenshot.h"

@interface MatchResult : NSObject

@property (readonly, nonatomic) EyesScreenshot *screenshot;
@property (readonly, assign, nonatomic) BOOL asExpected;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionary;

@end
