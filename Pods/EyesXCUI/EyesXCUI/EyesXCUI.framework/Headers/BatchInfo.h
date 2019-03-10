//
//  ATBatchInfo.h
//  ApplitoolsEyes
//
//  Created by Anton Chuev on 9/1/16.
//  Copyright © 2016 Applitools. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 A batch of tests.
 */
@interface BatchInfo : NSObject

/**
 The name of batch or nil if anonymous.
 */
@property (readonly, nonatomic) NSString *name;
    
/**
 Batch start time converted to string.
 */
@property (readonly, nonatomic) NSString *startedAtString;
    
/**
 The id of the current batch.
 */
@property (strong, nonatomic) NSString *batchId;

/**
 Creates a new BatchInfo instance.
 @param name Name of batch or nil if anonymous.
 */
- (instancetype)initWithName:(NSString *)name;

/**
 Creates a new BatchInfo instance.
 @param name Name of batch or nil if anonymous.
 @param startedAt Batch start time
 */
- (instancetype)initWithName:(NSString *)name startedAt:(NSDate *)startedAt;
- (NSDictionary *)dictionary;

@end
