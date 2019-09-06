//
//  MyOrderManager.h
//  AFNHttpRequest
//
//  Created by kfzx-mengxx on 2019/8/30.
//  Copyright © 2019 mengxx. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseManager.h"

typedef void (^RespBlock)(BOOL isSuccess,NSMutableArray *orderList);
@interface MyOrderManager : BaseManager
SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(MyOrderManager);

/*!
 @method
 @abstract 获取订单列表
 @param dataType 获取订单类型  全部all   待派送deliver  派送中delivered  已完成complete
 @param respBlock 返回订单列表
 */
- (void)getOrderListWithDataType:(NSString *)dataType RespBlock:(RespBlock)respBlock;

@end

