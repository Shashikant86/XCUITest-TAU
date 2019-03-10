//
//  StepInfo.h
//  Applitools
//
//  Created by Anton Chuev on 5/4/18.
//  Copyright © 2018 Applitools. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ApiUrls.h"
#import "AppUrls.h"

/**
* Encapsulates step information data received by the tests results.
*/
@interface StepInfo : NSObject

@property (readonly, nonatomic) ApiUrls *apiUrls;
@property (readonly, nonatomic) AppUrls *appUrls;
@property (readonly, nonatomic) NSString *name;
@property (assign, readonly, nonatomic) BOOL isDifferent;
@property (assign, readonly, nonatomic) BOOL hasBaselineImage;
@property (assign, readonly, nonatomic) BOOL hasCurrentImage;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionary;

@end
