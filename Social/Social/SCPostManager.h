//
//  SCPostManager.h
//  Social
//
//  Created by yu jianing on 2017/10/13.
//  Copyright © 2017年 yu jianing. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SCPost;
@class CLLocation;

@interface SCPostManager : NSObject

/*
 * Create posts with message
 */
+ (void)createPostWithMessage:(NSString *)message andCompletion:(void(^)(NSError *error))completionBlock;

/*
 * load all posts within a givin location and range
 */
+ (void)getPostsWithLocation:(CLLocation *)location range:(NSInteger)range andCompletion:(void(^)(NSArray <SCPost *>* posts, NSError *error))completionBlock;

@end
