//
//  MobvenConnectionHandler.h
//  MobvenBugKit
//
//  Created by Ahmet Kazım Günay on 19/10/15.
//  Copyright © 2015 Ahmet Kazım Günay. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, MethodType) {
    POST,
    GET
};

@interface MobvenConnectionHandler : NSObject

+ (void)startPostConnectionWithParams:(NSDictionary *)params
                               urlStr:(NSString *)urlStr
                            withToken:(BOOL)withToken
                              success:(void(^)(NSDictionary *response))success
                              failure:(void(^)(NSError *error))failure;

+ (void)startGetConnectionWithParams:(NSDictionary *)params
                              urlStr:(NSString *)urlStr
                           withToken:(BOOL)withToken
                             success:(void(^)(NSDictionary *response))success
                             failure:(void(^)(NSError *error))failure;

+ (NSMutableURLRequest *)prepareRequestModelWithUrlStr:(NSString *)urlStr
                                            methodType:(MethodType)methodType
                                                params:(NSDictionary *)params
                                             withToken:(BOOL)withToken;

+ (void) sendRequest:(NSURLRequest*) request
            priority:(dispatch_queue_priority_t) priority
           onSuccess:(void(^)(NSURLResponse* response, NSData* data)) successBlock
             onError:(void(^)(NSError* error)) errorBlock;


// because if auth token service response hasnt got yet, or for one time auth token service is broken for any reason response must be handled in service manager to get new auth token service
+ (void)startPostConnectionWithCustomResponseHandler:(NSDictionary *)params
                                              urlStr:(NSString *)urlStr
                                           withToken:(BOOL)withToken
                                             success:(void(^)(NSDictionary *response))success
                                             failure:(void(^)(NSError *error))failure;

@end
