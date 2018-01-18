//
//  SCPost.h
//  Social
//
//

#import <Foundation/Foundation.h>

@class CLLocation;

@interface SCPost : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) CLLocation *location;

- (instancetype)initWithDictionary:(NSDictionary *)dictinonary;

@end
