//
//  logInRegisterManager.h
//  AFNHttpRequest
//
//  Created by 高晓东 on 2019/8/23.
//  Copyright © 2019 mengxx. All rights reserved.
//


#import "BaseManager.h"
#import "UserModel.h"
NS_ASSUME_NONNULL_BEGIN

@class UserModel;

@interface logInRegisterManager : BaseManager
SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(logInRegisterManager);

typedef void (^RespBlock)(BOOL isSuccess,id  _Nullable responseObject);
////typedef void (^GoodsListRespBlock)(BOOL isSuccess,GoodsGroup *listModel);

-(void)getUserRegister:(NSDictionary *)dict respBlock:(RespBlock)respBlock;

-(void)getLoginData:(NSString *)account password:(NSString *)password :(RespBlock)respBlock;

-(void)getUserSendcode:(NSString *)mobile type:(NSString *)type respBlock:(RespBlock)respBlock;

//获取结算中心
//param:
//token      string     用户登录令牌  必选
//dataType        string     类型  all全部    uncomplete 未结算    complete已结算
//page        int    页数
-(void)getUserSettlement:(NSString *)token dataType:(NSString *)dataType page:(NSString *)page respBlock:(RespBlock)respBlock;

//29.获取用户结算详细数据
//param:
//token      string     用户登录令牌  必选
//settlement_income_id   int  结算记录编号
-(void)getUserSettlementDetail:(NSString *)token settlement_income_id:(NSString *)settlement_income_id respBlock:(RespBlock)respBlock;

//30.确认打款
//method：post
//param:
//token                    string     用户登录令牌
//settlement_income_id       int 结算记录编号
//regarding                  string         银行流水号
-(void)getUserSettlementReceipt:(NSString *)token settlement_income_id:(NSString *)settlement_income_id  regarding:(NSString *)regarding  respBlock:(RespBlock)respBlock;


//31.获取用户发布帖子列表
//url：www.xingran.art/index.php?s=/api/user.forum/subject/wxapp_id/10001
//method：get
//param：
//token     string  用户登录令牌
//page   int  页数
-(void)getUserForumSubject:(NSString *)token page:(NSString *)page  respBlock:(RespBlock)respBlock;

//32.获取指定分类下帖子列表
//url：www.xingran.art/index.php?s=/api/forum/list/wxapp_id/10001
//method：get
//param：
//category_id   int   所属分类编号
-(void)getUserForumList:(NSString *)category_id  respBlock:(RespBlock)respBlock;

//35.获取所有帖子分类
//url：www.xingran.art/index.php?s=/api/forum/getcate/wxapp_id/10001
//method：get
//param：
//returndata：json
-(void)getUserForumGetcate:(RespBlock)respBlock;

//36.获取指定帖子详情
//url：www.xingran.art/index.php?s=/api/forum/detail/wxapp_id/10001
//method：get
//param：
//subject_id    int   帖子编号
//returndata：json
-(void)getUserForumDetail:(NSString *)subject_id  respBlock:(RespBlock)respBlock;

///34.获取指定帖子的评论
//url：www.xingran.art/index.php?s=/api/forum/comments/wxapp_id/10001
//method：get
//param：
//forum_subject_id   int  帖子分类编号
//page     int  分页数
//returndata：

-(void)getUserForumComments:(NSString *)forum_subject_id  respBlock:(RespBlock)respBlock;

///39.发布交流帖子
//url：www.xingran.art/index.php?s=/api/forum/createsubject/wxapp_id/10001
//method：post
//param：
//token     string    用户登录令牌
//category_id  int  所属分类编号
//title    string   帖子标题
//content  string  帖子内容
//image  array    帖子图片

-(void)getUserForumCreatesubject:(NSString *)token  category_id:(NSString *)category_id title:(NSString *)title content:(NSString *)content image:(NSArray *)image respBlock:(RespBlock)respBlock;

///40.发布帖子评论
//url：www.xingran.art/index.php?s=/api/forum/createcomment/wxapp_id/10001
//method：post
//param：
//token     string    用户登录令牌
//forum_subject_id  int  帖子编号
//content  string  回复内容内容
//images  array    图片

-(void)getUserForumCreatecomment:(NSString *)token  forum_subject_id:(NSString *)forum_subject_id content:(NSString *)content image:(NSArray *)image respBlock:(RespBlock)respBlock;

-(void)fileUpload:(NSString *)token image:(NSData *)image respBlock:(RespBlock)respBlock;
///33.获取用户评论列表
//url：www.xingran.art/index.php?s=/api/user.forum/comment/wxapp_id/10001
//method：get
//param：
//token  string 用户登录令牌
//page    int   分页数
-(void)getUserForumComment:(NSString *)token  page:(NSString *)page respBlock:(RespBlock)respBlock;

///27.修改用户资料信息
//url：www.xingran.art/index.php?s=/api/user/edit/wxapp_id/10001
//method：post
//param:
//token          string     用户登录令牌  必选
//mobile     string    用户手机号  可选
//password string   用户密码     可选
//open_id    string   用户openid   可选
//nickName  string   用户昵称   可选
//avatarUrl  int         用户头像[图像文件编号]   可选
//gender      int         性别  0未知   1男  2女   可选
//country     string    国家  可选
//province    string    省份  可选
//city            string   城市  可选
//address_id   int     默认联系信息编号  可选
//settlement_type    int   结算方式 0周期  1非周期  可选
//returndata:json
-(void)getUserForumEdit:(NSString *)token  mobile:(NSString *)mobile password:(NSString *)password nickName:(NSString *)nickName avatarUrl:(NSString *)avatarUrl settlement_type:(NSString *)settlement_type respBlock:(RespBlock)respBlock;

///20.用户详情
//url：www.xingran.art/index.php?s=/api/user.index/detail/wxapp_id/10001
//method：get
//param：
//token   string     用户登录令牌
-(void)getUserIndexDetail:(NSString *)token respBlock:(RespBlock)respBlock;

@end

NS_ASSUME_NONNULL_END
