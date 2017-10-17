//
//  SCCreatePostViewController.h
//  Social
//
//  Created by yu jianing on 2017/10/14.
//  Copyright © 2017年 yu jianing. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCCreatePostViewControllerDelegate <NSObject>

- (void)didCreatePost;

@end
@interface SCCreatePostViewController : UIViewController

@property (nonatomic, weak) id<SCCreatePostViewControllerDelegate> delegate;

@end

