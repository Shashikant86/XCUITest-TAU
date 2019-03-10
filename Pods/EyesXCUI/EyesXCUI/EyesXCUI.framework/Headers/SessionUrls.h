//
//  SessionUrls.h
//  Applitools
//
//  Created by Anton Chuev on 5/4/18.
//  Copyright © 2018 Applitools. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SessionUrls : NSObject

@property (readonly, nonatomic) NSString *batch;
@property (readonly, nonatomic) NSString *session;

- (instancetype)initWithDictionary:(NSDictionary *)dict;
- (NSDictionary *)dictionary;

@end
