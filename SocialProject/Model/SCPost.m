//
//  SCPost.m
//  SocialProject
//
//  Created by Sean on 8/18/17.
//  Copyright © 2017 Sean. All rights reserved.
//

#import "SCPost.h"
#import <MapKit/MapKit.h>

@implementation SCPost

- (instancetype)initWithDictionary:(NSDictionary *) dictionary
{
    if (self = [super init]) {
        self.message = dictionary[@"message"];
    }
    return self;
}

@end
