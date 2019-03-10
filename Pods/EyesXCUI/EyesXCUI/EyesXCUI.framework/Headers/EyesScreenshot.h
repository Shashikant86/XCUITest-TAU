//
//  ATEyesScreenshot.h
//  ApplitoolsEyes
//
//  Created by Anton Chuev on 9/1/16.
//  Copyright © 2016 Applitools. All rights reserved.
//

#import "Region.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Base class for handling screenshots.
 */
@interface EyesScreenshot : NSObject
{
    UIImage *_image;
}

/**
 @return The screenshot image.
*/
@property (readonly, nonatomic) UIImage *image;

- (instancetype)initWithImage:(UIImage *)image;

@end

@interface EyesScreenshot(Cropping)

/**
 Cropes the given region from the current screenshot.
 @param region The region for which we should get the sub screenshot.
 @param scaleRatio The ratio of device or image.
 */
- (void)cropRegion:(Region *)region scale:(CGFloat)scaleRatio;

/**
 Cropes status bar from the current screenshot.
 @param statusBarHeight Height of the status bar.
 @param scaleRatio The ratio of device or image.
 */
- (void)cropStatusBarWithHeight:(CGFloat)statusBarHeight scale:(CGFloat)scaleRatio;

@end

NS_ASSUME_NONNULL_END
