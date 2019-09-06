//
//  BaseManager.h
//  AFNHttpRequest
//
//  Created by kfzx-mengxx on 2019/8/22.
//  Copyright © 2019 mengxx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNNetworkManager.h"


@interface BaseManager : NSObject
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;
@end

