//
//  ApiUrls.h
//  Applitools
//
//  Created by Anton Chuev on 5/4/18.
//  Copyright © 2018 Applitools. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ApiUrls : NSObject

@property (readonly, nonatomic) NSString *baselineImage;
@property (readonly, nonatomic) NSString *currentImage;
@property (readonly, nonatomic) NSString *diffImage;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionary;

@end
