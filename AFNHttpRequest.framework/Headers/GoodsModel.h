//
//  GoodsModel.h

//
//  Created by Mengxx on 2019/8/18.
//  Copyright © 2019年 BattlePetal. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GoodsModel : NSObject
@property (nonatomic, assign) float shouldPayMoney;

@property (nonatomic, assign) NSUInteger goodsId;//商品编号
@property (nonatomic, assign) NSUInteger shopId;//商家编号
@property (nonatomic, strong) NSString *goodsName;//商品名称
@property (nonatomic, strong) NSString *goodsImage;
@property (nonatomic, strong) NSString *goodsPrice;


@property (nonatomic, assign) NSInteger productQty;         //商品数
@property (nonatomic, strong) NSString *discount;//拆扣
@property (nonatomic, strong) NSString *goodsDescription;//商品卖点
@property (nonatomic, strong) NSString *spec_sku_id;//客户端需要操作这个逼玩意，但是最后你要去sku里反找出goods_sku_id进行上送。总之就是傻B
@property (nonatomic, assign) NSUInteger default_goods_sku_id;//默认规格编号
@property (nonatomic, strong) NSString *current_goods_sku;//当前已选规格
@property (nonatomic, strong) NSArray *spec;//这个逼玩意里存的全部规格
@property (nonatomic, strong) NSArray *sku;//用这逼玩意查goods_sku_id
@property (nonatomic, strong) NSString *content;//产品详情
@property (nonatomic, assign) NSUInteger goods_sales;//产品销量
@property (nonatomic, assign) NSUInteger spec_type;//10单规格  20 多规格
@property (nonatomic,strong) NSString *shopName;//商店名称

@end
