//
//  MatchLevel.h
//  ApplitoolsEyes
//
//  Created by Anton Chuev on 11/9/16.
//  Copyright © 2016 Applitools. All rights reserved.
//

#ifndef MatchLevel_h
#define MatchLevel_h

#import <Foundation/Foundation.h>

/**
 The extent in which two images match (or are expected to match).
 */
typedef NS_ENUM(NSInteger, MatchLevel) {
    /**
     Images do not necessarily match.
     */
    MatchLevelNone = 1,
    
    /**
     Images have the same layout.
     */
    MatchLevelLayout,
    
    /**
     Images have the same outline.
     */
    MatchLevelContent,
    
    /**
     Images are nearly identical.
     */
    MatchLevelStrict,
    
    /**
     Images are identical.
     */
    MatchLevelExact
};

#endif /* MatchLevel_h */
