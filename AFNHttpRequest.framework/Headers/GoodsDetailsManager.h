//
//  GoodsDetailsManager.h
//  AFNHttpRequest
//
//  Created by kfzx-mengxx on 2019/8/26.
//  Copyright © 2019 mengxx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseManager.h"
@class GoodsModel;

typedef void (^RespBlock)(BOOL isSuccess,GoodsModel *model);
@interface GoodsDetailsManager : BaseManager
SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(GoodsDetailsManager);


- (void)getGoodsDetails:(NSUInteger)goods_id RespBlock:(RespBlock)respBlock;

@end

