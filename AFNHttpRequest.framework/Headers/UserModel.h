//
//  UserModel.h
//  AFNHttpRequest
//
//  Created by 高晓东 on 2019/8/23.
//  Copyright © 2019 mengxx. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UserModel : NSObject<NSCoding>
SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(UserModel);

@property (nonatomic,copy) UserModel *model; 

@property (nonatomic,assign) NSInteger user_id; //用户编号
@property (nonatomic,copy) NSString *avatar;//用户头像地址
@property (nonatomic,copy) NSString *username;//用户昵称
@property (nonatomic,copy) NSString *tel;//用户手机
@property (nonatomic,copy) NSString *settlement_type;//用户结算方式
@property (nonatomic,assign) NSInteger settlement_type_id;//用户结算方式
@property (nonatomic,copy) NSString *token;//登录令牌

+ (void)setUserInfoModel:(UserModel *)UserModel;


@end

@interface loginObject : NSObject

@property (nonatomic,assign) NSInteger code;
@property (nonatomic,copy) NSString *msg;
@property (nonatomic,copy) UserModel *data;

@end

NS_ASSUME_NONNULL_END
