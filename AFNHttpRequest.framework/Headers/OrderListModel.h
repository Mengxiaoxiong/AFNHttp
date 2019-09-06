//
//  OrderListModel.h
//  AFNHttpRequest
//
//  Created by kfzx-mengxx on 2019/8/30.
//  Copyright © 2019 mengxx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GoodsGroup.h"

NS_ASSUME_NONNULL_BEGIN

@interface OrderListModel : NSObject

@property (nonatomic, assign) NSUInteger goodsCount;
@property (nonatomic, assign) float  goodsTotalPrice;
@property (nonatomic, assign) NSUInteger order_id;//订单编号
@property (nonatomic, assign) NSUInteger deliver_status;//  10待配送   20 已配送
@property (nonatomic, assign) NSUInteger order_status;//10进行中  30已完成
@property (nonatomic, assign) NSUInteger order_no;//订单弄编号 
@property (nonatomic, strong) NSMutableArray <GoodsModel *>* goodsList;//产品列表

@end

NS_ASSUME_NONNULL_END
