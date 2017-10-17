//
//  SCHomeViewController.h
//  Social
//
//  Created by yu jianing on 2017/10/13.
//  Copyright © 2017年 yu jianing. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>


@class SCPost;

@interface SCHomeViewController : UIViewController

- (void)loadResultPageWithPosts:(NSArray <SCPost *>*)posts;

@end

