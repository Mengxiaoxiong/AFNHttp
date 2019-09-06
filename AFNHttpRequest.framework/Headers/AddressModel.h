//
//  AddressModel.h
//  huiLife
//
//  Created by kfzx-mengxx on 2019/8/28.
//  Copyright © 2019 Gxd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AddressModel : NSObject <NSCoding>


@property (nonatomic,assign) BOOL isDefault;
@property (nonatomic,strong) NSString *gender;
@property (nonatomic,strong) NSString *address;//地址
@property (nonatomic,strong) NSString *doorplate;//门牌

@property (nonatomic,assign) NSInteger address_id;
@property (nonatomic,strong) NSString *name;//姓名
@property (nonatomic,strong) NSString *province;//省
@property (nonatomic,strong) NSString *city;//市
@property (nonatomic,strong) NSString *region;//区
@property (nonatomic,strong) NSString *detail;//详细地址
@property (nonatomic,strong) NSString *phoneNum;//手机号
@end

@interface AddressListModel : NSObject <NSCoding>
SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(AddressListModel);
@property (nonatomic,strong) NSMutableArray<AddressModel *> *modelList;


- (AddressListModel *)getAddressListModel;
- (void)setAddressListModel:(AddressModel *)addressModel;


@end
