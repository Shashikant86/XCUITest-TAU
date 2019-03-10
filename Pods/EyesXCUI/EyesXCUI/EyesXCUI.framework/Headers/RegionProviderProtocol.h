//
//  RegionProviderProtocol.h
//  EyesXCUI
//
//  Created by Anton Chuev on 10/26/17.
//  Copyright © 2017 Applitools. All rights reserved.
//

#import "Region.h"

@protocol RegionProviderProtocol <NSObject>

- (Region *)getRegion;

@end
