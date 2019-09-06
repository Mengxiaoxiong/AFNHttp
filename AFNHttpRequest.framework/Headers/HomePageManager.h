//
//  HomePageManager.h
//  AFNHttpRequest
//
//  Created by kfzx-mengxx on 2019/8/22.
//  Copyright © 2019 mengxx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseManager.h"


@class GoodsListModel,GoodsGroup;
@interface HomePageManager : BaseManager
SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(HomePageManager);


typedef void (^RespBlock)(BOOL isSuccess,GoodsListModel *listModel);
typedef void (^GoodsListRespBlock)(BOOL isSuccess,GoodsGroup *listModel);

-(void)getCategoryList:(RespBlock)respBlock;

-(void)getCategoryGoodsList:(NSUInteger)goodsId respBlock:(GoodsListRespBlock)respBlock;

-(void)getCategorySearchGoodsList:(NSUInteger)goodsId searchContext:(NSString *)searchContext respBlock:(GoodsListRespBlock)respBlock;

-(void)getBannerListBlock:(void (^)(NSArray *imageList))respBlock;
@end

