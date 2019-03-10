//
//  AppUrls.h
//  Applitools
//
//  Created by Anton Chuev on 5/4/18.
//  Copyright © 2018 Applitools. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AppUrls : NSObject

@property (readonly, nonatomic) NSString *step;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionary;

@end
