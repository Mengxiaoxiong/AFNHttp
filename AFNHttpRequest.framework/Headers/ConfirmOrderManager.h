//
//  ConfirmOrderManager.h
//  AFNHttpRequest
//
//  Created by kfzx-mengxx on 2019/8/29.
//  Copyright © 2019 mengxx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseManager.h"

@class AddressModel;
typedef void (^RespBlock)(BOOL isSuccess,NSString *order_id);
typedef void(^AddressRespBlock) (BOOL isSuccess,NSMutableArray<AddressModel *> *addressModel,AddressModel *defModel);
@interface ConfirmOrderManager : BaseManager
SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(ConfirmOrderManager);

/*!
 @method
 @abstract 批量提交订单
 @param addressId 地址ID
 @param goodsList 需要提交的订单列表
 @param respBlock 返回
 */
-(void)batchOrder:(NSUInteger)addressId Goodslist:(NSString *)goodsList respBlock:(RespBlock)respBlock;

/*!
 @method
 @abstract 获取地址列表
 @param respBlock 返回地址列表
 */
-(void)getAddressList:(AddressRespBlock)respBlock;

/*!
 @method
 @abstract 设置默认地址
 @param respBlock 返回是否成功
 */
- (void)setDefaultAddress:(AddressModel *)addressModel AddressId:(NSInteger)address_id RespBlock:(RespBlock)respBlock;

/*!
 @method
 @abstract 添加用户地址信息
 @param respBlock 返回是否成功
 */
- (void)addAddressModel:(AddressModel *)addressModel RespBlock:(RespBlock)respBlock;

/*!
 @method
 @abstract 删除用户地址信息
 @param respBlock 返回是否成功
 */
- (void)deleteAddressModel:(AddressModel *)addressModel  RespBlock:(RespBlock)respBlock;
@end
