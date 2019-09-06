//
//  GoodsGroup.h
 
//
//  Created by Mengxx on 2019/8/18.
//  Copyright © 2019年 BattlePetal. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GoodsModel.h"

@interface GoodsGroup : NSObject
@property (nonatomic, assign) NSUInteger goodsGroupId;//产品组ID
@property (nonatomic, strong) NSString *goodsGroupName;//产品组名称
@property (nonatomic, strong) NSMutableArray *bannerImageList;//banner图
@property (nonatomic, strong) NSMutableArray <GoodsModel *>* goodsList;//产品列表
@end
