//
//  SCPost.h
//  Social
//
//  Created by yu jianing on 2017/10/13.
//  Copyright © 2017年 yu jianing. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CLLocation;

@interface SCPost : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) CLLocation *location;

- (instancetype)initWithDictionary:(NSDictionary *)dictinonary;

@end
