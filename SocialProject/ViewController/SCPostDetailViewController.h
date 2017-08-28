//
//  SCPostDetailViewController.h
//  SocialProject
//
//  Created by Sean on 8/28/17.
//  Copyright © 2017 Sean. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCPostDetailViewController : UIViewController

- (void)loadDetailViewWithPost:(SCPost *)post;

@end
