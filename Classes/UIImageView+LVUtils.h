//
//  LVUtils
//
//
//  Created by LawLincoln on 14-4-25.
//  Copyright (c) 2014年 SelfStudio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImageView (LVUtils)

- (void)LVSetUserInfo:(NSDictionary*)dict;
- (NSDictionary*)LVUserInfo;
- (void)LVEnableTapForDelegate:(id)delegete withSelector:(SEL)sel;


/**
 @deprecated This method has been deprecated. Use -LVSetUserInfo: instead.
 */
- (void)setUserInfo:(NSDictionary*)dict DEPRECATED_ATTRIBUTE;
/**
 @deprecated This method has been deprecated. Use -LVUserInfo: instead.
 */
- (NSDictionary*)userInfo DEPRECATED_ATTRIBUTE;
/**
 @deprecated This method has been deprecated. Use -LVEnableTapForDelegate:withSelector: instead.
 */
- (void)enableTapForDelegate:(id)delegete withSelector:(SEL)sel DEPRECATED_ATTRIBUTE;


@end
