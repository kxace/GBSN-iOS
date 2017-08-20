//
//  SCPost.h
//  SocialProject
//
//  Created by Sean on 8/18/17.
//  Copyright © 2017 Sean. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CLLocation;

@interface SCPost : NSObject

@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) CLLocation *location;
- (instancetype)initWithDictionary:(NSDictionary *) dictionary;

@end
