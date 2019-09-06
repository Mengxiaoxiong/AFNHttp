//
//  AFNNetworkManager.h
//  AFNHttpRequest
//
//  Created by kfzx-mengxx on 2019/8/22.
//  Copyright © 2019 mengxx. All rights reserved.
//


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AFNNetworkManager : NSObject
SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(AFNNetworkManager);

- (NSURLSessionDataTask *)POST:(NSString *)URLString
					parameters:(nullable id)parameters
					  progress:(nullable void (^)(NSProgress *uploadProgress))uploadProgress
					   success:(nullable void (^)(NSURLSessionDataTask *task, id _Nullable responseObject))success
					   failure:(nullable void (^)(NSURLSessionDataTask * _Nullable task, NSError *error))failure;


- (nullable NSURLSessionDataTask *)GET:(NSString *)URLString
							parameters:(nullable id)parameters
							  progress:(nullable void (^)(NSProgress *downloadProgress))downloadProgress
							   success:(nullable void (^)(NSURLSessionDataTask *task, id _Nullable responseObject))success
							   failure:(nullable void (^)(NSURLSessionDataTask * _Nullable task, NSError *error))failure;

@end

NS_ASSUME_NONNULL_END
