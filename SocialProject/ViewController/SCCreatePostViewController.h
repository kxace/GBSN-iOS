//
//  SCCreatePostViewController.h
//  SocialProject
//
//  Created by Sean on 8/28/17.
//  Copyright © 2017 Sean. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCCreatePostViewControllerDelegate <NSObject>

- (void)didCreatePost;

@end
@interface SCCreatePostViewController : UIViewController

@property (nonatomic, weak) id<SCCreatePostViewControllerDelegate> delegate;

@end

