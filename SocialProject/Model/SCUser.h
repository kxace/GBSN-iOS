//
//  SCUser.h
//  SocialProject
//
//  Created by Sean on 8/28/17.
//  Copyright © 2017 Sean. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface SCUser : NSObject

@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *password;

+ (BOOL)isUserLogin;
+ (void)userLogInSuccess;
+ (NSString *)defaultUserName;
+ (void)saveDefaultUserName:(NSString *)username;

@end
